class Solution(object):
    def groupAnagrams(self, strs):
        ["eat","tea","tan","ate","nat","bat"]
        hash_map={}
        for s in strs:
            temp="".join(sorted(s))
            if temp in hash_map:
                hash_map[temp].append(s)
            else:
                hash_map[temp]=[s]
        return list(hash_map.values())
        