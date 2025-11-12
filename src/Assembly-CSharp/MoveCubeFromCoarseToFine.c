
/* Void AddIndentedCube(ICubeModel, ICubeModel, IntVector) */

void Assembly-CSharp.dll::MoveCubeFromCoarseToFine::MoveCubeFromCoarseToFine_AddIndentedCube
               (ICubeModel *from,ICubeModel *to,IntVector *fromPos,MethodInfo *method)

{
  pIStackX_10 = to;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Byte);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__CubeBase);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::IntVector>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::IntVector>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::IntVector>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__ICubeModel);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__IntVector);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MV::WorldObject::IntVector>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MoveCubeFromCoarseToFine);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (from != (ICubeModel *)0x0) {
    puVar1 = (undefined8 *)FUN_?(&pCStack_2,0,TypeInfo__MV__WorldObject__ICubeModel,from);
    pCStack_2 = (CubeBase *)*puVar1;
    fVar3 = SUB84(pCStack_2,0);
    uStack_4 = *(undefined4 *)(puVar1 + 1);
    if (to != (ICubeModel *)0x0) {
      puVar1 = (undefined8 *)FUN_?(&pCStack_2,0,TypeInfo__MV__WorldObject__ICubeModel,to);
      pCStack_2 = (CubeBase *)*puVar1;
      uStack_4 = *(undefined4 *)(puVar1 + 1);
      fVar3 = fVar3 / SUB84(pCStack_2,0);
      if (*(int *)&(TypeInfo__MoveCubeFromCoarseToFine->_1).field_0x1c == 0) {
        FUN_?();
      }
      validPoses = MoveCubeFromCoarseToFine_CreateValidPosGrid((int)fVar3,(MethodInfo *)0x0);
      IStackX_8.x = fromPos->x;
      IStackX_8.y = fromPos->y;
      IStackX_8.z = fromPos->z;
      testPlanes = MoveCubeFromCoarseToFine_GetTestPlanes(from,&IStackX_8,(MethodInfo *)0x0);
      MoveCubeFromCoarseToFine_SetValidPoints(testPlanes,validPoses,(MethodInfo *)0x0);
      pLVar5 = MoveCubeFromCoarseToFine_GetValidCubes(validPoses,(int)fVar3,(MethodInfo *)0x0);
      if (*(int *)&(TypeInfo__MV__WorldObject__IntVector->_1).field_0x1c == 0) {
        FUN_?();
      }
      uStack_6._0_2_ = fromPos->x;
      uStack_6._2_2_ = fromPos->y;
      iVar7 = (int)(short)(int)fVar3 * (int)(short)(undefined2)uStack_6;
      IStackX_8._0_4_ = (int)(short)(int)fVar3 * (int)uStack_6._2_2_;
      iStack_8 = (int)(short)(int)fVar3 * (int)fromPos->z;
      iStack_9 = iVar7;
      lVar10 = FUN_?();
      if ((lVar10 != 0) && (*(longlong *)(lVar10 + 0x20) != 0)) {
        lVar10 = FUN_?();
        pBVar11 = TypeInfo__System__Byte;
        if (lVar10 == 0) {
          lStack_12 = 0;
        }
        else {
          lStack_12 = FUN_?(lVar10,TypeInfo__System__Byte);
          if (lStack_12 == 0) {
            FUN_?(lVar10,pBVar11);
            pcVar13 = (code *)swi(3);
            (*pcVar13)();
            return;
          }
        }
        if (pLVar5 != (List_1_MV_WorldObject_IntVector_ *)0x0) {
          if (iRam_? != 0) {
            uVar14 = (uint)((ulonglong)&uStack_15 >> 0xc);
            uVar16 = (ulonglong)((uVar14 & 0x1fffff) >> 6);
            do {
              uVar17 = *(ulonglong *)(uVar16 * 8 + 0xADDR);
              puVar18 = (ulonglong *)(uVar16 * 8 + 0xADDR);
              LOCK();
              bVar19 = uVar17 == *puVar18;
              if (bVar19) {
                *puVar18 = uVar17 | 1L << (uVar14 & 0x3f);
              }
              UNLOCK();
            } while (!bVar19);
          }
          iStack_20 = (pLVar5->fields)._version;
          uStack_21 = 0;
          uStack_15._0_4_ = SUB84(pLVar5,0);
          uStack_15._4_4_ = (undefined4)((ulonglong)pLVar5 >> 0x20);
          uStack_22 = (undefined4)uStack_15;
          uStack_23 = uStack_15._4_4_;
          uStack_24 = 0;
          uStack_25 = 0;
          uStack_15 = 0;
          puStack_26 = &uStack_22;
          while( true ) {
            lVar10 = lStack_12;
            cVar27 = FUN_?(&uStack_22,
                                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::IntVector>__MoveNext__
                                  );
            uVar28 = uStack_25;
            if (cVar27 == '\0') {
              return;
            }
            uStack_6 = (undefined4)uStack_25;
            sVar29 = uStack_25._4_2_;
            if (*(int *)&(TypeInfo__MV__WorldObject__IntVector->_1).field_0x1c == 0) {
              FUN_?();
            }
            sVar30 = uStack_6._2_2_ + IStackX_8.x;
            sVar29 = sVar29 + (short)iStack_8;
            if (*(int *)&(TypeInfo__MV__WorldObject__CubeBase->_1).field_0x1c == 0) {
              FUN_?();
            }
            byteCorners = MVWorldObject.dll::MV::WorldObject::CubeBase::
                          CubeBase_get_IdentityByteCorners((MethodInfo *)0x0);
            if (lVar10 == 0) break;
            lVar10 = FUN_?(lVar10);
            pCStack_2 = (CubeBase *)FUN_?(TypeInfo__MV__WorldObject__CubeBase);
            pBVar11 = TypeInfo__System__Byte;
            faceMaterials = (Byte__Array *)0x0;
            if ((lVar10 != 0) &&
               (faceMaterials = (Byte__Array *)FUN_?(lVar10,TypeInfo__System__Byte),
               faceMaterials == (Byte__Array *)0x0)) {
              FUN_?(lVar10,pBVar11);
              break;
            }
            pCVar31 = pCStack_2;
            MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase__ctor
                      (pCStack_2,byteCorners,faceMaterials,(MethodInfo *)0x0);
            pIVar32 = pIStackX_10;
            uStack_33 = CONCAT22(sVar30,(short)uVar28 + (short)iVar7);
            pIVar34 = pIStackX_10->klass;
            uVar35 = 0;
            uVar36._0_1_ = (pIVar34->_1).rank;
            uVar36._1_1_ = (pIVar34->_1).minimumAlignment;
            if (uVar36 != 0) {
              do {
                if (pIVar34->interfaceOffsets[uVar35].interfaceType ==
                    (Il2CppClass *)TypeInfo__MV__WorldObject__ICubeModel) {
                  pVVar37 = &(pIVar34->vtable).get_Scale +
                            (pIVar34->interfaceOffsets[uVar35].offset + 2);
                  goto code_?;
                }
                uVar35 = uVar35 + 1;
              } while (uVar35 < uVar36);
            }
            pVVar37 = (VirtualInvokeData *)
                      FUN_?(pIStackX_10,TypeInfo__MV__WorldObject__ICubeModel,2);
code_?:
            uStack_38 = uStack_33;
            sStack_39 = sVar29;
            (*pVVar37->methodPtr)(pIVar32,&uStack_38,pCVar31);
            iVar7 = iStack_9;
          }
          FUN_?();
          FUN_?();
          pcVar13 = (code *)swi(3);
          (*pcVar13)();
          return;
        }
      }
    }
  }
  FUN_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}


