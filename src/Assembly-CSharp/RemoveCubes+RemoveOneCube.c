
/* CubeDamageState CanRemoveCube(CubeBase, Single, Func`2[Byte,MV.WorldObject.PhysicalProperties])
    */

CubeDamageState__Enum
Assembly-CSharp.dll::RemoveCubes+RemoveOneCube::RemoveCubes_RemoveOneCube_CanRemoveCube
          (CubeBase *cubeBase,float damage,
          Func_2_Byte_MV_WorldObject_PhysicalProperties_ *getPhysicalProperites,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__CubeBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MV__WorldObject__CubeBase->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__CubeBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MV__WorldObject__CubeBase->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cubeBase == (CubeBase *)0x0) {
    return CubeDamageState__Enum_NoDamage;
  }
  pBVar1 = (cubeBase->fields).faceMaterials;
  if (pBVar1 != (Byte__Array *)0x0) {
    if ((int)pBVar1->max_length == 0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      CVar3 = (*pcVar2)();
      return CVar3;
    }
    if (getPhysicalProperites != (Func_2_Byte_MV_WorldObject_PhysicalProperties_ *)0x0) {
      lVar4 = (*(getPhysicalProperites->fields)._._.invoke_impl)
                        (auStack_5,(getPhysicalProperites->fields)._._.method_code,
                         pBVar1->vector[0],(getPhysicalProperites->fields)._._.method);
      fVar6 = *(float *)(lVar4 + 0x10);
      if (fVar6 == 0.0) {
        return CubeDamageState__Enum_NoDamage;
      }
      if (damage < fVar6) {
        return (CubeDamageState__Enum)(damage < fVar6);
      }
      return CubeDamageState__Enum_Destroyed;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  CVar3 = (*pcVar2)();
  return CVar3;
}


/* Boolean HandleRemoveOneCube(IntVector, ICubeModel, ICubeModel) */

bool Assembly-CSharp.dll::RemoveCubes+RemoveOneCube::RemoveCubes_RemoveOneCube_HandleRemoveOneCube
               (IntVector *fineGrainedPosition,ICubeModel *terrainWorldObject,
               ICubeModel *fineGrainedTerrainWorldObject,MethodInfo *method)

{
  IStackX_8.x = fineGrainedPosition->x;
  IStackX_8.y = fineGrainedPosition->y;
  IStackX_8.z = fineGrainedPosition->z;
  bVar1 = RemoveCubes_RemoveOneCube_TryRemoveCubeFromFineGrainedTerrain
                    (&IStackX_8,fineGrainedTerrainWorldObject,(MethodInfo *)0x0);
  if (bVar1 == 0) {
    IStackX_8.x = fineGrainedPosition->x;
    IStackX_8.y = fineGrainedPosition->y;
    IStackX_8.z = fineGrainedPosition->z;
    bVar1 = RemoveCubes_RemoveOneCube_TryRemoveCubeFromTerrain
                      (&IStackX_8,terrainWorldObject,fineGrainedTerrainWorldObject,(MethodInfo *)0x0
                      );
    if (bVar1 == 0) {
      return 0;
    }
  }
  return 1;
}


/* Boolean TryRemoveCubeFromFineGrainedTerrain(IntVector, ICubeModel) */

bool Assembly-CSharp.dll::RemoveCubes+RemoveOneCube::
     RemoveCubes_RemoveOneCube_TryRemoveCubeFromFineGrainedTerrain
               (IntVector *fineGrainedPosition,ICubeModel *fineGrainedTerrainWorldObject,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__CubeBase);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__ICubeModel);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (fineGrainedTerrainWorldObject == (ICubeModel *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    bVar2 = (*pcVar1)();
    return bVar2;
  }
  lVar3 = FUN_?();
  if (*(int *)&(TypeInfo__MV__WorldObject__CubeBase->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__CubeBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__MV__WorldObject__CubeBase->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (lVar3 == 0) {
    return 0;
  }
  FUN_?();
  return 1;
}


/* Boolean TryRemoveCubeFromTerrain(IntVector, ICubeModel, ICubeModel) */

bool Assembly-CSharp.dll::RemoveCubes+RemoveOneCube::
     RemoveCubes_RemoveOneCube_TryRemoveCubeFromTerrain
               (IntVector *fineGrainedPosition,ICubeModel *terrainWorldObject,
               ICubeModel *fineGrainedTerrainWorldObject,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__CubeBase);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__ICubeModel);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MoveCubeFromCoarseToFine);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__ICubeModel);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (fineGrainedTerrainWorldObject != (ICubeModel *)0x0) {
    puVar1 = (undefined8 *)
              FUN_?(&uStack_2,0,TypeInfo__MV__WorldObject__ICubeModel,
                            fineGrainedTerrainWorldObject);
    uStack_2 = *puVar1;
    fVar3 = (float)uStack_2;
    uStack_4 = *(undefined4 *)(puVar1 + 1);
    if (terrainWorldObject != (ICubeModel *)0x0) {
      puVar1 = (undefined8 *)
                FUN_?(&uStack_2,0,TypeInfo__MV__WorldObject__ICubeModel,terrainWorldObject)
      ;
      uStack_2 = *puVar1;
      uStack_4 = *(undefined4 *)(puVar1 + 1);
      IStackX_8.x = fineGrainedPosition->x;
      IStackX_8.y = fineGrainedPosition->y;
      fVar3 = fVar3 / (float)uStack_2;
      IStackX_8.z = fineGrainedPosition->z;
      IStackX_10.x = fineGrainedPosition->x;
      IStackX_10.y = fineGrainedPosition->y;
      fVar5 = (float)func_?((float)(int)IStackX_10.x * fVar3);
      fVar6 = (float)func_?((float)(int)IStackX_8.y * fVar3);
      fVar3 = (float)func_?((float)(int)fineGrainedPosition->z * fVar3);
      IStackX_8._0_4_ = (BADTYPE)fVar3;
      iVar7 = (int16_t)(int)fVar5;
      iVar8 = (int16_t)(int)fVar6;
      IStackX_10.y = iVar8;
      IStackX_10.x = iVar7;
      IStackX_18.z = (int16_t)IStackX_8._0_4_;
      IStackX_18._0_4_ = IStackX_10._0_4_;
      lVar9 = FUN_?();
      if (*(int *)&(TypeInfo__MV__WorldObject__CubeBase->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (lVar9 == 0) {
        return 0;
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MVGameControllerBase);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pMVar10 = TypeInfo__MVGameControllerBase->static_fields->instance;
      if ((pMVar10 != (MVGameControllerBase *)0x0) &&
         (pMVar11 = (pMVar10->fields).game, pMVar11 != (MVNetworkGame *)0x0)) {
        lVar9 = *(longlong *)(lVar9 + 0x20);
        pMVar12 = (pMVar11->fields)._MaterialRepository_k__BackingField;
        if (lVar9 != 0) {
          if (*(int *)(lVar9 + 0x18) == 0) {
code_?:
            FUN_?();
            pcVar13 = (code *)swi(3);
            bVar14 = (*pcVar13)();
            return bVar14;
          }
          bVar15 = *(byte *)(lVar9 + 0x20);
          if (pMVar12 != (MVMaterialRepository *)0x0) {
            if (cRam_? == '\0') {
              FUN_?(&MethodInfo__System__Collections__Generic__List<MVMaterial>__get_Count__
                           );
              LOCK();
              UNLOCK();
              FUN_?(&
                            MethodInfo__System__Collections__Generic__List<MVMaterial>__get_Item_int_
                           );
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pLVar16 = (pMVar12->fields).materials;
            if (pLVar16 != (List_1_MVMaterial_ *)0x0) {
              uVar17 = (pLVar16->fields)._size;
              if ((int)(uint)bVar15 < (int)uVar17) {
                if (uVar17 <= bVar15) {
                  mscorlib.dll::System::ThrowHelper::
                  ThrowHelper_1_ThrowArgumentOutOfRange_IndexException((MethodInfo *)0x0);
                  pcVar13 = (code *)swi(3);
                  bVar14 = (*pcVar13)();
                  return bVar14;
                }
                pMVar18 = (pLVar16->fields)._items;
                if (pMVar18 != (MVMaterial__Array *)0x0) {
                  if ((uint)pMVar18->max_length <= (uint)bVar15) goto code_?;
                  if (pMVar18->vector[bVar15] != (MVMaterial *)0x0) {
                    fVar3 = (pMVar18->vector[bVar15]->fields)._PhysicalProperties_k__BackingField.
                             toughness;
                    goto code_?;
                  }
                }
              }
              else {
                pMVar19 = (pMVar12->fields).noMaterial;
                if (pMVar19 != (MVMaterial *)0x0) {
                  fVar3 = (pMVar19->fields)._PhysicalProperties_k__BackingField.toughness;
code_?:
                  if (fVar3 == 0.0) {
                    return 0;
                  }
                  if (*(int *)&(TypeInfo__MoveCubeFromCoarseToFine->_1).field_0x1c == 0) {
                    FUN_?();
                  }
                  IStackX_18.x = IStackX_10.x;
                  IStackX_18.y = IStackX_10.y;
                  iVar20 = IStackX_8.x;
                  IStackX_18.z = iVar20;
                  MoveCubeFromCoarseToFine::MoveCubeFromCoarseToFine_MoveCube
                            (terrainWorldObject,fineGrainedTerrainWorldObject,&IStackX_18,
                             (MethodInfo *)0x0);
                  IStackX_8.y = iVar8;
                  IStackX_8.x = iVar7;
                  IStackX_8.z = iVar20;
                  FUN_?();
                  IStackX_8.x = fineGrainedPosition->x;
                  IStackX_8.y = fineGrainedPosition->y;
                  IStackX_8.z = fineGrainedPosition->z;
                  RemoveCubes_RemoveOneCube_TryRemoveCubeFromFineGrainedTerrain
                            (&IStackX_8,fineGrainedTerrainWorldObject,(MethodInfo *)0x0);
                  return 1;
                }
              }
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar13 = (code *)swi(3);
  bVar14 = (*pcVar13)();
  return bVar14;
}

