#pragma once
#include <initializer_list>
#include <limits>
#include <iostream>


namespace nc
{
	template<typename T>
	class list
	{
		struct node_t
		{
			node_t(const T& value) : _value{ value } {}
			T _value;
			node_t* _next{ nullptr };
			node_t* _prev{ nullptr };
		};
	public:
		//constructor
		list() {} //done
		list(const std::initializer_list<T>& ilist); //done
		list(const list& other); //done
		~list(); //destructor //done
		list& operator=(const list& other);

		
		T& front() { return _head->_value; }//done
		T& back() { return tail()->_value; }//done

		void push_front(const T& value); //Done
		void pop_front(); //Done
		void push_back(const T& value);
		void pop_back();
		void remove(const T& value); //done
		void reverse(); // see references for implementation
		//void resize(size_t count, const T& value = T{});
		void clear(); // search online for implementation
		bool empty() { return (size() == 0); }
		size_t size(); // see references for implementation
		size_t max_size() { return std::numeric_limits<size_t>::max(); }
		std::ostream& write(std::ostream& stream);
	private:
		node_t* tail(); //done
	private:
		node_t* _head{ nullptr };
	};

	////////////////////////////////////////

	//constructor to add multiple values
	template<typename T>
	list<T>::list(const std::initializer_list<T>& ilist) {
		for (auto iter = ilist.begin(); iter != ilist.end(); iter++) {
			push_back(*iter);
		}
	}


	template<typename T>
	list<T>::list(const list& other) {
		while (node_t)
		{
			node_t* node = other._head;
			while (node)
			{
				push_back(node->_value);
				node = node->_next;
			}
		}
	}

	template<typename T>
	list<T>::~list() {
		clear();
	}

	template<typename T>
	void list<T>::push_front(const T& value)
	{
		node_t* new_node = new node_t{ value };
		if (_head)
		{
			_head->_prev = new_node;
		}
		new_node->_next = _head;

		_head = new_node;
	}

	template<typename T>
	void list<T>::pop_front()
	{
		if(_head)
		{
			if (_head->_next != nullptr)
			{
				_head->_next->_prev = nullptr;
			}
			_head = _head->_next;
		}
	}

	template<typename T>
	void list<T>::remove(const T& value)
	{
		if (_head != NULL)
		{
			while (_head->_value == value)
			{
				node_t* temp = _head;
				_head = _head->_next;
				delete temp;
			}
			node_t* node = _head;
			while (node->_next != NULL)
			{
				if (node->_value == value)
				{
					if (node->_prev != nullptr)
					{
						node->_prev->_next = node->_next;
					}
					if (node->_next != nullptr)
					{
						node->_next->_prev = node->_prev;
					}
					node_t* temp = node;
					node = node->_next;
					delete temp;
				}
				else
				{
					node = node->_next;
				}
				
			}
			
		}	
	}

	template<typename T>
	typename list<T>::node_t* list<T>::tail()
	{
		if (_head)
		{
			node_t* node = _head;
			while (node->_next != NULL)
			{
				node = node->_next;
			}
			return node;
		}
		else
		{
			return NULL;
		}
	}

	template<typename T>
	void list<T>::push_back(const T& value)
	{
		//add to the end of the list
		if (_head)
		{
			typename list<T>::node_t* node = tail();
			node_t* newNode = new node_t(value);
			newNode->_prev = node;
			node->_next = newNode;
		}
		else
		{
			node_t* newNode = new node_t(value);
			_head = newNode;
		}
	}

	template<typename T>
	void list<T>::clear()
	{
		delete[] _head;
	}

	template<typename T>
	std::ostream& list<T>::write(std::ostream& stream)
	{
		typename list<T>::node_t* traverse = _head;
		while (traverse != NULL)
		{
			stream << traverse->_value << " ";
			traverse = traverse->_next;
		}
		return stream << "\n";
	}

	template<typename T>
	void list<T>::pop_back()
	{
		if (_head != NULL)
		{
			typename list<T>::node_t* end = tail();
			if (end->_prev != NULL)
			{
				end->_prev->_next = nullptr;
			}
			else //just head
			{
				_head = nullptr;
			}
			delete end;
		}
	}
	template<typename T>
	size_t list<T>::size()
	{
		size_t count = 0;
		if (_head != NULL)
		{
			node_t* node = _head;
			while (node != nullptr)
			{
				count++;
				node = node->_next;
			}
			return count;
		}
		else
		{
			return count;
		}
	}

	template<typename T>
	typename list<T>& list<T>::operator = (const list& other)
	{
		if (other._head != NULL) 
		{
			node_t* from = other._head;
			this->_head = new node_t(from->_value);
			from = from->_next;
			while (from != nullptr)
			{
				this->push_back(from->_value);
				from = from->_next;
			}
		}
		
		return *this;
	}

	template<typename T>
	void list<T>::reverse()
	{
		if (_head != nullptr)
		{
			node_t* node = tail();
			_head = node;
			while (node != nullptr)
			{
				node_t* temp = node->_prev;
				node->_prev = node->_next;
				node->_next = temp;
				node = node->_next;
			}
		}
	}
}