/* Void AddUnindentedCube(ICubeModel, ICubeModel, IntVector) */

void Assembly-CSharp.dll::MoveCubeFromCoarseToFine::MoveCubeFromCoarseToFine_AddUnindentedCube
               (ICubeModel *from,ICubeModel *to,IntVector *fromPos,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Byte);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__CubeBase);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__ICubeModel);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__IntVector);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (((from != (ICubeModel *)0x0) && (lVar1 = FUN_?(), lVar1 != 0)) &&
     (*(longlong *)(lVar1 + 0x20) != 0)) {
    lVar1 = FUN_?();
    pBVar2 = TypeInfo__System__Byte;
    if (lVar1 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = FUN_?(lVar1,TypeInfo__System__Byte);
      if (lVar3 == 0) {
        FUN_?(lVar1,pBVar2);
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
    }
    puVar5 = (undefined8 *)FUN_?(&uStack_6,0,TypeInfo__MV__WorldObject__ICubeModel,from);
    uStack_6 = *puVar5;
    fVar7 = (float)uStack_6;
    uStack_8 = *(undefined4 *)(puVar5 + 1);
    if (to != (ICubeModel *)0x0) {
      puVar5 = (undefined8 *)FUN_?(&uStack_6,0,TypeInfo__MV__WorldObject__ICubeModel);
      uStack_6 = *puVar5;
      uStack_8 = *(undefined4 *)(puVar5 + 1);
      iVar9 = (int)(fVar7 / (float)uStack_6);
      if (*(int *)&(TypeInfo__MV__WorldObject__IntVector->_1).field_0x1c == 0) {
        FUN_?();
      }
      uVar10 = fromPos->x;
      uVar11 = fromPos->y;
      sVar12 = (short)iVar9;
      sVar13 = fromPos->z;
      iStackX_18 = 0;
      if (0 < iVar9) {
        do {
          iVar14 = 0;
          uStack_15 = (uint)(ushort)((short)iStackX_18 + sVar12 * uVar10);
          do {
            iVar16 = 0;
            uStack_15 = CONCAT22(sVar12 * uVar11 + (short)iVar14,(undefined2)uStack_15);
            do {
              if (*(int *)&(TypeInfo__MV__WorldObject__CubeBase->_1).field_0x1c == 0) {
                FUN_?();
              }
              byteCorners = MVWorldObject.dll::MV::WorldObject::CubeBase::
                            CubeBase_get_IdentityByteCorners((MethodInfo *)0x0);
              if (lVar3 == 0) goto code_?;
              lVar1 = FUN_?(lVar3);
              this = (CubeBase *)FUN_?(TypeInfo__MV__WorldObject__CubeBase);
              pBVar2 = TypeInfo__System__Byte;
              if (lVar1 == 0) {
                faceMaterials = (Byte__Array *)0x0;
              }
              else {
                faceMaterials = (Byte__Array *)FUN_?(lVar1,TypeInfo__System__Byte);
                if (faceMaterials == (Byte__Array *)0x0) {
                  FUN_?(lVar1,pBVar2);
                  pcVar4 = (code *)swi(3);
                  (*pcVar4)();
                  return;
                }
              }
              MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase__ctor
                        (this,byteCorners,faceMaterials,(MethodInfo *)0x0);
              uStack_6._0_6_ = CONCAT24(sVar12 * sVar13 + (short)iVar16,uStack_15);
              FUN_?();
              iVar16 = iVar16 + 1;
            } while (iVar16 < iVar9);
            iVar14 = iVar14 + 1;
          } while (iVar14 < iVar9);
          iStackX_18 = iStackX_18 + 1;
        } while (iStackX_18 < iVar9);
      }
      return;
    }
  }
code_?:
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* List`1[MoveCubeFromCoarseToFine+ValidPos] CreateValidPosGrid(Int32) */

List_1_MoveCubeFromCoarseToFine_ValidPos_ *
Assembly-CSharp.dll::MoveCubeFromCoarseToFine::MoveCubeFromCoarseToFine_CreateValidPosGrid
          (int32_t scaleFactor,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__IntVector);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MoveCubeFromCoarseToFine::ValidPos>__Add_MoveCubeFromCoarseToFine__ValidPos_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MoveCubeFromCoarseToFine::ValidPos>__List__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<MoveCubeFromCoarseToFine::ValidPos>)
    ;
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MoveCubeFromCoarseToFine__ValidPos);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fVar1 = (float)scaleFactor;
  pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar3 = (pVVar2->oneVector).x;
  uVar4 = (pVVar2->oneVector).y;
  fVar5 = (pVVar2->oneVector).z;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
  uVar6 = (pVVar2->oneVector).x;
  uVar7 = (pVVar2->oneVector).y;
  fVar8 = (float)(uVar6 ^ _UNK_?) * _UNK_?;
  fVar9 = (float)(uVar7 ^ _UNK_?) * _UNK_?;
  fVar10 = (float)((uint)(pVVar2->oneVector).z ^ _UNK_?) * _UNK_?;
  iVar11 = scaleFactor + 1;
  pLVar12 = (List_1_MoveCubeFromCoarseToFine_ValidPos_ *)
           FUN_?(
                        TypeInfo__System__Collections__Generic__List<MoveCubeFromCoarseToFine::ValidPos>
                        );
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar12,
             MethodInfo__System__Collections__Generic__List<MoveCubeFromCoarseToFine::ValidPos>__List__
            );
  iVar13 = 0;
  if (0 < iVar11) {
    do {
      iVar14 = 0;
      uStack_15 = (ulonglong)(uint)((float)(int)(short)iVar13 * ((float)uVar3 / fVar1) + fVar8);
      do {
        iVar16 = 0;
        do {
          if (*(int *)&(TypeInfo__MV__WorldObject__IntVector->_1).field_0x1c == 0) {
            FUN_?();
          }
          item = (Object *)FUN_?(TypeInfo__MoveCubeFromCoarseToFine__ValidPos);
          *(undefined1 *)&item[1].klass = 1;
          uStack_15 = CONCAT44((float)(int)(short)iVar14 * ((float)uVar4 / fVar1) + fVar9,
                               (int)uStack_15);
          *(ulonglong *)((longlong)&item[1].klass + 4) = uStack_15;
          *(float *)((longlong)&item[1].monitor + 4) =
               (float)(int)(short)iVar16 * (fVar5 / fVar1) + fVar10;
          if (pLVar12 == (List_1_MoveCubeFromCoarseToFine_ValidPos_ *)0x0) {
            FUN_?();
            pcVar17 = (code *)swi(3);
            pLVar12 = (List_1_MoveCubeFromCoarseToFine_ValidPos_ *)(*pcVar17)();
            return pLVar12;
          }
          mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
          List_1_System_Object__Add
                    ((List_1_System_Object_ *)pLVar12,item,
                     MethodInfo__System__Collections__Generic__List<MoveCubeFromCoarseToFine::ValidPos>__Add_MoveCubeFromCoarseToFine__ValidPos_
                    );
          iVar16 = iVar16 + 1;
        } while (iVar16 < iVar11);
        iVar14 = iVar14 + 1;
      } while (iVar14 < iVar11);
      iVar13 = iVar13 + 1;
    } while (iVar13 < iVar11);
  }
  return pLVar12;
}


/* List`1[UnityEngine.Plane] GetTestPlanes(ICubeModel, IntVector) */

List_1_UnityEngine_Plane_ *
Assembly-CSharp.dll::MoveCubeFromCoarseToFine::MoveCubeFromCoarseToFine_GetTestPlanes
          (ICubeModel *from,IntVector *fromPos,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__CubeBase);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MV__WorldObject__ICubeModel);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Plane>__Add_UnityEngine__Plane_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Plane>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Plane>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MoveCubeFromCoarseToFine);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Vector3);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_1 = (void *)0x0;
  uStack_2._0_4_ = 0.0;
  uStack_2._4_4_ = 0.0;
  uStack_3 = (void *)0x0;
  uStack_4._0_4_ = 0.0;
  uStack_4._4_4_ = 0.0;
  if (from != (ICubeModel *)0x0) {
    pVStackX_8 = (Vector3__Array *)CONCAT26(pVStackX_8._6_2_,*fromPos);
    lVar5 = FUN_?(0,0,from);
    if (lVar5 != 0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__MV__WorldObject__CubeDataPacker);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      byteArray = *(Byte__Array **)(lVar5 + 0x18);
      if (*(int *)&(TypeInfo__MV__WorldObject__CubeDataPacker->_1).field_0x1c == 0) {
        FUN_?();
      }
      pVStackX_10 = MVWorldObject.dll::MV::WorldObject::CubeDataPacker::
                    CubeDataPacker_ByteArrayToCorners(byteArray,(MethodInfo *)0x0);
      pVStackX_8 = (Vector3__Array *)FUN_?(TypeInfo__UnityEngine__Vector3,4);
      pLVar6 = (List_1_UnityEngine_Plane_ *)
                FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Plane>);
      FUN_?(pLVar6);
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
      uVar7 = 0;
      pFVar8 = TypeInfo__MV__WorldObject__CubeBase->static_fields->faceFlagsArray;
      if (pFVar8 != (FaceFlags__Enum__Array *)0x0) {
        pFVar9 = pFVar8->vector;
code_?:
        if ((int)pFVar8->max_length <= (int)uVar7) {
          return pLVar6;
        }
        if ((uint)pFVar8->max_length <= uVar7) goto code_?;
        FVar10 = *pFVar9;
        if ((*(byte *)(lVar5 + 0x10) & (char)FVar10) == 0) {
          if (*(int *)&(TypeInfo__MV__WorldObject__CubeBase->_1).field_0x1c == 0) {
            FUN_?();
          }
          face = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_FaceFlagToFace
                           ((uint)(byte)(char)FVar10,(MethodInfo *)0x0);
          MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_GetFace
                    (&pVStackX_10,&pVStackX_8,face,(MethodInfo *)0x0);
          if (*(int *)&(TypeInfo__MoveCubeFromCoarseToFine->_1).field_0x1c == 0) {
            FUN_?();
          }
          bVar11 = MoveCubeFromCoarseToFine_IsFaceIndented(face,&pVStackX_8,(MethodInfo *)0x0);
          pVVar12 = pVStackX_8;
          if (bVar11 == 0) goto code_?;
          if (pVStackX_8 == (Vector3__Array *)0x0) goto code_?;
          if (((int)pVStackX_8->max_length == 0) || ((uint)pVStackX_8->max_length < 4)) {
code_?:
            FUN_?();
            pcVar13 = (code *)swi(3);
            pLVar6 = (List_1_UnityEngine_Plane_ *)(*pcVar13)();
            return pLVar6;
          }
          VStack_14.x = pVStackX_8->vector[2].x;
          VStack_14.y = pVStackX_8->vector[2].y;
          VStack_14.z = pVStackX_8->vector[2].z;
          VStack_15.x = pVStackX_8->vector[3].x;
          VStack_15.y = pVStackX_8->vector[3].y;
          VStack_15.z = pVStackX_8->vector[3].z;
          VStack_16.x = pVStackX_8->vector[0].x;
          VStack_16.y = pVStackX_8->vector[0].y;
          VStack_16.z = pVStackX_8->vector[0].z;
          UnityEngine.CoreModule.dll::UnityEngine::Plane::Plane__ctor_2
                    ((Plane *)&uStack_1,&VStack_16,&VStack_15,&VStack_14,in_stack_17)
          ;
          if ((uint)pVVar12->max_length < 3) goto code_?;
          VStack_18.x = pVVar12->vector[0].x;
          VStack_18.y = pVVar12->vector[0].y;
          VStack_18.z = pVVar12->vector[0].z;
          VStack_19.x = pVVar12->vector[1].x;
          VStack_19.y = pVVar12->vector[1].y;
          VStack_19.z = pVVar12->vector[1].z;
          aVStack_20[0].x = pVVar12->vector[2].x;
          aVStack_20[0].y = pVVar12->vector[2].y;
          aVStack_20[0].z = pVVar12->vector[2].z;
          UnityEngine.CoreModule.dll::UnityEngine::Plane::Plane__ctor_2
                    ((Plane *)&uStack_3,aVStack_20,&VStack_19,&VStack_18,in_stack_17)
          ;
          pMVar21 = 
          MethodInfo__System__Collections__Generic__List<UnityEngine::Plane>__Add_UnityEngine__Plane_
          ;
          fVar22 = (float)uStack_3;
          fVar23 = uStack_3._4_4_;
          fVar24 = (float)uStack_4;
          if ((uStack_1._4_4_ - uStack_3._4_4_) * (uStack_1._4_4_ - uStack_3._4_4_) +
              ((float)uStack_1 - (float)uStack_3) * ((float)uStack_1 - (float)uStack_3) +
              ((float)uStack_2 - (float)uStack_4) * ((float)uStack_2 - (float)uStack_4) != 0.0)
          {
            if ((float)uStack_1 * (float)uStack_1 + uStack_1._4_4_ * uStack_1._4_4_ +
                (float)uStack_2 * (float)uStack_2 != 0.0) {
              if (pLVar6 == (List_1_UnityEngine_Plane_ *)0x0) goto code_?;
              piVar25 = &(pLVar6->fields)._version;
              *piVar25 = *piVar25 + 1;
              pPVar26 = (pLVar6->fields)._items;
              if (pPVar26 == (Plane__Array *)0x0) goto code_?;
              uVar27 = (pLVar6->fields)._size;
              if (uVar27 < (uint)pPVar26->max_length) {
                (pLVar6->fields)._size = uVar27 + 1;
                if ((uint)pPVar26->max_length <= uVar27) goto code_?;
                *(void **)&pPVar26->vector[(int)uVar27].m_Normal = uStack_1;
                *(undefined8 *)&pPVar26->vector[(int)uVar27].m_Normal.z = uStack_2;
              }
              else {
                PStack_28.node.m_Handle.handle = (GCHandle)(GCHandle)uStack_1;
                PStack_28.snapshotIndex = (int32_t)(float)uStack_2;
                PStack_28._12_4_ = uStack_2._4_4_;
                mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
                Painter2D+Painter2DJobData]::
                List_1_UnityEngine_UIElements_Painter2D_Painter2DJobData__AddWithResize
                          ((List_1_UnityEngine_UIElements_Painter2D_Painter2DJobData_ *)pLVar6,
                           &PStack_28,pMVar21->klass->rgctx_data[0xe].method);
              }
            }
            pMVar21 = 
            MethodInfo__System__Collections__Generic__List<UnityEngine::Plane>__Add_UnityEngine__Plane_
            ;
            if (fVar22 * fVar22 + fVar23 * fVar23 + fVar24 * fVar24 == 0.0)
            goto code_?;
            if (pLVar6 == (List_1_UnityEngine_Plane_ *)0x0) goto code_?;
            piVar25 = &(pLVar6->fields)._version;
            *piVar25 = *piVar25 + 1;
            pPVar26 = (pLVar6->fields)._items;
            if (pPVar26 == (Plane__Array *)0x0) goto code_?;
            uVar27 = (pLVar6->fields)._size;
            if (uVar27 < (uint)pPVar26->max_length) {
              (pLVar6->fields)._size = uVar27 + 1;
              if ((uint)pPVar26->max_length <= uVar27) goto code_?;
              fVar22 = (float)uStack_3;
              fVar23 = uStack_3._4_4_;
              fVar24 = (float)uStack_4;
              fVar29 = uStack_4._4_4_;
              goto code_?;
            }
            PStack_28.node.m_Handle.handle = (GCHandle)(GCHandle)uStack_3;
            PStack_28.snapshotIndex = (int32_t)(float)uStack_4;
            PStack_28._12_4_ = uStack_4._4_4_;
            mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
            Painter2D+Painter2DJobData]::
            List_1_UnityEngine_UIElements_Painter2D_Painter2DJobData__AddWithResize
                      ((List_1_UnityEngine_UIElements_Painter2D_Painter2DJobData_ *)pLVar6,
                       &PStack_28,pMVar21->klass->rgctx_data[0xe].method);
            uVar7 = uVar7 + 1;
            pFVar9 = (FaceFlags__Enum *)((longlong)pFVar9 + 1);
            goto code_?;
          }
          if ((float)uStack_1 * (float)uStack_1 + uStack_1._4_4_ * uStack_1._4_4_ +
              (float)uStack_2 * (float)uStack_2 != 0.0) {
            if (pLVar6 == (List_1_UnityEngine_Plane_ *)0x0) goto code_?;
            piVar25 = &(pLVar6->fields)._version;
            *piVar25 = *piVar25 + 1;
            pPVar26 = (pLVar6->fields)._items;
            if (pPVar26 == (Plane__Array *)0x0) goto code_?;
            uVar27 = (pLVar6->fields)._size;
            if (uVar27 < (uint)pPVar26->max_length) {
              (pLVar6->fields)._size = uVar27 + 1;
              if ((uint)pPVar26->max_length <= uVar27) goto code_?;
              fVar22 = (float)uStack_1;
              fVar23 = uStack_1._4_4_;
              fVar24 = (float)uStack_2;
              fVar29 = uStack_2._4_4_;
code_?:
              pPVar30 = pPVar26->vector + (int)uVar27;
              *(float *)&((GCHandle *)&(pPVar30->m_Normal).x)->handle = fVar22;
              (pPVar30->m_Normal).y = fVar23;
              (pPVar30->m_Normal).z = fVar24;
              pPVar30->m_Distance = fVar29;
              goto code_?;
            }
            PStack_28.node.m_Handle.handle = (GCHandle)(GCHandle)uStack_1;
            PStack_28.snapshotIndex = (int32_t)(float)uStack_2;
            PStack_28._12_4_ = uStack_2._4_4_;
            mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
            Painter2D+Painter2DJobData]::
            List_1_UnityEngine_UIElements_Painter2D_Painter2DJobData__AddWithResize
                      ((List_1_UnityEngine_UIElements_Painter2D_Painter2DJobData_ *)pLVar6,
                       &PStack_28,pMVar21->klass->rgctx_data[0xe].method);
            uVar7 = uVar7 + 1;
            pFVar9 = (FaceFlags__Enum *)((longlong)pFVar9 + 1);
            goto code_?;
          }
        }
