
/* Vector3 GetInterpolatedNormal(Terrain, Vector3) */

Vector3 * Assembly-CSharp.dll::RTG::TerrainEx::TerrainEx_GetInterpolatedNormal
                    (Vector3 *__return_storage_ptr__,Terrain *terrain,Vector3 worldPos,
                    MethodInfo *method)

{
  if (terrain != (Terrain *)0x0) {
    this = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)terrain,(MethodInfo *)0x0);
    if (this != (Transform *)0x0) {
      pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                         ((Vector3 *)&stack0xffffffe0,this,(MethodInfo *)0x0);
      uVar2 = pVVar1->x;
      fVar3 = worldPos.x - (float)uVar2;
      pTVar4 = UnityEngine.TerrainModule.dll::UnityEngine::Terrain::Terrain_get_terrainData
                         (terrain,(MethodInfo *)0x0);
      if (pTVar4 != (TerrainData *)0x0) {
        pVVar1 = UnityEngine.TerrainModule.dll::UnityEngine::TerrainData::TerrainData_get_size
                           (&worldPos,pTVar4,(MethodInfo *)0x0);
        worldPos.z = pVVar1->x;
        pTVar4 = UnityEngine.TerrainModule.dll::UnityEngine::Terrain::Terrain_get_terrainData
                           (terrain,(MethodInfo *)0x0);
        if (pTVar4 != (TerrainData *)0x0) {
          worldPos.z = _UNK_? / worldPos.z;
          UnityEngine.TerrainModule.dll::UnityEngine::TerrainData::TerrainData_get_size
                    ((Vector3 *)&stack0xffffffe0,pTVar4,(MethodInfo *)0x0);
          fVar3 = fVar3 * worldPos.z;
          pTVar4 = UnityEngine.TerrainModule.dll::UnityEngine::Terrain::Terrain_get_terrainData
                             (terrain,(MethodInfo *)0x0);
          if (pTVar4 != (TerrainData *)0x0) {
            worldPos.y = (float)&worldPos;
            worldPos.x = (float)&UNK_?;
            worldPos.z = (float)pTVar4;
            pVVar1 = UnityEngine.TerrainModule.dll::UnityEngine::TerrainData::
                     TerrainData_GetInterpolatedNormal
                               ((Vector3 *)worldPos.y,pTVar4,fVar3,0.0,(MethodInfo *)0x0);
            fVar3 = pVVar1->y;
            pvVar5 = (void *)pVVar1->z;
            terrain->klass = (Terrain__Class *)pVVar1->x;
            terrain->monitor = (MonitorData *)fVar3;
            (terrain->fields)._._._.m_CachedPtr = pvVar5;
            return (Vector3 *)terrain;
          }
        }
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  pVVar1 = (Vector3 *)(*pcVar6)();
  return pVVar1;
}


/* Vector2 ToNormCoords(Terrain, Vector3) */

Vector2 Assembly-CSharp.dll::RTG::TerrainEx::TerrainEx_ToNormCoords
                  (Terrain *terrain,Vector3 worldPos,MethodInfo *method)

{
  if (terrain != (Terrain *)0x0) {
    this = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                     ((Component *)terrain,(MethodInfo *)0x0);
    if (this != (Transform *)0x0) {
      pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                         ((Vector3 *)&stack0xffffffe0,this,(MethodInfo *)0x0);
      uVar2 = pVVar1->x;
      fVar3 = pVVar1->z;
      pTVar4 = UnityEngine.TerrainModule.dll::UnityEngine::Terrain::Terrain_get_terrainData
                         (terrain,(MethodInfo *)0x0);
      if (pTVar4 != (TerrainData *)0x0) {
        pVVar1 = UnityEngine.TerrainModule.dll::UnityEngine::TerrainData::TerrainData_get_size
                           ((Vector3 *)&stack0xffffffe0,pTVar4,(MethodInfo *)0x0);
        fVar5 = pVVar1->x;
        pTVar4 = UnityEngine.TerrainModule.dll::UnityEngine::Terrain::Terrain_get_terrainData
                           (terrain,(MethodInfo *)0x0);
        if (pTVar4 != (TerrainData *)0x0) {
          __return_storage_ptr__ = (Vector3 *)(_UNK_? / fVar5);
          pVVar1 = UnityEngine.TerrainModule.dll::UnityEngine::TerrainData::TerrainData_get_size
                             (__return_storage_ptr__,pTVar4,(MethodInfo *)0x0);
          VVar6.y = (worldPos.z - fVar3) * (_UNK_? / pVVar1->z);
          VVar6.x = (worldPos.x - (float)uVar2) * (float)__return_storage_ptr__;
          return VVar6;
        }
      }
    }
  }
  func_?();
  pcVar7 = (code *)swi(3);
  VVar6 = (Vector2)(*pcVar7)();
  return VVar6;
}

