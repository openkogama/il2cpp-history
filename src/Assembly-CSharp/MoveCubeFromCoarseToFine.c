
/* Void AddIndentedCube(ICubeModel, ICubeModel, IntVector) */

void Assembly-CSharp.dll::MoveCubeFromCoarseToFine::MoveCubeFromCoarseToFine_AddIndentedCube
               (ICubeModel *from,ICubeModel *to,IntVector fromPos,MethodInfo *method)

{
  uVar1 = (undefined2)((uint)in_stack_2 >> 0x10);
  uStack_3 = 0xffffffff;
  puStack_4 = &DAT_?;
  uStack_5 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_5;
  puStack_6 = &stack0xffffff84;
  puVar7 = &stack0xffffff84;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Byte);
    func_?(&TypeInfo__MV__WorldObject__CubeBase);
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::IntVector>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::IntVector>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::IntVector>__get_Current__
                   );
    in_stack_8 = &TypeInfo__MV__WorldObject__ICubeModel;
    func_?();
    func_?(&TypeInfo__MV__WorldObject__IntVector);
    in_stack_9 =
         &
         MethodInfo__System__Collections__Generic__List<MV::WorldObject::IntVector>__GetEnumerator__
    ;
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::WorldObject::IntVector>__GetEnumerator__
                   );
    func_?(0x6fe4);
    cRam_? = '\x01';
    puVar7 = puStack_6;
  }
  puStack_6 = puVar7;
  pLStack_10 = (List_1_MV_WorldObject_IntVector_ *)0x0;
  pIStack_11 = (ICubeModel__Class *)0x0;
  iStack_12 = 0;
  puStack_13 = (undefined *)0x0;
  if (from != (ICubeModel *)0x0) {
    puVar14 = (undefined8 *)func_?(&pIStack_15,0,TypeInfo__MV__WorldObject__ICubeModel,from)
    ;
    uVar16 = *puVar14;
    if (to != (ICubeModel *)0x0) {
      puVar14 = (undefined8 *)func_?(&pIStack_15,0,TypeInfo__MV__WorldObject__ICubeModel,to)
      ;
      method_00 = (MethodInfo *)(int)((float)uVar16 / (float)*puVar14);
      if ((TypeInfo__MoveCubeFromCoarseToFine->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__MoveCubeFromCoarseToFine);
      }
      validPoses = MoveCubeFromCoarseToFine_CreateValidPosGrid((int32_t)method_00,(MethodInfo *)0x0)
      ;
      testPlanes = MoveCubeFromCoarseToFine_GetTestPlanes(from,fromPos,(MethodInfo *)0x0);
      MoveCubeFromCoarseToFine_SetValidPoints(testPlanes,validPoses,(MethodInfo *)0x0);
      pLStack_17 = MoveCubeFromCoarseToFine_GetValidCubes
                             (validPoses,(int32_t)method_00,(MethodInfo *)0x0);
      if ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      IVar18.z = fromPos.x;
      IVar18._0_4_ = auStack_19;
      IVar18 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_op_Multiply_1
                         (IVar18,CONCAT22(uVar1,fromPos.z),method_00);
      uStack_20 = *IVar18._0_4_;
      uStack_21 = *(undefined2 *)(IVar18._0_4_ + 1);
      pIStack_15 = from;
      aIStack_22[0].x = fromPos.x;
      aIStack_22[0].y = fromPos.y;
      aIStack_22[0].z = fromPos.z;
      iVar23 = func_?();
      if ((iVar23 != 0) && (*(PlayableBehaviour **)(iVar23 + 0x10) != (PlayableBehaviour *)0x0)) {
        pOVar24 = UnityEngine.CoreModule.dll::UnityEngine::Playables::PlayableBehaviour::
                  PlayableBehaviour_Clone(*(PlayableBehaviour **)(iVar23 + 0x10),(MethodInfo *)0x0);
        pBVar25 = TypeInfo__System__Byte;
        if (pOVar24 == (Object *)0x0) {
          pPStack_26 = (PlayableBehaviour *)0x0;
        }
        else {
          pPStack_26 = (PlayableBehaviour *)func_?(pOVar24,TypeInfo__System__Byte);
          if (pPStack_26 == (PlayableBehaviour *)0x0) {
            func_?(pOVar24,pBVar25);
code_?:
            func_?();
            goto code_?;
          }
        }
        if (pLStack_17 != (List_1_MV_WorldObject_IntVector_ *)0x0) {
          pLVar27 = mscorlib.dll::System::Collections::Generic::List`1[MV::WorldObject::IntVector]::
                    List_1_MV_WorldObject_IntVector__GetEnumerator
                              ((List_1_T_Enumerator_MV_WorldObject_IntVector_ *)&stack0xffffffa4,
                               pLStack_17,
                               MethodInfo__System__Collections__Generic__List<MV::WorldObject::IntVector>__GetEnumerator__
                              );
          pLStack_10 = pLVar27->_list;
          pIStack_11 = (ICubeModel__Class *)pLVar27->_index;
          iStack_12 = pLVar27->_version;
          puStack_13 = *(undefined **)&pLVar27->_current;
          iVar28 = (int16_t)*(undefined4 *)&(pLVar27->_current).z;
          uStack_3 = 1;
          while( true ) {
            uVar29 = (undefined2)((uint)in_stack_9 >> 0x10);
            pLVar27 = (List_1_T_Enumerator_MV_WorldObject_IntVector_ *)&pLStack_10;
            bVar30 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[MV::WorldObject
                    ::IntVector]::List_1_T_Enumerator_MV_WorldObject_IntVector__MoveNext
                              ((List_1_T_Enumerator_MV_WorldObject_IntVector_ *)&pLStack_10,
                               MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::IntVector>__MoveNext__
                              );
            puVar31 = puStack_13;
            uVar1 = (undefined2)((uint)pLVar27 >> 0x10);
            if (bVar30 == 0) {
              uStack_3 = 0xffffffff;
              mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                        ((Object *)&pLStack_10,
                         (ExceptionArgument__Enum)
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::IntVector>__Dispose__
                         ,(MethodInfo *)in_stack_8);
              *unaff_FS_OFFSET = uStack_5;
              return;
            }
            iVar32 = iVar28;
            if ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_finished_or_no_cctor == 0) {
              uVar29 = 0x1036;
              func_?(TypeInfo__MV__WorldObject__IntVector);
            }
            in_stack_9 = (MethodInfo **)CONCAT22(uVar29,iVar28);
            i1.z = (int16_t)uStack_20;
            i1._0_4_ = aIStack_22;
            i2.y = uVar1;
            i2.x = uStack_21;
            i2.z = (int16_t)puVar31;
            IVar18 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_op_Addition
                               (i1,i2,(MethodInfo *)in_stack_9);
            auStack_19[0] = *IVar18._0_4_;
            uVar1 = *(undefined2 *)(IVar18._0_4_ + 1);
            iVar28 = iVar32;
            if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__MV__WorldObject__CubeBase);
              iVar28 = iVar32;
            }
            pBStack_33 = MVWorldObject.dll::MV::WorldObject::CubeBase::
                         CubeBase_get_IdentityByteCorners((MethodInfo *)0x0);
            if (pPStack_26 == (PlayableBehaviour *)0x0) break;
            pOVar24 = UnityEngine.CoreModule.dll::UnityEngine::Playables::PlayableBehaviour::
                      PlayableBehaviour_Clone(pPStack_26,(MethodInfo *)0x0);
            pLStack_17 = (List_1_MV_WorldObject_IntVector_ *)func_?();
            pBStack_34 = TypeInfo__System__Byte;
            if (pOVar24 == (Object *)0x0) {
              faceMaterials = (Byte__Array *)0x0;
            }
            else {
              faceMaterials = (Byte__Array *)func_?();
              if (faceMaterials == (Byte__Array *)0x0) goto code_?;
            }
            MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase__ctor
                      ((CubeBase *)pLStack_17,pBStack_33,faceMaterials,(MethodInfo *)0x0);
            pBStack_33 = (Byte__Array *)0x0;
            uStack_35 = 0;
            uVar36._0_1_ = (to->klass->_1).rank;
            uVar36._1_1_ = (to->klass->_1).minimumAlignment;
            pBStack_34 = (Byte__Array__Class *)(uint)uVar36;
            if (uVar36 != 0) {
              do {
                if (to->klass->interfaceOffsets[(uint)pBStack_33 & 0xffff].interfaceType ==
                    (Il2CppClass *)TypeInfo__MV__WorldObject__ICubeModel) {
                  ppMVar37 = &(&(to->klass->vtable).AddCubeNetworkUpdate)
                              [to->klass->interfaceOffsets[(uint)pBStack_33 & 0xffff].offset].method
                  ;
                  goto code_?;
                }
                pBStack_33 = (Byte__Array *)((int)&pBStack_33->klass + 1);
              } while ((ushort)pBStack_33 < uVar36);
            }
            iStack_12 = 2;
            pIStack_11 = TypeInfo__MV__WorldObject__ICubeModel;
            pLStack_10 = (List_1_MV_WorldObject_IntVector_ *)to;
            ppMVar37 = (MethodInfo **)func_?();
code_?:
            iStack_12 = (int32_t)ppMVar37[1];
            pIStack_11 = (ICubeModel__Class *)pLStack_17;
            pLStack_10 = (List_1_MV_WorldObject_IntVector_ *)CONCAT22(pLStack_10._2_2_,uVar1);
            (*(code *)*ppMVar37)();
          }
        }
      }
    }
  }
code_?:
  uVar38 = func_?();
  func_?(uVar38);
  pcVar39 = (code *)swi(3);
  (*pcVar39)();
  return;
}


/* Void AddUnindentedCube(ICubeModel, ICubeModel, IntVector) */

void Assembly-CSharp.dll::MoveCubeFromCoarseToFine::MoveCubeFromCoarseToFine_AddUnindentedCube
               (ICubeModel *from,ICubeModel *to,IntVector fromPos,MethodInfo *method)

{
  pIVar1 = from;
  uVar2 = (undefined2)((uint)in_stack_3 >> 0x10);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Byte);
    func_?(&TypeInfo__MV__WorldObject__CubeBase);
    func_?(&TypeInfo__MV__WorldObject__ICubeModel);
    func_?(&TypeInfo__MV__WorldObject__IntVector);
    cRam_? = '\x01';
  }
  if (from != (ICubeModel *)0x0) {
    iVar4 = func_?(1,TypeInfo__MV__WorldObject__ICubeModel,from,fromPos._0_4_,fromPos.z);
    if ((iVar4 != 0) && (*(PlayableBehaviour **)(iVar4 + 0x10) != (PlayableBehaviour *)0x0)) {
      pOVar5 = UnityEngine.CoreModule.dll::UnityEngine::Playables::PlayableBehaviour::
               PlayableBehaviour_Clone(*(PlayableBehaviour **)(iVar4 + 0x10),(MethodInfo *)0x0);
      pBStack_6 = TypeInfo__System__Byte;
      if (pOVar5 == (Object *)0x0) {
        from = (ICubeModel *)0x0;
      }
      else {
        from = (ICubeModel *)func_?(pOVar5,TypeInfo__System__Byte);
        if (from == (ICubeModel *)0x0) {
          func_?(pOVar5,pBStack_6);
          pBVar7 = (Byte__Array__Class *)0x0;
code_?:
          func_?(pOVar5,pBVar7);
          goto code_?;
        }
      }
      puVar8 = (undefined8 *)
               func_?(auStack_9,0,TypeInfo__MV__WorldObject__ICubeModel,pIVar1);
      fStack_10 = (float)*puVar8;
      if (to != (ICubeModel *)0x0) {
        puVar8 = (undefined8 *)
                 func_?(auStack_9,0,TypeInfo__MV__WorldObject__ICubeModel,to);
        uStack_11 = (undefined2)((uint)*(undefined4 *)(puVar8 + 1) >> 0x10);
        method_00 = (MethodInfo *)(int)(fStack_10 / (float)*puVar8);
        pMStack_12 = method_00;
        if ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__MV__WorldObject__IntVector);
        }
        IVar13.z = fromPos.x;
        IVar13._0_4_ = &fromPos;
        IVar13 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_op_Multiply_1
                          (IVar13,CONCAT22(uVar2,fromPos.z),method_00);
        pBStack_6 = (Byte__Array__Class *)*IVar13._0_4_;
        uStack_14 = *(undefined2 *)(IVar13._0_4_ + 1);
        uStack_15 = (undefined2)((uint)pBStack_6 >> 0x10);
        fStack_10 = 0.0;
        if (0 < (int)method_00) {
          do {
            iVar4 = 0;
            uStack_16 = (int)&(pBStack_6->_0).image + (int)fStack_10 & 0xffff;
            do {
              iVar17 = 0;
              iStack_18 = iVar4 + CONCAT22(uStack_14,uStack_15);
              do {
                in_stack_19 = (undefined2)((uint)iVar4 >> 0x10);
                fromPos.z = (int16_t)iVar4;
                IStack_20.x = 0;
                IStack_20.y = 0;
                IStack_20.z = 0;
                MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
                          (&IStack_20,uStack_16,iStack_18,CONCAT22(uStack_11,uStack_14) + iVar17,
                           (MethodInfo *)0x0);
                if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0) {
                  func_?(TypeInfo__MV__WorldObject__CubeBase);
                }
                pBStack_21 = MVWorldObject.dll::MV::WorldObject::CubeBase::
                             CubeBase_get_IdentityByteCorners((MethodInfo *)0x0);
                if (from == (ICubeModel *)0x0) goto code_?;
                pOVar5 = UnityEngine.CoreModule.dll::UnityEngine::Playables::PlayableBehaviour::
                         PlayableBehaviour_Clone((PlayableBehaviour *)from,(MethodInfo *)0x0);
                pCStack_22 = (CubeBase *)func_?(TypeInfo__MV__WorldObject__CubeBase);
                pBVar7 = TypeInfo__System__Byte;
                if (pOVar5 == (Object *)0x0) {
                  faceMaterials = (Byte__Array *)0x0;
                }
                else {
                  faceMaterials = (Byte__Array *)func_?(pOVar5,TypeInfo__System__Byte);
                  if (faceMaterials == (Byte__Array *)0x0) goto code_?;
                }
                pCVar23 = pCStack_22;
                MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase__ctor
                          (pCStack_22,pBStack_21,faceMaterials,(MethodInfo *)0x0);
                uStack_14 = SUB42(pCVar23,0);
                uStack_11 = (undefined2)((uint)pCVar23 >> 0x10);
                func_?(2,TypeInfo__MV__WorldObject__ICubeModel,to,IStack_20._0_4_,
                                IStack_20.z);
                iVar4 = CONCAT22(in_stack_19,fromPos.z);
                iVar17 = iVar17 + 1;
              } while (iVar17 < (int)pMStack_12);
              iVar4 = CONCAT22(in_stack_19,fromPos.z) + 1;
            } while (iVar4 < (int)pMStack_12);
            fStack_10 = (float)((int)fStack_10 + 1);
          } while ((int)fStack_10 < (int)pMStack_12);
        }
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar24 = (code *)swi(3);
  (*pcVar24)();
  return;
}


/* List`1[MoveCubeFromCoarseToFine+ValidPos] CreateValidPosGrid(Int32) */

List_1_MoveCubeFromCoarseToFine_ValidPos_ *
Assembly-CSharp.dll::MoveCubeFromCoarseToFine::MoveCubeFromCoarseToFine_CreateValidPosGrid
          (int32_t scaleFactor,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__IntVector);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MoveCubeFromCoarseToFine::ValidPos>__Add_MoveCubeFromCoarseToFine__ValidPos_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MoveCubeFromCoarseToFine::ValidPos>__List__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__List<MoveCubeFromCoarseToFine::ValidPos>
                   );
    func_?(&TypeInfo__MoveCubeFromCoarseToFine__ValidPos);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  auStack_2._0_4_ = (pVVar1->oneVector).x;
  auStack_2._4_4_ = (pVVar1->oneVector).y;
  fStack_3 = (pVVar1->oneVector).z;
  fVar4 = (float)scaleFactor;
  pMStack_5 = (MethodInfo *)((float)auStack_2._0_4_ / fVar4);
  fVar6 = (float)auStack_2._4_4_ / fVar4;
  fVar4 = fStack_3 / fVar4;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  auStack_2._0_4_ = (pVVar1->oneVector).x;
  auStack_2._4_4_ = (pVVar1->oneVector).y;
  fStack_3 = (pVVar1->oneVector).z;
  fStack_7 = (float)(auStack_2._0_4_ ^
                     __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field) *
              _UNK_?;
  fStack_8 = (float)(auStack_2._4_4_ ^
                     __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field) *
              _UNK_?;
  fStack_9 = (float)((uint)fStack_3 ^
                     __0B8F1B2A03256530B29F55A9640DB5F499BCAA95602DE832E800B6D1563C9B86_Field) *
              _UNK_?;
  pLVar10 = (List_1_MoveCubeFromCoarseToFine_ValidPos_ *)
           func_?(
                          TypeInfo__System__Collections__Generic__List<MoveCubeFromCoarseToFine::ValidPos>
                          );
  pLStack_11 = pLVar10;
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar10,
             MethodInfo__System__Collections__Generic__List<MoveCubeFromCoarseToFine::ValidPos>__List__
            );
  iStack_12 = 0;
  if (0 < scaleFactor + 1) {
    do {
      y = 0;
      do {
        z = 0;
        do {
          auStack_2 = (undefined1  [8])((ulonglong)auStack_2 & 0xffffffff);
          fStack_3 = (float)((uint)fStack_3 & 0xffff0000);
          MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
                    ((IntVector *)(auStack_2 + 4),iStack_12,y,z,(MethodInfo *)0x0);
          if ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__MV__WorldObject__IntVector);
          }
          auVar13 = auStack_2;
          iV.z = fStack_3._0_2_;
          iV.x = auStack_2._4_2_;
          iV.y = auStack_2._6_2_;
          vector3.y = fVar6;
          vector3.x = (float)pMStack_5;
          vector3.z = fVar4;
          auStack_2 = auVar13;
          pVVar14 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_op_Multiply_2
                             ((Vector3 *)&stack0xffffff90,iV,vector3,(MethodInfo *)0x0);
          uVar15 = pVVar14->x;
          uVar16 = pVVar14->y;
          fVar17 = (float)uVar15 + fStack_7;
          fStack_18 = (float)uVar16 + fStack_8;
          fVar19 = pVVar14->z + fStack_9;
          pMStack_20 = (MoveCubeFromCoarseToFine_ValidPos *)
                       func_?(TypeInfo__MoveCubeFromCoarseToFine__ValidPos,0);
          pos.y = fStack_18;
          pos.x = fVar17;
          pos.z = fVar19;
          MoveCubeFromCoarseToFine+ValidPos::MoveCubeFromCoarseToFine_ValidPos__ctor
                    (pMStack_20,1,pos,(MethodInfo *)0x0);
          if (pLStack_11 == (List_1_MoveCubeFromCoarseToFine_ValidPos_ *)0x0) {
            func_?();
            pcVar21 = (code *)swi(3);
            pLVar10 = (List_1_MoveCubeFromCoarseToFine_ValidPos_ *)(*pcVar21)();
            return pLVar10;
          }
          pMStack_5 = 
          MethodInfo__System__Collections__Generic__List<MoveCubeFromCoarseToFine::ValidPos>__Add_MoveCubeFromCoarseToFine__ValidPos_
          ;
          func_?();
          z = z + 1;
          iVar22 = scaleFactor + 1;
        } while (z < iVar22);
        y = y + 1;
      } while (y < iVar22);
      iStack_12 = iStack_12 + 1;
      pLVar10 = pLStack_11;
    } while (iStack_12 < iVar22);
  }
  return pLVar10;
}