code_?:
        uVar7 = uVar7 + 1;
        pFVar9 = (FaceFlags__Enum *)((longlong)pFVar9 + 1);
        goto code_?;
      }
    }
  }
code_?:
  FUN_?();
  pcVar13 = (code *)swi(3);
  pLVar6 = (List_1_UnityEngine_Plane_ *)(*pcVar13)();
  return pLVar6;
}


/* List`1[MV.WorldObject.IntVector] GetValidCubes(List`1[MoveCubeFromCoarseToFine+ValidPos], Int32)
    */

List_1_MV_WorldObject_IntVector_ *
Assembly-CSharp.dll::MoveCubeFromCoarseToFine::MoveCubeFromCoarseToFine_GetValidCubes
          (List_1_MoveCubeFromCoarseToFine_ValidPos_ *validPoses,int32_t scaleFactor,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__IntVector);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MV::WorldObject::IntVector>__Add_MV__WorldObject__IntVector_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MV::WorldObject::IntVector>__List__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MoveCubeFromCoarseToFine::ValidPos>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<MV::WorldObject::IntVector>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MoveCubeFromCoarseToFine);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pLVar1 = (List_1_MV_WorldObject_IntVector_ *)
           FUN_?(TypeInfo__System__Collections__Generic__List<MV::WorldObject::IntVector>);
  pLStack_2 = pLVar1;
  FUN_?(pLVar1,
                MethodInfo__System__Collections__Generic__List<MV::WorldObject::IntVector>__List__);
  iStackX_20 = 0;
  if (0 < scaleFactor) {
    do {
      iStackX_10 = 0;
      do {
        iVar3 = 0;
        do {
          if (*(int *)&(TypeInfo__MV__WorldObject__IntVector->_1).field_0x1c == 0) {
            FUN_?();
          }
          if (*(int *)&(TypeInfo__MoveCubeFromCoarseToFine->_1).field_0x1c == 0) {
            FUN_?();
          }
          pIVar4 = TypeInfo__MoveCubeFromCoarseToFine->static_fields->intCubeCorners;
          uVar5 = 0;
          pIVar6 = pIVar4->vector;
          if (pIVar4 == (IntVector__Array *)0x0) {
code_?:
            FUN_?();
            pcVar7 = (code *)swi(3);
            pLVar1 = (List_1_MV_WorldObject_IntVector_ *)(*pcVar7)();
            return pLVar1;
          }
          while( true ) {
            pLVar1 = pLStack_2;
            uVar8 = (uint)pIVar4->max_length;
            if ((int)uVar8 <= (int)uVar5) break;
            if (uVar8 <= uVar5) {
              FUN_?();
              pcVar7 = (code *)swi(3);
              pLVar1 = (List_1_MV_WorldObject_IntVector_ *)(*pcVar7)();
              return pLVar1;
            }
            uVar9._0_2_ = pIVar6->x;
            uVar9._2_2_ = pIVar6->y;
            sVar10 = pIVar6->z;
            uStack_11 = uVar9;
            if (*(int *)&(TypeInfo__MV__WorldObject__IntVector->_1).field_0x1c == 0) {
              FUN_?();
            }
            sVar12 = (short)iStackX_10 + uStack_11._2_2_;
            if (*(int *)&(TypeInfo__MoveCubeFromCoarseToFine->_1).field_0x1c == 0) {
              FUN_?();
            }
            if ((validPoses == (List_1_MoveCubeFromCoarseToFine_ValidPos_ *)0x0) ||
               (EVar13 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
                        UIR::EntryPreProcessor+AllocSize]::
                        List_1_UnityEngine_UIElements_UIR_EntryPreProcessor_AllocSize__get_Item
                                  ((List_1_UnityEngine_UIElements_UIR_EntryPreProcessor_AllocSize_ *
                                   )validPoses,
                                   ((int)(short)((short)iStackX_20 + (undefined2)uVar9) *
                                    (scaleFactor + 1) + (int)sVar12) * (scaleFactor + 1) +
                                   (int)(short)(sVar10 + (short)iVar3),
                                   MethodInfo__System__Collections__Generic__List<MoveCubeFromCoarseToFine::ValidPos>__get_Item_int_
                                  ), EVar13 == (EntryPreProcessor_AllocSize)0x0))
            goto code_?;
            pLVar1 = pLStack_2;
            if (*(char *)((longlong)EVar13 + 0x10) == '\0') goto code_?;
            uVar5 = uVar5 + 1;
            pIVar6 = pIVar6 + 1;
          }
          if (pLStack_2 == (List_1_MV_WorldObject_IntVector_ *)0x0) goto code_?;
          uStack_14 = CONCAT22((short)iStackX_10,(short)iStackX_20);
          sStack_15 = (short)iVar3;
          FUN_?(pLStack_2,&uStack_14,
                        MethodInfo__System__Collections__Generic__List<MV::WorldObject::IntVector>__Add_MV__WorldObject__IntVector_
                       );
code_?:
          iVar3 = iVar3 + 1;
        } while (iVar3 < scaleFactor);
        iStackX_10 = iStackX_10 + 1;
      } while (iStackX_10 < scaleFactor);
      iStackX_20 = iStackX_20 + 1;
    } while (iStackX_20 < scaleFactor);
  }
  return pLVar1;
}


