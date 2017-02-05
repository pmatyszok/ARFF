#ifndef __INCLUDED_ARFF_INSTANCE_H__
#define __INCLUDED_ARFF_INSTANCE_H__
/**
 * @file arff_instance.h
 * @brief Contains the 'ArffInstance' class
 */

#include <vector>

#include <arff_utils.h>
#include <arff_value.h>


/**
 * @class ArffInstance arff_instance.h
 * @brief Class to represent one single instance of data
 */
class ArffInstance
{
public:
	/**
	 * @brief Constructor
	 */
	ArffInstance();

	/**
	 * @brief Destructor
	 */
	~ArffInstance();

	/**
	 * @brief Number of elements in the instance
	 * @return number
	 */
	std::size_t size() const;

	/**
	 * @brief Add an instance data into the list
	 * @param val the data to be added
	 *
	 * Note that this pointer will be owned by this class from here onwards!
	 */
	void add(ArffValue* val);

	/**
	 * @brief Get an instance data at the given location
	 * @param idx location (starts from 0)
	 * @return data
	 *
	 * Note that this pointer will still be owned by this class!
	 */
	ArffValue* get(std::size_t idx) const;


private:
	/** instance size */
	std::size_t m_size;
	/** instance data */
	std::vector<ArffValue*> m_data;
};


/* DO NOT WRITE ANYTHING BELOW THIS LINE!!! */
#endif // __INCLUDED_ARFF_INSTANCE_H__