/* List`1[UnityEngine.Plane] GetTestPlanes(ICubeModel, IntVector) */

List_1_UnityEngine_Plane_ *
Assembly-CSharp.dll::MoveCubeFromCoarseToFine::MoveCubeFromCoarseToFine_GetTestPlanes
          (ICubeModel *from,IntVector fromPos,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__CubeBase);
    func_?(&TypeInfo__MV__WorldObject__ICubeModel);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Plane>__Add_UnityEngine__Plane_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::Plane>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::Plane>);
    func_?(&TypeInfo__MoveCubeFromCoarseToFine);
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  PStack_1.m_Normal.x = 0.0;
  PStack_1.m_Normal.y = 0.0;
  PStack_1.m_Normal.z = 0.0;
  PStack_1.m_Distance = 0.0;
  if ((from != (ICubeModel *)0x0) &&
     (this = (CubeBase *)
             func_?(1,TypeInfo__MV__WorldObject__ICubeModel,from,fromPos._0_4_,fromPos.z),
     this != (CubeBase *)0x0)) {
    pVStack_2 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_get_Corners
                          (this,(MethodInfo *)0x0);
    pVStack_3 = (Vector3__Array *)func_?(TypeInfo__UnityEngine__Vector3,4);
    pLVar4 = (List_1_UnityEngine_Plane_ *)
             func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Plane>);
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType]::
    LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar4,
               MethodInfo__System__Collections__Generic__List<UnityEngine::Plane>__List__);
    if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__MV__WorldObject__CubeBase);
    }
    if (cRam_? == '\0') {
      func_?(&TypeInfo__MV__WorldObject__CubeBase);
      cRam_? = '\x01';
    }
    if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__MV__WorldObject__CubeBase);
    }
    uVar5 = 0;
    pFStack_6 = TypeInfo__MV__WorldObject__CubeBase->static_fields->faceFlagsArray;
    if (pFStack_6 != (FaceFlags__Enum__Array *)0x0) {
      do {
        if ((int)pFStack_6->max_length <= (int)uVar5) {
          return pLVar4;
        }
        if (pFStack_6->max_length <= uVar5) goto code_?;
        bVar7 = *(byte *)((int)pFStack_6->vector + uVar5);
        if (((this->fields).unIndentedSides & bVar7) == 0) {
          if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__MV__WorldObject__CubeBase);
          }
          face = (undefined8 *)
                 MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_FaceFlagToFace
                           (CONCAT22(in_stack_8,CONCAT11(fromPos.z._1_1_,bVar7)),
                            (MethodInfo *)0x0);
          MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_GetFace
                    (&pVStack_2,&pVStack_3,(Face__Enum)face,(MethodInfo *)0x0);
          if ((TypeInfo__MoveCubeFromCoarseToFine->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          fVar9 = 0.0;
          faceCorners = &pVStack_3;
          bVar10 = MoveCubeFromCoarseToFine_IsFaceIndented
                            ((Face__Enum)face,faceCorners,(MethodInfo *)0x0);
          if (bVar10 != 0) {
            if (pVStack_3 == (Vector3__Array *)0x0) break;
            PStack_1.m_Normal.y = 0.0;
            PStack_1.m_Normal.x = (float)&uStack_11;
            func_?();
            if ((pVStack_3 == (Vector3__Array *)0x0) ||
               (func_?(&uStack_12,3), pVStack_3 == (Vector3__Array *)0x0)) break;
            func_?(&uStack_13,2);
            a.z = fStack_14;
            a.x = (float)(undefined4)uStack_11;
            a.y = (float)uStack_11._4_4_;
            b.z = fStack_15;
            b.x = (float)(undefined4)uStack_12;
            b.y = (float)uStack_12._4_4_;
            c.z = fStack_16;
            c.x = (float)(undefined4)uStack_13;
            c.y = (float)uStack_13._4_4_;
            UnityEngine.CoreModule.dll::UnityEngine::Plane::Plane__ctor_2
                      ((Plane *)&stack0xffffff7c,a,b,c,(MethodInfo *)0x0);
            if ((pVStack_3 == (Vector3__Array *)0x0) ||
               ((func_?(&uStack_17,2), pVStack_3 == (Vector3__Array *)0x0 ||
                (func_?(&uStack_18,1), pVStack_3 == (Vector3__Array *)0x0)))) break;
            func_?(&uStack_19,0);
            a_00.z = fStack_20;
            a_00.x = (float)(undefined4)uStack_17;
            a_00.y = (float)uStack_17._4_4_;
            b_00.z = fStack_21;
            b_00.x = (float)(undefined4)uStack_18;
            b_00.y = (float)uStack_18._4_4_;
            c_00.z = fStack_22;
            c_00.x = (float)(undefined4)uStack_19;
            c_00.y = (float)uStack_19._4_4_;
            UnityEngine.CoreModule.dll::UnityEngine::Plane::Plane__ctor_2
                      (&PStack_1,a_00,b_00,c_00,(MethodInfo *)0x0);
            puStack_23 = (undefined8 *)PStack_1.m_Normal.x;
            ppVStack_24 = (Vector3__Array **)PStack_1.m_Normal.y;
            fStack_25 = PStack_1.m_Normal.z;
            fVar26 = (float)faceCorners * (float)faceCorners + (float)face * (float)face +
                    fVar9 * fVar9;
            if (((float)face - PStack_1.m_Normal.x) * ((float)face - PStack_1.m_Normal.x) +
                ((float)faceCorners - PStack_1.m_Normal.y) *
                ((float)faceCorners - PStack_1.m_Normal.y) +
                (fVar9 - PStack_1.m_Normal.z) * (fVar9 - PStack_1.m_Normal.z) == 0.0) {
              if (fVar26 != 0.0) {
                if (pLVar4 != (List_1_UnityEngine_Plane_ *)0x0) {
                  puVar27 = &UNK_?;
                  goto code_?;
                }
                break;
              }
            }
            else {
              if (fVar26 != 0.0) {
                if (pLVar4 == (List_1_UnityEngine_Plane_ *)0x0) break;
                func_?(pLVar4,face,faceCorners,fVar9,&UNK_?,
                                MethodInfo__System__Collections__Generic__List<UnityEngine::Plane>__Add_UnityEngine__Plane_
                               );
              }
              if ((float)ppVStack_24 * (float)ppVStack_24 + (float)puStack_23 * (float)puStack_23 +
                  fStack_25 * fStack_25 != 0.0) {
                face = (undefined8 *)PStack_1.m_Normal.x;
                faceCorners = (Vector3__Array **)PStack_1.m_Normal.y;
                fVar9 = PStack_1.m_Normal.z;
                puVar27 = (undefined *)PStack_1.m_Distance;
                if (pLVar4 == (List_1_UnityEngine_Plane_ *)0x0) break;
code_?:
                func_?(pLVar4,face,faceCorners,fVar9,puVar27,
                                MethodInfo__System__Collections__Generic__List<UnityEngine::Plane>__Add_UnityEngine__Plane_
                               );
              }
            }
          }
        }
        uVar5 = uVar5 + 1;
      } while( true );
    }
  }
  func_?();