/* Int32 IntVectorToValidPosIndex(IntVector, Int32) */

int32_t Assembly-CSharp.dll::MoveCubeFromCoarseToFine::
        MoveCubeFromCoarseToFine_IntVectorToValidPosIndex
                  (IntVector *intVector,int32_t validPosSize,MethodInfo *method)

{
  return (intVector->x * validPosSize + (int)intVector->y) * validPosSize + (int)intVector->z;
}


/* Boolean IsFaceIndented(Face, Vector3[] ByRef) */

bool Assembly-CSharp.dll::MoveCubeFromCoarseToFine::MoveCubeFromCoarseToFine_IsFaceIndented
               (Face__Enum face,Vector3__Array **faceCorners,MethodInfo *method)

{
  uVar1 = 0;
  iVar2 = 0;
  uVar3 = _UNK_?;
  switch(face) {
  case Face__Enum_Top:
    iVar2 = 1;
    goto code_?;
  case Face__Enum_Bottom:
    iVar2 = 1;
    break;
  case Face__Enum_Front:
    iVar2 = 2;
    break;
  case Face__Enum_Back:
    iVar2 = 2;
    goto code_?;
  case Face__Enum_Left:
    break;
  default:
    goto code_?;
  }
  uVar3 = _UNK_?;
code_?:
  pVVar4 = *faceCorners;
  if (pVVar4 == (Vector3__Array *)0x0) {
    FUN_?();
    pcVar5 = (code *)swi(3);
    bVar6 = (*pcVar5)();
    return bVar6;
  }
  pVVar7 = pVVar4->vector;
  while( true ) {
    if ((int)pVVar4->max_length <= (int)uVar1) {
      return 0;
    }
    if ((uint)pVVar4->max_length <= uVar1) {
      FUN_?();
      pcVar5 = (code *)swi(3);
      bVar6 = (*pcVar5)();
      return bVar6;
    }
    uVar8 = pVVar7->x;
    fVar9 = pVVar7->y;
    if (iVar2 == 0) {
      fVar9 = (float)uVar8;
    }
    else if (iVar2 == 1) {
    }
    else {
      if (iVar2 != 2) {
        uVar10 = func_?(&TypeInfo__System__IndexOutOfRangeException);
        this = (IndexOutOfRangeException *)func_?(uVar10);
        message = (String *)func_?(&StringLiteral_Invalid_Vector3_index_);
        mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor_1
                  (this,message,(MethodInfo *)0x0);
        uVar10 = func_?(&MethodInfo__UnityEngine__Vector3__get_Item_int_);
        FUN_?(this,uVar10);
        pcVar5 = (code *)swi(3);
        bVar6 = (*pcVar5)();
        return bVar6;
      }
      fVar9 = pVVar7->z;
    }
    cVar11 = FUN_?(fVar9,uVar3);
    if (cVar11 == '\0') break;
    uVar1 = uVar1 + 1;
    pVVar7 = pVVar7 + 1;
  }
  return 1;
}


