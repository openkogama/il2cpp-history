
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
    func_?(0x67c0);
    cRam_? = '\x01';
    puVar7 = puStack_6;
  }
  puStack_6 = puVar7;
  pMStack_10 = (MethodInfo *)0x0;
  iStack_11 = 0;
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
            func_?(pBVar25,pBStack_27);
            goto code_?;
          }
        }
        if (pLStack_17 != (List_1_MV_WorldObject_IntVector_ *)0x0) {
          pLVar28 = mscorlib.dll::System::Collections::Generic::List`1[MV::WorldObject::IntVector]::
                    List_1_MV_WorldObject_IntVector__GetEnumerator
                              ((List_1_T_Enumerator_MV_WorldObject_IntVector_ *)&stack0xffffffa4,
                               pLStack_17,
                               MethodInfo__System__Collections__Generic__List<MV::WorldObject::IntVector>__GetEnumerator__
                              );
          pMStack_10 = (MethodInfo *)pLVar28->_list;
          iStack_11 = pLVar28->_index;
          iStack_12 = pLVar28->_version;
          puStack_13 = *(undefined **)&pLVar28->_current;
          iVar29 = (int16_t)*(undefined4 *)&(pLVar28->_current).z;
          uStack_3 = 1;
          while( true ) {
            uVar30 = (undefined2)((uint)in_stack_9 >> 0x10);
            pLVar28 = (List_1_T_Enumerator_MV_WorldObject_IntVector_ *)&pMStack_10;
            bVar31 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[MV::WorldObject
                    ::IntVector]::List_1_T_Enumerator_MV_WorldObject_IntVector__MoveNext
                              ((List_1_T_Enumerator_MV_WorldObject_IntVector_ *)&pMStack_10,
                               MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::IntVector>__MoveNext__
                              );
            puVar32 = puStack_13;
            uVar1 = (undefined2)((uint)pLVar28 >> 0x10);
            if (bVar31 == 0) {
              uStack_3 = 0xffffffff;
              mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                        ((Object *)&pMStack_10,
                         (ExceptionArgument__Enum)
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MV::WorldObject::IntVector>__Dispose__
                         ,(MethodInfo *)in_stack_8);
              *unaff_FS_OFFSET = uStack_5;
              return;
            }
            iVar33 = iVar29;
            if ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_finished_or_no_cctor == 0) {
              uVar30 = 0x102b;
              func_?(TypeInfo__MV__WorldObject__IntVector);
            }
            in_stack_9 = (MethodInfo **)CONCAT22(uVar30,iVar29);
            i1.z = (int16_t)uStack_20;
            i1._0_4_ = aIStack_22;
            i2.y = uVar1;
            i2.x = uStack_21;
            i2.z = (int16_t)puVar32;
            IVar18 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_op_Addition
                               (i1,i2,(MethodInfo *)in_stack_9);
            auStack_19[0] = *IVar18._0_4_;
            iVar29 = iVar33;
            if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__MV__WorldObject__CubeBase);
              iVar29 = iVar33;
            }
            pBStack_34 = MVWorldObject.dll::MV::WorldObject::CubeBase::
                         CubeBase_get_IdentityByteCorners((MethodInfo *)0x0);
            if (pPStack_26 == (PlayableBehaviour *)0x0) break;
            pBVar25 = (Byte__Array__Class *)
                      UnityEngine.CoreModule.dll::UnityEngine::Playables::PlayableBehaviour::
                      PlayableBehaviour_Clone(pPStack_26,(MethodInfo *)0x0);
            pLStack_17 = (List_1_MV_WorldObject_IntVector_ *)func_?();
            if (pLStack_17 == (List_1_MV_WorldObject_IntVector_ *)0x0) break;
            pBStack_27 = TypeInfo__System__Byte;
            if (pBVar25 == (Byte__Array__Class *)0x0) {
              faceMaterials = (Byte__Array *)0x0;
            }
            else {
              faceMaterials = (Byte__Array *)func_?(pBVar25,TypeInfo__System__Byte);
              if (faceMaterials == (Byte__Array *)0x0) goto code_?;
            }
            MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase__ctor
                      ((CubeBase *)pLStack_17,pBStack_34,faceMaterials,(MethodInfo *)0x0);
            pBStack_34 = (Byte__Array *)0x0;
            uStack_35 = 0;
            uVar36 = (to->klass->_1).interface_offsets_count;
            pBStack_27 = (Byte__Array__Class *)(uint)uVar36;
            if (uVar36 != 0) {
              do {
                if (to->klass->interfaceOffsets[(uint)pBStack_34 & 0xffff].interfaceType ==
                    (Il2CppClass *)TypeInfo__MV__WorldObject__ICubeModel) {
                  pVVar37 = &(to->klass->vtable).AddCubeNetworkUpdate +
                            to->klass->interfaceOffsets[(uint)pBStack_34 & 0xffff].offset;
                  goto code_?;
                }
                pBStack_34 = (Byte__Array *)((int)&pBStack_34->klass + 1);
              } while ((ushort)pBStack_34 < uVar36);
            }
            pMStack_10 = (MethodInfo *)0x5;
            pVVar37 = (VirtualInvokeData *)func_?();
code_?:
            pMStack_10 = pVVar37->method;
            (*pVVar37->methodPtr)(to);
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
    iVar4 = func_?(2,TypeInfo__MV__WorldObject__ICubeModel,from,fromPos._0_4_,fromPos.z);
    if ((iVar4 != 0) && (*(PlayableBehaviour **)(iVar4 + 0x10) != (PlayableBehaviour *)0x0)) {
      pOVar5 = UnityEngine.CoreModule.dll::UnityEngine::Playables::PlayableBehaviour::
               PlayableBehaviour_Clone(*(PlayableBehaviour **)(iVar4 + 0x10),(MethodInfo *)0x0);
      pBStack_6 = TypeInfo__System__Byte;
      if (pOVar5 == (Object *)0x0) {
        from = (ICubeModel *)0x0;
        pIVar7 = from;
      }
      else {
        pIVar7 = (ICubeModel *)func_?(pOVar5,TypeInfo__System__Byte);
        if (pIVar7 == (ICubeModel *)0x0) {
          func_?(pOVar5,pBStack_6);
          pBVar8 = (Byte__Array__Class *)from;
code_?:
          func_?(pOVar5,pBVar8);
          goto code_?;
        }
      }
      from = pIVar7;
      puVar9 = (undefined8 *)
               func_?(auStack_10,0,TypeInfo__MV__WorldObject__ICubeModel,pIVar1);
      fStack_11 = (float)*puVar9;
      if (to != (ICubeModel *)0x0) {
        puVar9 = (undefined8 *)
                 func_?(auStack_10,0,TypeInfo__MV__WorldObject__ICubeModel,to);
        uStack_12 = (undefined2)((uint)*(undefined4 *)(puVar9 + 1) >> 0x10);
        method_00 = (MethodInfo *)(int)(fStack_11 / (float)*puVar9);
        pMStack_13 = method_00;
        if ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__MV__WorldObject__IntVector);
        }
        IVar14.z = fromPos.x;
        IVar14._0_4_ = &fromPos;
        IVar14 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_op_Multiply_1
                          (IVar14,CONCAT22(uVar2,fromPos.z),method_00);
        pBStack_6 = (Byte__Array__Class *)*IVar14._0_4_;
        uVar2 = *(undefined2 *)(IVar14._0_4_ + 1);
        uStack_15 = (undefined2)((uint)pBStack_6 >> 0x10);
        fStack_11 = 0.0;
        if (0 < (int)method_00) {
          do {
            uStack_16 = (int)&(pBStack_6->_0).image + (int)fStack_11 & 0xffff;
            iStack_17 = 0;
            do {
              iVar4 = 0;
              iStack_18 = iStack_17 + CONCAT22(uVar2,uStack_15);
              do {
                in_stack_19 = (undefined2)((uint)iVar4 >> 0x10);
                fromPos.z = (int16_t)iVar4;
                IStack_20.x = 0;
                IStack_20.y = 0;
                IStack_20.z = 0;
                MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
                          (&IStack_20,uStack_16,iStack_18,iVar4 + CONCAT22(uStack_12,uVar2),
                           (MethodInfo *)0x0);
                if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0) {
                  func_?(TypeInfo__MV__WorldObject__CubeBase);
                }
                pBStack_21 = MVWorldObject.dll::MV::WorldObject::CubeBase::
                             CubeBase_get_IdentityByteCorners((MethodInfo *)0x0);
                if (from == (ICubeModel *)0x0) goto code_?;
                pOVar5 = UnityEngine.CoreModule.dll::UnityEngine::Playables::PlayableBehaviour::
                         PlayableBehaviour_Clone((PlayableBehaviour *)from,(MethodInfo *)0x0);
                this = (CubeBase *)func_?(TypeInfo__MV__WorldObject__CubeBase);
                pBVar8 = TypeInfo__System__Byte;
                if (this == (CubeBase *)0x0) goto code_?;
                if (pOVar5 == (Object *)0x0) {
                  faceMaterials = (Byte__Array *)0x0;
                }
                else {
                  faceMaterials = (Byte__Array *)func_?(pOVar5,TypeInfo__System__Byte);
                  if (faceMaterials == (Byte__Array *)0x0) goto code_?;
                }
                MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase__ctor
                          (this,pBStack_21,faceMaterials,(MethodInfo *)0x0);
                func_?(5,TypeInfo__MV__WorldObject__ICubeModel,to,IStack_20._0_4_,
                                IStack_20.z,this);
                iVar4 = CONCAT22(in_stack_19,fromPos.z) + 1;
              } while (iVar4 < (int)pMStack_13);
              iStack_17 = iStack_17 + 1;
            } while (iStack_17 < (int)pMStack_13);
            fStack_11 = (float)((int)fStack_11 + 1);
          } while ((int)fStack_11 < (int)pMStack_13);
        }
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar22 = (code *)swi(3);
  (*pcVar22)();
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
  fVar2 = (float)scaleFactor;
  auStack_3._0_4_ = (pVVar1->oneVector).x;
  auStack_3._4_4_ = (pVVar1->oneVector).y;
  fVar4 = (float)auStack_3._0_4_ / fVar2;
  fStack_5 = (pVVar1->oneVector).z;
  fVar6 = (float)auStack_3._4_4_ / fVar2;
  fVar2 = fStack_5 / fVar2;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Vector3);
    cRam_? = '\x01';
  }
  pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
  auStack_3._0_4_ = (pVVar1->oneVector).x;
  auStack_3._4_4_ = (pVVar1->oneVector).y;
  fStack_5 = (pVVar1->oneVector).z;
  fStack_7 = (float)(auStack_3._0_4_ ^
                     __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field) *
              _UNK_?;
  fStack_8 = (float)(auStack_3._4_4_ ^
                     __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field) *
              _UNK_?;
  fStack_9 = (float)((uint)fStack_5 ^
                     __0C9D4E2E140EFE455891ACB53ECA876F500D5100E778EBD63B0F0471E68444EF_Field) *
              _UNK_?;
  pLStack_10 = (List_1_MoveCubeFromCoarseToFine_ValidPos_ *)
               func_?(
                              TypeInfo__System__Collections__Generic__List<MoveCubeFromCoarseToFine::ValidPos>
                              );
  if (pLStack_10 != (List_1_MoveCubeFromCoarseToFine_ValidPos_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
    LowLevelList_1_System_Object___ctor
              ((LowLevelList_1_System_Object_ *)pLStack_10,
               MethodInfo__System__Collections__Generic__List<MoveCubeFromCoarseToFine::ValidPos>__List__
              );
    iStack_11 = 0;
    if (scaleFactor != -1 && -1 < scaleFactor + 1) {
      do {
        iStack_12 = 0;
        do {
          z = 0;
          do {
            auStack_3 = (undefined1  [8])((ulonglong)auStack_3 & 0xffffffff);
            fStack_5 = (float)((uint)fStack_5 & 0xffff0000);
            MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
                      ((IntVector *)(auStack_3 + 4),iStack_11,iStack_12,z,(MethodInfo *)0x0);
            if ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_finished_or_no_cctor == 0) {
              func_?();
            }
            auVar13 = auStack_3;
            vector3.y = fVar6;
            vector3.x = fVar4;
            iV.z = fStack_5._0_2_;
            iV.x = auStack_3._4_2_;
            iV.y = auStack_3._6_2_;
            vector3.z = fVar2;
            auStack_3 = auVar13;
            pVVar14 = MVWorldObject.dll::MV::WorldObject::IntVector::IntVector_op_Multiply_2
                               ((Vector3 *)&stack0xffffffa8,iV,vector3,(MethodInfo *)0x0);
            fVar15 = pVVar14->z + fStack_9;
            puVar16 = &UNK_?;
            pMVar17 = TypeInfo__MoveCubeFromCoarseToFine__ValidPos;
            this = (MoveCubeFromCoarseToFine_ValidPos *)func_?();
            if (this == (MoveCubeFromCoarseToFine_ValidPos *)0x0) goto code_?;
            pos.y = (float)pMVar17;
            pos.x = (float)puVar16;
            pos.z = fVar15;
            MoveCubeFromCoarseToFine+ValidPos::MoveCubeFromCoarseToFine_ValidPos__ctor
                      (this,1,pos,(MethodInfo *)0x0);
            func_?(pLStack_10,this,
                            MethodInfo__System__Collections__Generic__List<MoveCubeFromCoarseToFine::ValidPos>__Add_MoveCubeFromCoarseToFine__ValidPos_
                           );
            z = z + 1;
            iVar18 = scaleFactor + 1;
          } while (z < iVar18);
          iStack_12 = iStack_12 + 1;
        } while (iStack_12 < iVar18);
        iStack_11 = iStack_11 + 1;
      } while (iStack_11 < iVar18);
    }
    return pLStack_10;
  }
code_?:
  func_?();
  pcVar19 = (code *)swi(3);
  pLVar20 = (List_1_MoveCubeFromCoarseToFine_ValidPos_ *)(*pcVar19)();
  return pLVar20;
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
  KStack_1.key._options = 0;
  KStack_1.key._cultureKey = (String *)0x0;
  KStack_1.key._pattern = (String *)0x0;
  KStack_1.value = (Object *)0x0;
  KStack_2.key._options = 0;
  KStack_2.key._cultureKey = (String *)0x0;
  KStack_2.key._pattern = (String *)0x0;
  KStack_2.value = (Object *)0x0;
  if ((from != (ICubeModel *)0x0) &&
     (this = (CubeBase *)
             func_?(2,TypeInfo__MV__WorldObject__ICubeModel,from,fromPos._0_4_,fromPos.z),
     this != (CubeBase *)0x0)) {
    pVStack_3 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_get_Corners
                           (this,(MethodInfo *)0x0);
    pVStack_4 = (Vector3__Array *)func_?(TypeInfo__UnityEngine__Vector3,4);
    pLVar5 = (List_1_UnityEngine_Plane_ *)
             func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::Plane>);
    if (pLVar5 != (List_1_UnityEngine_Plane_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
      LowLevelList_1_System_Object___ctor
                ((LowLevelList_1_System_Object_ *)pLVar5,
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
      uVar6 = 0;
      pFVar7 = TypeInfo__MV__WorldObject__CubeBase->static_fields->faceFlagsArray;
      if (pFVar7 != (FaceFlags__Enum__Array *)0x0) {
        do {
          if ((int)pFVar7->max_length <= (int)uVar6) {
            return pLVar5;
          }
          if (pFVar7->max_length <= uVar6) goto code_?;
          bVar8 = *(byte *)((int)pFVar7->vector + uVar6);
          if (((this->fields).unIndentedSides & bVar8) == 0) {
            if ((TypeInfo__MV__WorldObject__CubeBase->_1).cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__MV__WorldObject__CubeBase);
            }
            FStack_9 = MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_FaceFlagToFace
                                  (CONCAT22(in_stack_10,CONCAT11(fromPos.z._1_1_,bVar8)),
                                   (MethodInfo *)0x0);
            MVWorldObject.dll::MV::WorldObject::CubeBase::CubeBase_GetFace
                      (&pVStack_3,&pVStack_4,FStack_9,(MethodInfo *)0x0);
            if ((TypeInfo__MoveCubeFromCoarseToFine->_1).cctor_finished_or_no_cctor == 0) {
              RStack_11._pattern = (String *)TypeInfo__MoveCubeFromCoarseToFine;
              RStack_11._cultureKey = (String *)&UNK_?;
              func_?();
            }
            bVar12 = MoveCubeFromCoarseToFine_IsFaceIndented(FStack_9,&pVStack_4,(MethodInfo *)0x0);
            if (bVar12 != 0) {
              if (((pVStack_4 == (Vector3__Array *)0x0) ||
                  (func_?(&uStack_13,0), pVStack_4 == (Vector3__Array *)0x0)) ||
                 (func_?(&uStack_14,3), pVStack_4 == (Vector3__Array *)0x0)) break;
              func_?(&uStack_15,2);
              a_00.z = fStack_16;
              a_00.x = (float)(undefined4)uStack_13;
              a_00.y = (float)uStack_13._4_4_;
              b_00.z = fStack_17;
              b_00.x = (float)(undefined4)uStack_14;
              b_00.y = (float)uStack_14._4_4_;
              c_00.z = fStack_18;
              c_00.x = (float)(undefined4)uStack_15;
              c_00.y = (float)uStack_15._4_4_;
              UnityEngine.CoreModule.dll::UnityEngine::Plane::Plane__ctor_1
                        ((Plane *)&KStack_1,a_00,b_00,c_00,(MethodInfo *)0x0);
              if (((pVStack_4 == (Vector3__Array *)0x0) ||
                  (func_?(&uStack_19,2), pVStack_4 == (Vector3__Array *)0x0)) ||
                 (func_?(&uStack_20,1), pVStack_4 == (Vector3__Array *)0x0)) break;
              func_?(&uStack_21,0);
              a.z = fStack_22;
              a.x = (float)(undefined4)uStack_19;
              a.y = (float)uStack_19._4_4_;
              b.z = fStack_23;
              b.x = (float)(undefined4)uStack_20;
              b.y = (float)uStack_20._4_4_;
              c.z = fStack_24;
              c.x = (float)(undefined4)uStack_21;
              c.y = (float)uStack_21._4_4_;
              UnityEngine.CoreModule.dll::UnityEngine::Plane::Plane__ctor_1
                        ((Plane *)&KStack_2,a,b,c,(MethodInfo *)0x0);
              pRVar25 = mscorlib.dll::System::Collections::Generic::KeyValuePair`2[System::Text::
                        RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                        KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Key
                                  (&RStack_26,&KStack_1,(MethodInfo *)0x0);
              uStack_27._0_4_ = (float)pRVar25->_options;
              uStack_27._4_4_ = (float)pRVar25->_cultureKey;
              pSStack_28 = pRVar25->_pattern;
              pRVar25 = mscorlib.dll::System::Collections::Generic::KeyValuePair`2[System::Text::
                        RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                        KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Key
                                  (&RStack_29,&KStack_2,(MethodInfo *)0x0);
              uStack_30._0_4_ = pRVar25->_options;
              uStack_30._4_4_ = pRVar25->_cultureKey;
              pSStack_31 = pRVar25->_pattern;
              if ((uStack_27._4_4_ - (float)uStack_30._4_4_) *
                  (uStack_27._4_4_ - (float)uStack_30._4_4_) +
                  ((float)uStack_27 - (float)(undefined4)uStack_30) *
                  ((float)uStack_27 - (float)(undefined4)uStack_30) +
                  ((float)pSStack_28 - (float)pSStack_31) * ((float)pSStack_28 - (float)pSStack_31)
                  == 0.0) {
                pRVar25 = mscorlib.dll::System::Collections::Generic::KeyValuePair`2[System::Text::
                          RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                          KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Key
                                    (&RStack_11,&KStack_1,(MethodInfo *)0x0);
                uStack_32._0_4_ = pRVar25->_options;
                uStack_32._4_4_ = pRVar25->_cultureKey;
                pSStack_33 = pRVar25->_pattern;
                fVar34 = (float)uStack_32._4_4_ * (float)uStack_32._4_4_ +
                         (float)(undefined4)uStack_32 * (float)(undefined4)uStack_32 +
                         (float)pSStack_33 * (float)pSStack_33;
                iVar35 = KStack_1.key._options;
                pSVar36 = KStack_1.key._cultureKey;
                pSVar37 = KStack_1.key._pattern;
                pOVar38 = KStack_1.value;
              }
              else {
                pRVar25 = mscorlib.dll::System::Collections::Generic::KeyValuePair`2[System::Text::
                          RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                          KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Key
                                    (&RStack_39,&KStack_1,(MethodInfo *)0x0);
                uStack_32._0_4_ = pRVar25->_options;
                uStack_32._4_4_ = pRVar25->_cultureKey;
                pSStack_33 = pRVar25->_pattern;
                if ((float)uStack_32._4_4_ * (float)uStack_32._4_4_ +
                    (float)(undefined4)uStack_32 * (float)(undefined4)uStack_32 +
                    (float)pSStack_33 * (float)pSStack_33 != 0.0) {
                  func_?(pLVar5,KStack_1.key._options,KStack_1.key._cultureKey,
                                  KStack_1.key._pattern,KStack_1.value,
                                  MethodInfo__System__Collections__Generic__List<UnityEngine::Plane>__Add_UnityEngine__Plane_
                                 );
                }
                pRVar25 = mscorlib.dll::System::Collections::Generic::KeyValuePair`2[System::Text::
                          RegularExpressions::Regex+CachedCodeEntryKey,System::Object]::
                          KeyValuePair_2_System_Text_RegularExpressions_Regex_CachedCodeEntryKey_System_Object__get_Key
                                    (&RStack_40,&KStack_2,(MethodInfo *)0x0);
                uStack_32._0_4_ = pRVar25->_options;
                uStack_32._4_4_ = pRVar25->_cultureKey;
                pSStack_33 = pRVar25->_pattern;
                fVar34 = (float)uStack_32._4_4_ * (float)uStack_32._4_4_ +
                         (float)(undefined4)uStack_32 * (float)(undefined4)uStack_32 +
                         (float)pSStack_33 * (float)pSStack_33;
                iVar35 = KStack_2.key._options;
                pSVar36 = KStack_2.key._cultureKey;
                pSVar37 = KStack_2.key._pattern;
                pOVar38 = KStack_2.value;
              }
              if (fVar34 != 0.0) {
                func_?(pLVar5,iVar35,pSVar36,pSVar37,pOVar38,
                                MethodInfo__System__Collections__Generic__List<UnityEngine::Plane>__Add_UnityEngine__Plane_
                               );
              }
            }
          }
          uVar6 = uVar6 + 1;
        } while( true );
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar41 = (code *)swi(3);
  pLVar5 = (List_1_UnityEngine_Plane_ *)(*pcVar41)();
  return pLVar5;
}