code_?:
  func_?();
  pcVar28 = (code *)swi(3);
  pLVar4 = (List_1_UnityEngine_Plane_ *)(*pcVar28)();
  return pLVar4;
}


/* List`1[MV.WorldObject.IntVector] GetValidCubes(List`1[MoveCubeFromCoarseToFine+ValidPos], Int32)
    */

List_1_MV_WorldObject_IntVector_ *
Assembly-CSharp.dll::MoveCubeFromCoarseToFine::MoveCubeFromCoarseToFine_GetValidCubes
          (List_1_MoveCubeFromCoarseToFine_ValidPos_ *validPoses,int32_t scaleFactor,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(0xed30);
    func_?(0xea50);
    func_?(0xea18);
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MoveCubeFromCoarseToFine::ValidPos>__get_Item_int_
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<MV::WorldObject::IntVector>);
    func_?(&TypeInfo__MoveCubeFromCoarseToFine);
    cRam_? = '\x01';
  }
  IStack_1.x = 0;
  IStack_1.y = 0;
  IStack_1.z = 0;
  pLVar2 = (List_1_MV_WorldObject_IntVector_ *)
           func_?((short)
                           TypeInfo__System__Collections__Generic__List<MV::WorldObject::IntVector>)
  ;
  pLStack_3 = pLVar2;
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar2,
             MethodInfo__System__Collections__Generic__List<MV::WorldObject::IntVector>__List__);
  iStack_4 = 0;
  if (0 < scaleFactor) {
    do {
      iStack_5 = 0;
      do {
        uStack_6._4_4_ = (MethodInfo *)0x0;
        do {
          method_00 = uStack_6._4_4_;
          if ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__MV__WorldObject__IntVector);
          }
          uVar7 = (undefined2)((uint)iStack_4 >> 0x10);
          MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
                    (&IStack_1,iStack_4,iStack_5,(int32_t)method_00,(MethodInfo *)0x0);
          if ((TypeInfo__MoveCubeFromCoarseToFine->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          pIVar8 = TypeInfo__MoveCubeFromCoarseToFine->static_fields->intCubeCorners;
          iVar9 = 0;
          if (pIVar8 == (IntVector__Array *)0x0) {
code_?:
            func_?();
            pcVar10 = (code *)swi(3);
            pLVar2 = (List_1_MV_WorldObject_IntVector_ *)(*pcVar10)();
            return pLVar2;
          }
          for (; pLVar2 = pLStack_3, uVar11 = (undefined2)((uint)method_00 >> 0x10),
              iVar9 < (int)pIVar8->max_length; iVar9 = iVar9 + 1) {
            func_?();
            uStack_6._0_2_ = IStack_1.x;
            uStack_6._2_2_ = IStack_1.y;
            iStack_12 = IStack_1.z;
            if ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_finished_or_no_cctor == 0) {
              uVar11 = 0x1036;
              func_?(TypeInfo__MV__WorldObject__IntVector);
            }
            method_00 = (MethodInfo *)CONCAT22(uVar11,uStack_13);
            IVar14.z = (int16_t)(undefined4)uStack_6;
            IVar14._0_4_ = &pLStack_15;
            i2.y = uVar7;
            i2.x = iStack_12;
            i2.z = (int16_t)uStack_16;
            IVar14 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_op_Addition
                              (IVar14,i2,method_00);
            puVar17 = (undefined *)*IVar14._0_4_;
            iStack_12 = *(int16_t *)(IVar14._0_4_ + 1);
            if ((TypeInfo__MoveCubeFromCoarseToFine->_1).cctor_finished_or_no_cctor == 0) {
              puVar17 = &UNK_?;
              func_?();
            }
            if (validPoses == (List_1_MoveCubeFromCoarseToFine_ValidPos_ *)0x0)
            goto code_?;
            RVar18 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                    RegularExpressions::RegexCharClass+SingleRange]::
                    List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__get_Item
                              ((List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                               validPoses,
                               ((int)(short)puVar17 * (scaleFactor + 1) +
                               (int)(short)((uint)puVar17 >> 0x10)) * (scaleFactor + 1) +
                               (int)iStack_12,
                               MethodInfo__System__Collections__Generic__List<MoveCubeFromCoarseToFine::ValidPos>__get_Item_int_
                              );
            if (RVar18 == (RegexCharClass_SingleRange)0x0) goto code_?;
            pLVar2 = pLStack_3;
            if (*(char *)((int)RVar18 + 8) == '\0') goto code_?;
          }
          if (pLStack_3 == (List_1_MV_WorldObject_IntVector_ *)0x0) goto code_?;
          pLStack_15 = pLStack_3;
          func_?();
code_?:
          uStack_6._4_4_ = (MethodInfo *)((int)&(uStack_6._4_4_)->methodPointer + 1);
        } while ((int)uStack_6._4_4_ < scaleFactor);
        iStack_5 = iStack_5 + 1;
      } while (iStack_5 < scaleFactor);
      iStack_4 = iStack_4 + 1;
    } while (iStack_4 < scaleFactor);
  }
  return pLVar2;
}