/* Void MoveCube(ICubeModel, ICubeModel, IntVector) */

void Assembly-CSharp.dll::MoveCubeFromCoarseToFine::MoveCubeFromCoarseToFine_MoveCube
               (ICubeModel *from,ICubeModel *to,IntVector *fromPos,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__ICubeModel);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MoveCubeFromCoarseToFine);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (from != (ICubeModel *)0x0) {
    IStackX_8.x = fromPos->x;
    IStackX_8.y = fromPos->y;
    IStackX_8.z = fromPos->z;
    lVar1 = FUN_?();
    if (lVar1 != 0) {
      if (*(char *)(lVar1 + 0x10) != '?') {
        if (*(int *)&(TypeInfo__MoveCubeFromCoarseToFine->_1).field_0x1c == 0) {
          FUN_?();
        }
        IStackX_8.x = fromPos->x;
        IStackX_8.y = fromPos->y;
        IStackX_8.z = fromPos->z;
        MoveCubeFromCoarseToFine_AddIndentedCube(from,to,&IStackX_8,(MethodInfo *)0x0);
        return;
      }
      if (*(int *)&(TypeInfo__MoveCubeFromCoarseToFine->_1).field_0x1c == 0) {
        FUN_?();
      }
      IStackX_8.x = fromPos->x;
      IStackX_8.y = fromPos->y;
      IStackX_8.z = fromPos->z;
      MoveCubeFromCoarseToFine_AddUnindentedCube(from,to,&IStackX_8,(MethodInfo *)0x0);
      return;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetValidPoints(List`1[UnityEngine.Plane], List`1[MoveCubeFromCoarseToFine+ValidPos]) */

void Assembly-CSharp.dll::MoveCubeFromCoarseToFine::MoveCubeFromCoarseToFine_SetValidPoints
               (List_1_UnityEngine_Plane_ *testPlanes,
               List_1_MoveCubeFromCoarseToFine_ValidPos_ *validPoses,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Plane>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MoveCubeFromCoarseToFine::ValidPos>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Plane>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MoveCubeFromCoarseToFine::ValidPos>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MoveCubeFromCoarseToFine::ValidPos>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Plane>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Plane>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<MoveCubeFromCoarseToFine::ValidPos>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  LStack_1._list = (List_1_System_Object_ *)0x0;
  LStack_1._index = 0;
  LStack_1._version = 0;
  LStack_1._current = (Object *)0x0;
  if (testPlanes == (List_1_UnityEngine_Plane_ *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (iRam_? != 0) {
    uVar3 = (uint)((ulonglong)&uStack_4 >> 0xc);
    uVar5 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
    do {
      uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
      puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
      LOCK();
      bVar8 = uVar6 == *puVar7;
      if (bVar8) {
        *puVar7 = uVar6 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (!bVar8);
  }
  fVar9 = _UNK_?;
  iStack_10 = (testPlanes->fields)._version;
  uStack_11 = 0;
  uStack_12 = 0;
  uStack_13 = 0;
  uStack_14 = 0;
  uStack_15 = 0;
  uStack_4 = 0;
  ppLStack_16 = &pLStack_17;
  pLStack_17 = testPlanes;
  do {
    if (pLStack_17 == (List_1_UnityEngine_Plane_ *)0x0) {
code_?:
      FUN_?();
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((iStack_10 != (pLStack_17->fields)._version) ||
       ((uint)(pLStack_17->fields)._size <= uStack_13)) {
      if ((MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Plane>__MoveNext__
           ->klass->field_0x135 & 1) == 0) {
        FUN_?();
      }
      if (pLStack_17 != (List_1_UnityEngine_Plane_ *)0x0) {
        if (iStack_10 == (pLStack_17->fields)._version) {
          return;
        }
        goto code_?;
      }
code_?:
      FUN_?();
      goto code_?;
    }
    pPVar18 = (pLStack_17->fields)._items;
    if (pPVar18 == (Plane__Array *)0x0) {
code_?:
      FUN_?();
code_?:
      mscorlib.dll::System::ThrowHelper::
      ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion
                ((MethodInfo *)0x0);
      goto code_?;
    }
    if ((uint)pPVar18->max_length <= uStack_13) {
      FUN_?();
code_?:
      FUN_?();
      FUN_?();
code_?:
      FUN_?();
      goto code_?;
    }
    pPVar19 = pPVar18->vector + (int)uStack_13;
    fVar20 = (pPVar19->m_Normal).x;
    fVar21 = (pPVar19->m_Normal).y;
    uStack_14._0_4_ = (pPVar19->m_Normal).x;
    uStack_14._4_4_ = (pPVar19->m_Normal).y;
    pfVar22 = &(pPVar19->m_Normal).z;
    fVar23 = *pfVar22;
    fVar24 = pPVar19->m_Distance;
    uStack_15 = *(undefined8 *)pfVar22;
    uStack_13 = uStack_13 + 1;
    if (validPoses == (List_1_MoveCubeFromCoarseToFine_ValidPos_ *)0x0) goto code_?;
    if (iRam_? != 0) {
      uVar3 = (uint)((ulonglong)&pLStack_25 >> 0xc);
      uVar5 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
      do {
        uVar6 = *(ulonglong *)(uVar5 * 8 + 0xADDR);
        puVar7 = (ulonglong *)(uVar5 * 8 + 0xADDR);
        LOCK();
        bVar8 = uVar6 == *puVar7;
        if (bVar8) {
          *puVar7 = uVar6 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar8);
    }
    lStack_26 = (ulonglong)(uint)(validPoses->fields)._version << 0x20;
    uStack_27 = 0;
    LStack_1._index = (undefined4)lStack_26;
    LStack_1._version = lStack_26._4_4_;
    LStack_1._current = (Object *)0x0;
    uStack_28 = 0;
    pLStack_29 = &LStack_1;
    pLStack_25 = validPoses;
    LStack_1._list = (List_1_System_Object_ *)validPoses;
    while( true ) {
      bVar30 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
               List_1_T_Enumerator_System_Object__MoveNext
                         (&LStack_1,
                          MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MoveCubeFromCoarseToFine::ValidPos>__MoveNext__
                         );
      if (bVar30 == 0) break;
      if (LStack_1._current == (Object *)0x0) goto code_?;
      if ((*(char *)&LStack_1._current[1].klass != '\0') &&
         (pLStack_25 = *(List_1_MoveCubeFromCoarseToFine_ValidPos_ **)
                        ((longlong)&LStack_1._current[1].klass + 4),
         fVar9 <= *(float *)((longlong)&LStack_1._current[1].monitor + 4) * fVar23 +
                   (float)((ulonglong)pLStack_25 >> 0x20) * fVar21 + SUB84(pLStack_25,0) * fVar20 +
                   fVar24)) {
        *(undefined1 *)&LStack_1._current[1].klass = 0;
      }
    }
  } while( true );
}


/* MoveCubeFromCoarseToFine() */

void Assembly-CSharp.dll::MoveCubeFromCoarseToFine::MoveCubeFromCoarseToFine__cctor
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MV__WorldObject__IntVector);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MoveCubeFromCoarseToFine);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = (IntVector__Array *)FUN_?(TypeInfo__MV__WorldObject__IntVector,8);
  if (pIVar1 == (IntVector__Array *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if ((int)pIVar1->max_length != 0) {
    pIVar1->vector[0].x = 0;
    pIVar1->vector[0].y = 0;
    pIVar1->vector[0].z = 0;
    if (1 < (uint)pIVar1->max_length) {
      pIVar1->vector[1].x = 1;
      pIVar1->vector[1].y = 0;
      pIVar1->vector[1].z = 0;
      if (2 < (uint)pIVar1->max_length) {
        pIVar1->vector[2].x = 1;
        pIVar1->vector[2].y = 0;
        pIVar1->vector[2].z = 1;
        if (3 < (uint)pIVar1->max_length) {
          pIVar1->vector[3].x = 0;
          pIVar1->vector[3].y = 0;
          pIVar1->vector[3].z = 1;
          if (4 < (uint)pIVar1->max_length) {
            pIVar1->vector[4].x = 0;
            pIVar1->vector[4].y = 1;
            pIVar1->vector[4].z = 0;
            if (5 < (uint)pIVar1->max_length) {
              pIVar1->vector[5].x = 1;
              pIVar1->vector[5].y = 1;
              pIVar1->vector[5].z = 0;
              if (6 < (uint)pIVar1->max_length) {
                pIVar1->vector[6].x = 1;
                pIVar1->vector[6].y = 1;
                pIVar1->vector[6].z = 1;
                if (7 < (uint)pIVar1->max_length) {
                  pIVar1->vector[7].x = 0;
                  pIVar1->vector[7].y = 1;
                  pIVar1->vector[7].z = 1;
                  TypeInfo__MoveCubeFromCoarseToFine->static_fields->intCubeCorners = pIVar1;
                  if (iRam_? != 0) {
                    uVar3 = (uint)((ulonglong)TypeInfo__MoveCubeFromCoarseToFine->static_fields >>
                                  0xc);
                    puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
                    do {
                      uVar5 = *puVar4;
                      LOCK();
                      uVar6 = *puVar4;
                      if (uVar5 == uVar6) {
                        *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
                      }
                      UNLOCK();
                    } while (uVar5 != uVar6);
                  }
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

