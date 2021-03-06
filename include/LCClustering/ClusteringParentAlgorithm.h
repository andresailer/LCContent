/**
 *  @file   LCContent/include/LCClustering/ClusteringParentAlgorithm.h
 * 
 *  @brief  Header file for the clustering parent algorithm class.
 * 
 *  $Log: $
 */
#ifndef LC_CLUSTERING_PARENT_ALGORITHM_H
#define LC_CLUSTERING_PARENT_ALGORITHM_H 1

#include "Pandora/Algorithm.h"

namespace lc_content
{

/**
 *  @brief  ClusteringParentAlgorithm class
 */
class ClusteringParentAlgorithm : public pandora::Algorithm
{
public:
    /**
     *  @brief Default constructor
     */
    ClusteringParentAlgorithm();

private:
    pandora::StatusCode Run();
    pandora::StatusCode ReadSettings(const pandora::TiXmlHandle xmlHandle);

    std::string     m_clusteringAlgorithmName;      ///< The name of the clustering algorithm to run
    std::string     m_associationAlgorithmName;     ///< The name of the topological association algorithm to run

    std::string     m_inputCaloHitListName;         ///< The name of the input calo hit list, containing the hits to be clustered
    bool            m_restoreOriginalCaloHitList;   ///< Whether to restore the original calo hit list as the "current" list upon completion

    std::string     m_clusterListName;              ///< The name under which to save the new cluster list
    bool            m_replaceCurrentClusterList;    ///< Whether to subsequently use the new cluster list as the "current" list
};

} // namespace lc_content

#endif // #ifndef LC_CLUSTERING_PARENT_ALGORITHM_H