/* Int32 IntVectorToValidPosIndex(IntVector, Int32) */

int32_t Assembly-CSharp.dll::MoveCubeFromCoarseToFine::
        MoveCubeFromCoarseToFine_IntVectorToValidPosIndex
                  (IntVector intVector,int32_t validPosSize,MethodInfo *method)

{
  return ((int)intVector.y + intVector.x * validPosSize) * validPosSize + (int)intVector.z;
}


/* Boolean IsFaceIndented(Face, Vector3[] ByRef) */

bool Assembly-CSharp.dll::MoveCubeFromCoarseToFine::MoveCubeFromCoarseToFine_IsFaceIndented
               (Face__Enum face,Vector3__Array **faceCorners,MethodInfo *method)

{
  iStack_1 = 0;
  fStack_2 = _UNK_?;
  switch(face) {
  case Face__Enum_Top:
    iStack_1 = 1;
    break;
  case Face__Enum_Bottom:
    iStack_1 = 1;
    fStack_2 = _UNK_?;
    break;
  case Face__Enum_Front:
    iStack_1 = 2;
    fStack_2 = _UNK_?;
    break;
  case Face__Enum_Back:
    iStack_1 = 2;
    break;
  case Face__Enum_Left:
    fStack_2 = _UNK_?;
  case Face__Enum_Right:
    iStack_1 = 0;
  }
  uVar3 = 0;
  pVVar4 = *faceCorners;
  if (pVVar4 == (Vector3__Array *)0x0) {
    func_?();
  }
  else {
    pVVar5 = pVVar4->vector;
    while( true ) {
      if ((int)pVVar4->max_length <= (int)uVar3) {
        return 0;
      }
      if (pVVar4->max_length <= uVar3) break;
      VStack_6.z = pVVar5->z;
      VStack_6.x = pVVar5->x;
      VStack_6.y = pVVar5->y;
      fVar7 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                         (&VStack_6,iStack_1,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        VStack_6.x = (float)&TypeInfo__UnityEngine__Mathf;
        func_?();
        cRam_? = '\x01';
      }
      fVar8 = (float)((uint)fVar7 & _UNK_?);
      if ((float)((uint)fVar7 & _UNK_?) <= (float)((uint)fStack_2 & _UNK_?)) {
        fVar8 = (float)((uint)fStack_2 & _UNK_?);
      }
      fVar9 = TypeInfo__UnityEngine__Mathf->static_fields->Epsilon * _UNK_?;
      fVar10 = fVar8 * _UNK_?;
      if (fVar8 * _UNK_? <= fVar9) {
        fVar10 = fVar9;
      }
      in_AF = 0;
      if (fVar10 <= (float)((uint)(fStack_2 - fVar7) & _UNK_?)) {
        return 1;
      }
      uVar3 = uVar3 + 1;
      pVVar5 = pVVar5 + 1;
    }
  }
  uVar11 = func_?();
  iVar12 = (int)((ulonglong)uVar11 >> 0x20);
  in_AF = 9 < ((byte)uVar11 & 0xf) | in_AF;
  uVar13 = CONCAT31((int3)((ulonglong)uVar11 >> 8),(byte)uVar11 + in_AF * '\x06') & 0xffffff0f;
  bVar14 = (char)((ulonglong)uVar11 >> 8) + in_AF;
  pbVar15 = (byte *)CONCAT22((short)(uVar13 >> 0x10),CONCAT11(bVar14,(char)uVar13));
  bVar16 = CARRY1(*pbVar15,unaff_BH) || CARRY1(*pbVar15 + unaff_BH,in_AF);
  *pbVar15 = *pbVar15 + unaff_BH + in_AF;
  pbVar15 = (byte *)(iVar12 + -0x6a);
  bVar17 = (byte)((ulonglong)uVar11 >> 0x20);
  bVar18 = *pbVar15 + bVar17;
  bVar19 = CARRY1(*pbVar15,bVar17) || CARRY1(bVar18,bVar16);
  *pbVar15 = bVar18 + bVar16;
  pbVar15 = (byte *)(uVar3 - 0x6a);
  bVar18 = *pbVar15;
  bVar17 = *pbVar15;
  *pbVar15 = bVar17 + bVar14 + bVar19;
  pcVar20 = (char *)(iVar12 + -0x6a);
  *pcVar20 = *pcVar20 + unaff_BH +
            (CARRY1(bStackY_6e,extraout_CH) ||
            CARRY1(bStackY_6e + extraout_CH,CARRY1(bVar18,bVar14) || CARRY1(bVar17 + bVar14,bVar19)));
  pcVar21 = (code *)swi(3);
  bVar22 = (*pcVar21)();
  return bVar22;
}