/* List`1[MV.WorldObject.IntVector] GetValidCubes(List`1[MoveCubeFromCoarseToFine+ValidPos], Int32)
    */

List_1_MV_WorldObject_IntVector_ *
Assembly-CSharp.dll::MoveCubeFromCoarseToFine::MoveCubeFromCoarseToFine_GetValidCubes
          (List_1_MoveCubeFromCoarseToFine_ValidPos_ *validPoses,int32_t scaleFactor,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(0x2574);
    func_?(0x7c54);
    func_?(0x7c28);
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
  uStack_2._4_4_ =
       (List_1_MV_WorldObject_IntVector_ *)
       func_?((short)
                       TypeInfo__System__Collections__Generic__List<MV::WorldObject::IntVector>);
  if (uStack_2._4_4_ == (List_1_MV_WorldObject_IntVector_ *)0x0) {
code_?:
    func_?();
    pcVar3 = (code *)swi(3);
    pLVar4 = (List_1_MV_WorldObject_IntVector_ *)(*pcVar3)();
    return pLVar4;
  }
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
  LowLevelList_1_System_Object___ctor
            ((LowLevelList_1_System_Object_ *)uStack_2._4_4_,
             MethodInfo__System__Collections__Generic__List<MV::WorldObject::IntVector>__List__);
  iStack_5 = 0;
  if (0 < scaleFactor) {
    do {
      iStack_6 = 0;
      do {
        pMStack_7 = (MethodInfo *)0x0;
        do {
          uVar8 = (undefined2)((uint)iStack_5 >> 0x10);
          method_00 = pMStack_7;
          MVWorldObject.dll::MV::WorldObject::IntVector::IntVector__ctor_1
                    (&IStack_1,iStack_5,iStack_6,(int32_t)pMStack_7,(MethodInfo *)0x0);
          if ((TypeInfo__MoveCubeFromCoarseToFine->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          pIVar9 = TypeInfo__MoveCubeFromCoarseToFine->static_fields->intCubeCorners;
          iVar10 = 0;
          if (pIVar9 == (IntVector__Array *)0x0) goto code_?;
          for (; uVar11 = (undefined2)((uint)method_00 >> 0x10), iVar10 < (int)pIVar9->max_length;
              iVar10 = iVar10 + 1) {
            func_?();
            uStack_2._0_2_ = IStack_1.x;
            uStack_2._2_2_ = IStack_1.y;
            iStack_12 = IStack_1.z;
            if ((TypeInfo__MV__WorldObject__IntVector->_1).cctor_finished_or_no_cctor == 0) {
              uVar11 = 0x102b;
              func_?(TypeInfo__MV__WorldObject__IntVector);
            }
            method_00 = (MethodInfo *)CONCAT22(uVar11,uStack_13);
            IVar14.z = (int16_t)(undefined4)uStack_2;
            IVar14._0_4_ = &pLStack_15;
            i2.y = uVar8;
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
            if (*(char *)((int)RVar18 + 8) == '\0') goto code_?;
          }
          pLStack_15 = uStack_2._4_4_;
          func_?();
code_?:
          pMStack_7 = (MethodInfo *)((int)&pMStack_7->methodPointer + 1);
        } while ((int)pMStack_7 < scaleFactor);
        iStack_6 = iStack_6 + 1;
      } while (iStack_6 < scaleFactor);
      iStack_5 = iStack_5 + 1;
    } while (iStack_5 < scaleFactor);
  }
  return uStack_2._4_4_;
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
  cVar5 = '\0';
  if (pVVar4 == (Vector3__Array *)0x0) {
    func_?();
  }
  else {
    pVVar6 = pVVar4->vector;
    while( true ) {
      if ((int)pVVar4->max_length <= (int)uVar3) {
        return 0;
      }
      cVar5 = uVar3 < pVVar4->max_length;
      if (!(bool)cVar5) break;
      VStack_7.z = pVVar6->z;
      VStack_7.x = pVVar6->x;
      VStack_7.y = pVVar6->y;
      fVar8 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_Item
                         (&VStack_7,iStack_1,(MethodInfo *)0x0);
      if (cRam_? == '\0') {
        VStack_7.x = (float)&TypeInfo__UnityEngine__Mathf;
        func_?();
        cRam_? = '\x01';
      }
      fVar9 = (float)((uint)fVar8 & _UNK_?);
      if ((float)((uint)fVar8 & _UNK_?) <= (float)((uint)fStack_2 & _UNK_?)) {
        fVar9 = (float)((uint)fStack_2 & _UNK_?);
      }
      fVar10 = TypeInfo__UnityEngine__Mathf->static_fields->Epsilon * _UNK_?;
      fVar11 = fVar9 * _UNK_?;
      if (fVar9 * _UNK_? <= fVar10) {
        fVar11 = fVar10;
      }
      if (fVar11 <= (float)((uint)(fStack_2 - fVar8) & _UNK_?)) {
        return 1;
      }
      uVar3 = uVar3 + 1;
      pVVar6 = pVVar6 + 1;
    }
  }
  func_?();
  LOCK();
  *(undefined1 **)(extraout_ECX + 0x2b) = &stack0xfffffffc;
  UNLOCK();
  *(char *)(uVar3 + 0xa2102b69) = *(char *)(uVar3 + 0xa2102b69) + (char)extraout_ECX + cVar5;
  iVar12 = (int)((longlong)*unaff_EBX * 0x2b69b610);
  pcVar13 = (char *)(iVar12 + -0x35efd497);
  *pcVar13 = *pcVar13 + (char)((uint)unaff_EBX >> 8) +
            ((longlong)iVar12 != (longlong)*unaff_EBX * 0x2b69b610);
  pcVar14 = (code *)swi(3);
  bVar15 = (*pcVar14)();
  return bVar15;
}


/* Void MoveCube(ICubeModel, ICubeModel, IntVector) */

void Assembly-CSharp.dll::MoveCubeFromCoarseToFine::MoveCubeFromCoarseToFine_MoveCube
               (ICubeModel *from,ICubeModel *to,IntVector fromPos,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__WorldObject__ICubeModel);
    func_?(0x67c0);
    cRam_? = '\x01';
  }
  if (from != (ICubeModel *)0x0) {
    iVar1 = func_?(2,TypeInfo__MV__WorldObject__ICubeModel,from,fromPos.x,fromPos.z);
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
  puStack_4 = &stack0xffffff70;
  puVar5 = &stack0xffffff70;
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
  LStack_6._current.y = 0.0;
  LStack_6._current.z = 0.0;
  LStack_6._current.w = 0.0;
  LStack_6._list = (List_1_UnityEngine_Vector4_ *)0x0;
  LStack_6._index = 0;
  LStack_6._version = 0;
  LStack_6._current.x = 0.0;
  PStack_7.m_Normal.x = 0.0;
  PStack_7.m_Normal.y = 0.0;
  PStack_7.m_Normal.z = 0.0;
  PStack_7.m_Distance = 0.0;
  LStack_8._list = (List_1_System_Object_ *)0x0;
  LStack_8._index = 0;
  LStack_8._version = 0;
  LStack_8._current = (Object *)0x0;
  if (testPlanes != (List_1_UnityEngine_Plane_ *)0x0) {
    method_01 = MethodInfo__System__Collections__Generic__List<UnityEngine::Plane>__GetEnumerator__;
    pLVar9 = mscorlib.dll::System::Collections::Generic::List`1[AdIntegration::InHouse::
             PromotionLooksData+LooksData]::
             List_1_AdIntegration_InHouse_PromotionLooksData_LooksData__GetEnumerator
                       (&LStack_10,
                        (List_1_AdIntegration_InHouse_PromotionLooksData_LooksData_ *)testPlanes,
                        MethodInfo__System__Collections__Generic__List<UnityEngine::Plane>__GetEnumerator__
                       );
    uStack_11 = 0;
    LStack_6._list = (List_1_UnityEngine_Vector4_ *)pLVar9->_list;
    LStack_6._index = pLVar9->_index;
    LStack_6._version = pLVar9->_version;
    LStack_6._current.x = (float)(pLVar9->_current).promotionImage;
    LStack_6._current._4_8_ = *(undefined8 *)&(pLVar9->_current).promotionText;
    LStack_6._current.w = (float)(pLVar9->_current).promotionActionType;
    pLStack_12 = &LStack_6;
    uStack_1 = 0;
    while( true ) {
      uStack_1._0_1_ = 1;
      bVar13 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[UnityEngine::Vector4]
              ::List_1_T_Enumerator_UnityEngine_Vector4__MoveNext
                        (&LStack_6,
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Plane>__MoveNext__
                        );
      if (bVar13 == 0) {
        uStack_1 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                  ((Object *)pLStack_12,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<UnityEngine::Plane>__Dispose__
                   ,method_01);
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      PStack_7.m_Normal.x = LStack_6._current.x;
      PStack_7.m_Normal.y = LStack_6._current.y;
      PStack_7.m_Normal.z = LStack_6._current.z;
      PStack_7.m_Distance = LStack_6._current.w;
      if (validPoses == (List_1_MoveCubeFromCoarseToFine_ValidPos_ *)0x0) break;
      method_00 = (MethodInfo *)&UNK_?;
      pLVar14 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
               RegexCharClass+SingleRange]::
               List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                         ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                           *)&LStack_10._current,
                          (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                          validPoses,
                          MethodInfo__System__Collections__Generic__List<MoveCubeFromCoarseToFine::ValidPos>__GetEnumerator__
                         );
      uStack_15 = 0;
      LStack_8._list = (List_1_System_Object_ *)pLVar14->_list;
      LStack_8._index = pLVar14->_index;
      LStack_8._version = pLVar14->_version;
      LStack_8._current = *(Object **)&pLVar14->_current;
      uStack_1._0_1_ = 3;
      pLStack_16 = &LStack_8;
      while( true ) {
        bVar13 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                List_1_T_Enumerator_System_Object__MoveNext
                          (&LStack_8,
                           MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MoveCubeFromCoarseToFine::ValidPos>__MoveNext__
                          );
        pOVar17 = LStack_8._current;
        if (bVar13 == 0) break;
        if ((RegexCharClass_SingleRange)LStack_8._current == (RegexCharClass_SingleRange)0x0)
        goto code_?;
        if (*(char *)((int)LStack_8._current + 8) != '\0') {
          fVar18 = UnityEngine.CoreModule.dll::UnityEngine::Plane::Plane_GetDistanceToPoint
                            (&PStack_7,*(Vector3 *)((int)LStack_8._current + 0xc),
                             (MethodInfo *)0x0);
          if (_UNK_? <= fVar18) {
            if ((RegexCharClass_SingleRange)pOVar17 == (RegexCharClass_SingleRange)0x0)
            goto code_?;
            *(undefined1 *)((int)pOVar17 + 8) = 0;
          }
        }
      }
      uStack_1 = CONCAT31(uStack_1._1_3_,1);
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_23
                ((Object *)&LStack_8,
                 (ExceptionArgument__Enum)
                 MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MoveCubeFromCoarseToFine::ValidPos>__Dispose__
                 ,method_00);
    }
  }
code_?:
  uVar19 = func_?();
  func_?(uVar19);
  pcVar20 = (code *)swi(3);
  (*pcVar20)();
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