/* Void MoveCube(ICubeModel, ICubeModel, IntVector) */

void Assembly-CSharp.dll::MoveCubeFromCoarseToFine::MoveCubeFromCoarseToFine_MoveCube
               (ICubeModel *from,ICubeModel *to,IntVector fromPos,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__ICubeModel);
    func_?(0x6fe4);
    cRam_? = '\x01';
  }
  if (from != (ICubeModel *)0x0) {
    iVar1 = func_?(1,TypeInfo__MV__WorldObject__ICubeModel,from,fromPos.x,fromPos.z);
    if (iVar1 != 0) {
      if (*(char *)(iVar1 + 8) != '?') {
        if ((TypeInfo__MoveCubeFromCoarseToFine->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__MoveCubeFromCoarseToFine);
        }
        MoveCubeFromCoarseToFine_AddIndentedCube(from,to,fromPos,(MethodInfo *)0x0);
        return;
      }
      if ((TypeInfo__MoveCubeFromCoarseToFine->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__MoveCubeFromCoarseToFine);
      }
      MoveCubeFromCoarseToFine_AddUnindentedCube(from,to,fromPos,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetValidPoints(List`1[UnityEngine.Plane], List`1[MoveCubeFromCoarseToFine+ValidPos]) */

void Assembly-CSharp.dll::MoveCubeFromCoarseToFine::MoveCubeFromCoarseToFine_SetValidPoints
               (List_1_UnityEngine_Plane_ *testPlanes,
               List_1_MoveCubeFromCoarseToFine_ValidPos_ *validPoses,MethodInfo *method)

{
  uStack_1._0_1_ = 0xff;
  uStack_1._1_3_ = 0xffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffff64;
  puVar5 = &stack0xffffff64;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Plane>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MoveCubeFromCoarseToFine::ValidPos>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Plane>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MoveCubeFromCoarseToFine::ValidPos>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MoveCubeFromCoarseToFine::ValidPos>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Plane>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::Plane>__GetEnumerator__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MoveCubeFromCoarseToFine::ValidPos>__GetEnumerator__
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  LStack_6._list = (List_1_System_Object_ *)0x0;
  LStack_6._index = 0;
  LStack_6._version = 0;
  LStack_6._current = (Object *)0x0;
  if (testPlanes != (List_1_UnityEngine_Plane_ *)0x0) {
    pLVar7 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::
             VisualTreeAsset+AssetEntry]::
             List_1_UnityEngine_UIElements_VisualTreeAsset_AssetEntry__GetEnumerator
                       (&LStack_8,
                        (List_1_UnityEngine_UIElements_VisualTreeAsset_AssetEntry_ *)testPlanes,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Plane>__GetEnumerator__
                       );
    uStack_9 = 0;
    method_01 = (MethodInfo *)pLVar7->_index;
    pSVar10 = (pLVar7->_current).path;
    uVar11 = (pLVar7->_current).typeFullName;
    uVar12 = (pLVar7->_current).asset;
    pTVar13 = (pLVar7->_current).m_CachedType;
    pOStack_14 = (Object *)&stack0xffffff70;
    uStack_1 = 0;
    while( true ) {
      uStack_1._0_1_ = 1;
      bVar15 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[UnityEngine::Vector4]
              ::List_1_T_Enumerator_UnityEngine_Vector4__MoveNext
                        ((List_1_T_Enumerator_UnityEngine_Vector4_ *)&stack0xffffff70,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Plane>__MoveNext__
                        );
      if (bVar15 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  (pOStack_14,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Plane>__Dispose__
                   ,method_01);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      fStack_16 = (float)uVar11;
      fStack_17 = (float)uVar12;
      pSStack_18 = pSVar10;
      pTStack_19 = pTVar13;
      if (validPoses == (List_1_MoveCubeFromCoarseToFine_ValidPos_ *)0x0) break;
      method_00 = (MethodInfo *)&UNK_?;
      pLVar20 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                ::RegexCharClass+SingleRange]::
                List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                          ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                            *)&LStack_8._current,
                           (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                           validPoses,
                           MethodInfo__System__Collections__Generic__List<MoveCubeFromCoarseToFine::ValidPos>__GetEnumerator__
                          );
      uStack_21 = 0;
      LStack_6._list = (List_1_System_Object_ *)pLVar20->_list;
      LStack_6._index = pLVar20->_index;
      LStack_6._version = pLVar20->_version;
      LStack_6._current = *(Object **)&pLVar20->_current;
      uStack_1._0_1_ = 3;
      pLStack_22 = &LStack_6;
      while( true ) {
        bVar15 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                List_1_T_Enumerator_System_Object__MoveNext
                          (&LStack_6,
                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MoveCubeFromCoarseToFine::ValidPos>__MoveNext__
                          );
        if (bVar15 == 0) break;
        if ((RegexCharClass_SingleRange)LStack_6._current == (RegexCharClass_SingleRange)0x0)
        goto code_?;
        if (*(char *)((int)LStack_6._current + 8) != '\0') {
          uVar23 = *(undefined8 *)((int)LStack_6._current + 0xc);
          fStack_24 = *(float *)((int)LStack_6._current + 0x14);
          uStack_25._4_4_ = (float)((ulonglong)uVar23 >> 0x20);
          fVar26 = fStack_16 * uStack_25._4_4_;
          uStack_25._0_4_ = (float)uVar23;
          fVar27 = (float)pSStack_18 * (float)uStack_25;
          uStack_25 = uVar23;
          if (_UNK_? <= (float)pTStack_19 + fVar26 + fVar27 + fStack_17 * fStack_24) {
            *(undefined1 *)((int)LStack_6._current + 8) = 0;
          }
        }
      }
      uStack_1 = CONCAT31(uStack_1._1_3_,1);
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                ((Object *)&LStack_6,
                 (ExceptionArgument__Enum)
                 MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MoveCubeFromCoarseToFine::ValidPos>__Dispose__
                 ,method_00);
    }
  }
code_?:
  func_?();
  pcVar28 = (code *)swi(3);
  (*pcVar28)();
  return;
}


/* MoveCubeFromCoarseToFine() */

void Assembly-CSharp.dll::MoveCubeFromCoarseToFine::MoveCubeFromCoarseToFine__cctor
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__IntVector);
    func_?(&TypeInfo__MoveCubeFromCoarseToFine);
    cRam_? = '\x01';
  }
  pIVar1 = (IntVector__Array *)func_?(TypeInfo__MV__WorldObject__IntVector,8);
  uVar2._0_2_ = 0;
  uVar2._2_2_ = 0;
  iVar3 = 0;
  MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
            ((IntVector *)&stack0xfffffff4,0,0,0,(MethodInfo *)0x0);
  if (pIVar1 == (IntVector__Array *)0x0) {
    func_?();
  }
  else if (pIVar1->max_length != 0) {
    pIVar1->vector[0].x = (int16_t)uVar2;
    pIVar1->vector[0].y = SUB42(uVar2,2);
    pIVar1->vector[0].z = iVar3;
    uVar4._0_2_ = 0;
    uVar4._2_2_ = 0;
    iVar3 = 0;
    MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
              ((IntVector *)&stack0xffffffec,1,0,0,(MethodInfo *)0x0);
    if (1 < pIVar1->max_length) {
      pIVar1->vector[1].x = (int16_t)uVar4;
      pIVar1->vector[1].y = SUB42(uVar4,2);
      pIVar1->vector[1].z = iVar3;
      uVar5._0_2_ = 0;
      uVar5._2_2_ = 0;
      iVar3 = 0;
      MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
                ((IntVector *)&stack0xffffffe4,1,0,1,(MethodInfo *)0x0);
      if (2 < pIVar1->max_length) {
        pIVar1->vector[2].x = (int16_t)uVar5;
        pIVar1->vector[2].y = SUB42(uVar5,2);
        pIVar1->vector[2].z = iVar3;
        this = (IntVector *)&stack0xffffffdc;
        puVar6 = &UNK_?;
        MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
                  (this,0,0,1,(MethodInfo *)0x0);
        if (3 < pIVar1->max_length) {
          *(undefined **)(pIVar1->vector + 3) = puVar6;
          pIVar1->vector[3].z = (int16_t)this;
          uVar7._0_2_ = 0;
          uVar7._2_2_ = 0;
          iVar3 = 0;
          MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
                    ((IntVector *)&stack0xffffffd4,0,1,0,(MethodInfo *)0x0);
          if (4 < pIVar1->max_length) {
            pIVar1->vector[4].x = (int16_t)uVar7;
            pIVar1->vector[4].y = SUB42(uVar7,2);
            pIVar1->vector[4].z = iVar3;
            uVar8._0_2_ = 0;
            uVar8._2_2_ = 0;
            iVar3 = 0;
            MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
                      ((IntVector *)&stack0xffffffcc,1,1,0,(MethodInfo *)0x0);
            if (5 < pIVar1->max_length) {
              pIVar1->vector[5].x = (int16_t)uVar8;
              pIVar1->vector[5].y = SUB42(uVar8,2);
              pIVar1->vector[5].z = iVar3;
              uVar9._0_2_ = 0;
              uVar9._2_2_ = 0;
              iVar3 = 0;
              MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
                        ((IntVector *)&stack0xffffffc4,1,1,1,(MethodInfo *)0x0);
              if (6 < pIVar1->max_length) {
                pIVar1->vector[6].x = (int16_t)uVar9;
                pIVar1->vector[6].y = SUB42(uVar9,2);
                pIVar1->vector[6].z = iVar3;
                uVar10._0_2_ = 0;
                uVar10._2_2_ = 0;
                iVar3 = 0;
                MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
                          ((IntVector *)&stack0xffffffbc,0,1,1,(MethodInfo *)0x0);
                if (7 < pIVar1->max_length) {
                  pIVar1->vector[7].x = (int16_t)uVar10;
                  pIVar1->vector[7].y = SUB42(uVar10,2);
                  pIVar1->vector[7].z = iVar3;
                  TypeInfo__MoveCubeFromCoarseToFine->static_fields->intCubeCorners = pIVar1;
                  pMStack11 = TypeInfo__MoveCubeFromCoarseToFine->static_fields;
                  pIStack12 = pIVar1;
                  func_?();
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar13 = (code *)swi(3);
  (*pcVar13)();
  return;
}

