
/* Void AddMovable(MVMovable, Boolean) */

void Assembly-CSharp.dll::MoveableController::MoveableController_AddMovable
               (MoveableController *this,MVMovable *movable,bool isInventoryPreviewMovable,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_UnityEngine::Vector3>__Add_int__UnityEngine__Vector3_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovable>__Add_int__MVMovable_
                   );
    func_?(&StringLiteral__without_a_cube_model);
    func_?(&StringLiteral__MoveableController__trying_add_);
    cRam_? = '\x01';
  }
  if (movable != (MVMovable *)0x0) {
    this_00 = (this->fields).Velocities;
    if (this_00 != (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::Vector3]::
      Dictionary_2_System_Int32_UnityEngine_Vector3__Add
                (this_00,(movable->fields)._._._.goId,(movable->fields).velocity,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_UnityEngine::Vector3>__Add_int__UnityEngine__Vector3_
                );
      pDVar1 = (this->fields).MoveControllers;
      if (pDVar1 != (Dictionary_2_System_Int32_MVMovable_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
        Dictionary_2_System_Int32_System_Object__Add
                  ((Dictionary_2_System_Int32_System_Object_ *)pDVar1,(movable->fields)._._._.goId,
                   (Object *)movable,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovable>__Add_int__MVMovable_
                  );
        if (isInventoryPreviewMovable == 0) {
          if ((movable->fields)._CubeModel_k__BackingField != (MVCubeModelInstance *)0x0) {
            pMVar2 = (movable->fields)._CubeModel_k__BackingField;
            if ((pMVar2 != (MVCubeModelInstance *)0x0) &&
               (pDVar1 = (this->fields).CubeModelMovableMap,
               pDVar1 != (Dictionary_2_System_Int32_MVMovable_ *)0x0)) {
              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]
              ::Dictionary_2_System_Int32_System_Object__Add
                        ((Dictionary_2_System_Int32_System_Object_ *)pDVar1,
                         (pMVar2->fields)._._._.id,(Object *)movable,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovable>__Add_int__MVMovable_
                        );
              return;
            }
            goto code_?;
          }
          pSVar3 = mscorlib.dll::System::Int32::Int32_ToString
                             ((Int32 *)&stack0xfffffff8,(MethodInfo *)0x0);
          pSVar3 = mscorlib.dll::System::String::String_Concat_4
                             (StringLiteral__MoveableController__trying_add_,pSVar3,
                              StringLiteral__without_a_cube_model,(MethodInfo *)0x0);
          if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
            func_?();
          }
          UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                    ((Object *)pSVar3,(MethodInfo *)0x0);
        }
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Quaternion GetRotationQuat(Int32) */

Quaternion *
Assembly-CSharp.dll::MoveableController::MoveableController_GetRotationQuat
          (Quaternion *__return_storage_ptr__,MoveableController *this,int32_t movableGameObjectID,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).MoveControllers;
  if (pDVar1 != (Dictionary_2_System_Int32_MVMovable_ *)0x0) {
    pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]
             ::Dictionary_2_System_Int32_System_Object__get_Item
                       ((Dictionary_2_System_Int32_System_Object_ *)pDVar1,movableGameObjectID,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovable>__get_Item_int_
                       );
    if (pOVar2 != (Object *)0x0) {
      if (pOVar2[0x22].klass == (Object__Class *)0x0) {
        if (cRam_? == '\0') {
          func_?();
          cRam_? = '\x01';
        }
        pQVar3 = TypeInfo__UnityEngine__Quaternion->static_fields;
        fVar4 = (pQVar3->identityQuaternion).y;
        fVar5 = (pQVar3->identityQuaternion).z;
        fVar6 = (pQVar3->identityQuaternion).w;
        __return_storage_ptr__->x = (pQVar3->identityQuaternion).x;
        __return_storage_ptr__->y = fVar4;
        __return_storage_ptr__->z = fVar5;
        __return_storage_ptr__->w = fVar6;
        return __return_storage_ptr__;
      }
      pDVar1 = (this->fields).MoveControllers;
      if (pDVar1 != (Dictionary_2_System_Int32_MVMovable_ *)0x0) {
        pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                 Object]::Dictionary_2_System_Int32_System_Object__get_Item
                           ((Dictionary_2_System_Int32_System_Object_ *)pDVar1,movableGameObjectID,
                            MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovable>__get_Item_int_
                           );
        if ((pOVar2 != (Object *)0x0) && (pOVar2[0x12].klass != (Object__Class *)0x0)) {
          pQVar7 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                             ((Quaternion *)&stack0xffffffcc,(Transform *)pOVar2[0x12].klass,
                              (MethodInfo *)0x0);
          fVar4 = pQVar7->x;
          fVar5 = pQVar7->y;
          fVar6 = pQVar7->z;
          pDVar1 = (this->fields).MoveControllers;
          if (pDVar1 != (Dictionary_2_System_Int32_MVMovable_ *)0x0) {
            puVar8 = &UNK_?;
            pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                     Object]::Dictionary_2_System_Int32_System_Object__get_Item
                               ((Dictionary_2_System_Int32_System_Object_ *)pDVar1,
                                movableGameObjectID,
                                MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovable>__get_Item_int_
                               );
            if (pOVar2 != (Object *)0x0) {
              pOVar9 = pOVar2[0x28].klass;
              fStack_10 = (float)((ulonglong)*(undefined8 *)&pOVar2[0x26].monitor >> 0x20);
              rotation.y = fVar5;
              rotation.x = fVar4;
              rotation.z = fVar6;
              rotation.w = (float)puVar8;
              point.y = fStack_10 * (float)pOVar9;
              point.x = (float)*(undefined8 *)&pOVar2[0x26].monitor * (float)pOVar9;
              point.z = (float)pOVar2[0x27].monitor * (float)pOVar9;
              UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                        ((Vector3 *)&stack0xffffffd0,rotation,point,(MethodInfo *)0x0);
              pDVar1 = (this->fields).MoveControllers;
              if (pDVar1 != (Dictionary_2_System_Int32_MVMovable_ *)0x0) {
                pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                         Int32,System::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                   ((Dictionary_2_System_Int32_System_Object_ *)pDVar1,
                                    movableGameObjectID,
                                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovable>__get_Item_int_
                                   );
                if (pOVar2 != (Object *)0x0) {
                  fVar11 = (float10)func_?();
                  UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                            ((MethodInfo *)0x0);
                  pVVar12 = (Vector3 *)func_?();
                  pQVar7 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_AngleAxis
                                     ((Quaternion *)&stack0xffffffcc,
                                      (float)fVar11 * _UNK_? * 3.5268797e-29,*pVVar12,
                                      (MethodInfo *)0x0);
                  fVar4 = pQVar7->x;
                  fVar5 = pQVar7->y;
                  fVar6 = pQVar7->z;
                  fVar13 = pQVar7->w;
                  pDVar1 = (this->fields).MoveControllers;
                  if (pDVar1 != (Dictionary_2_System_Int32_MVMovable_ *)0x0) {
                    fVar14 = fVar4;
                    fVar15 = fVar5;
                    fVar16 = fVar6;
                    fVar17 = fVar13;
                    pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                             Int32,System::Object]::
                             Dictionary_2_System_Int32_System_Object__get_Item
                                       ((Dictionary_2_System_Int32_System_Object_ *)pDVar1,
                                        movableGameObjectID,
                                        MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovable>__get_Item_int_
                                       );
                    if (pOVar2 != (Object *)0x0) {
                      if (pOVar2[0x29].monitor == (MonitorData *)0x0) {
                        __return_storage_ptr__->x = fVar14;
                        __return_storage_ptr__->y = fVar15;
                        __return_storage_ptr__->z = fVar16;
                        __return_storage_ptr__->w = fVar17;
                        return __return_storage_ptr__;
                      }
                      pDVar1 = (this->fields).MoveControllers;
                      if (pDVar1 != (Dictionary_2_System_Int32_MVMovable_ *)0x0) {
                        pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                                 Int32,System::Object]::
                                 Dictionary_2_System_Int32_System_Object__get_Item
                                           ((Dictionary_2_System_Int32_System_Object_ *)pDVar1,
                                            movableGameObjectID,
                                            MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovable>__get_Item_int_
                                           );
                        if ((pOVar2 != (Object *)0x0) &&
                           (pOVar2[0x29].monitor != (MonitorData *)0x0)) {
                          pQVar7 = MoveableController_GetRotationQuat
                                             ((Quaternion *)&stack0xffffffec,this,
                                              *(int32_t *)(pOVar2[0x29].monitor + 0x80),
                                              (MethodInfo *)0x0);
                          fVar15 = pQVar7->x;
                          fVar16 = pQVar7->y;
                          fVar17 = pQVar7->z;
                          fVar18 = pQVar7->w;
                          fVar19 = pQVar7->x;
                          fVar14 = pQVar7->x;
                          __return_storage_ptr__->x =
                               (fVar13 * fVar15 + fVar4 * fVar18 + fVar6 * fVar16) -
                               fVar5 * fVar17;
                          __return_storage_ptr__->y =
                               (fVar13 * fVar16 + fVar5 * fVar18 + fVar4 * fVar17) - fVar6 * fVar19
                          ;
                          __return_storage_ptr__->z =
                               (fVar13 * fVar17 + fVar6 * fVar18 + fVar5 * fVar14) -
                               fVar4 * fVar16;
                          __return_storage_ptr__->w =
                               ((fVar13 * fVar18 - fVar4 * fVar15) - fVar5 * fVar16) -
                               fVar6 * fVar17;
                          return __return_storage_ptr__;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar20 = (code *)swi(3);
  pQVar7 = (Quaternion *)(*pcVar20)();
  return pQVar7;
}


/* Vector3 GetVel(Int32, Vector3) */

Vector3 * Assembly-CSharp.dll::MoveableController::MoveableController_GetVel
                    (Vector3 *__return_storage_ptr__,MoveableController *this,
                    int32_t movableGameObjectID,Vector3 position,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovable>__TryGetValue_int__MVMovable__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_UnityEngine::Vector3>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  pOStack_1 = (Object *)0x0;
  this_00 = (this->fields).MoveControllers;
  if (this_00 != (Dictionary_2_System_Int32_MVMovable_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
    Dictionary_2_System_Int32_System_Object__TryGetValue
              ((Dictionary_2_System_Int32_System_Object_ *)this_00,movableGameObjectID,&pOStack_1,
               MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovable>__TryGetValue_int__MVMovable__
              );
    if (pOStack_1 == (Object *)0x0) {
      if (cRam_? == '\0') {
        func_?(&TypeInfo__UnityEngine__Vector3);
        cRam_? = '\x01';
      }
      pVVar2 = TypeInfo__UnityEngine__Vector3->static_fields;
      fVar3 = (pVVar2->zeroVector).y;
      fVar4 = (pVVar2->zeroVector).z;
      __return_storage_ptr__->x = (pVVar2->zeroVector).x;
      __return_storage_ptr__->y = fVar3;
      __return_storage_ptr__->z = fVar4;
      return __return_storage_ptr__;
    }
    pOVar5 = pOStack_1[0x22].klass;
    if (pOVar5 != (Object__Class *)0x0) {
      pIVar6 = (pOVar5->_0).image;
      puVar7 = (undefined8 *)(**(code **)&pIVar6[8].dynamic)(&VStack_8,pOVar5,pIVar6[9].name);
      uVar9 = *puVar7;
      fStack_10 = *(float *)(puVar7 + 1);
      uStack_11._0_4_ = (float)uVar9;
      fStack_12 = position.x - (float)uStack_11;
      uStack_11._4_4_ = (float)((ulonglong)uVar9 >> 0x20);
      fStack_13 = position.y - uStack_11._4_4_;
      VStack_8.z = position.z - fStack_10;
      uStack_11 = uVar9;
      fStack_14 = VStack_8.z;
      pQVar15 = MoveableController_GetRotationQuat
                          (&QStack_16,this,movableGameObjectID,(MethodInfo *)0x0);
      point.y = fStack_13;
      point.x = fStack_12;
      point.z = VStack_8.z;
      pVVar17 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                          (&VStack_8,*pQVar15,point,(MethodInfo *)0x0);
      uStack_11._0_4_ = pVVar17->x;
      uStack_11._4_4_ = pVVar17->y;
      fStack_10 = pVVar17->z;
      this_01 = (this->fields).Velocities;
      if (this_01 != (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0) {
        pVVar17 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine
                  ::Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__get_Item
                            ((Vector3 *)&QStack_16,this_01,movableGameObjectID,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_UnityEngine::Vector3>__get_Item_int_
                            );
        uVar18 = pVVar17->x;
        uVar19 = pVVar17->y;
        fStack_10 = fStack_10 - fStack_14;
        fStack_20 = (float)uVar18 + ((float)uStack_11 - fStack_12);
        fStack_14 = (float)uVar19 + (uStack_11._4_4_ - fStack_13);
        VStack_8.z = pVVar17->z + fStack_10;
        uStack_11 = 0;
        fStack_10 = 0.0;
        VStack_8.y = fStack_14;
        VStack_8.x = fStack_20;
        fStack_13 = VStack_8.z;
        if (pOStack_1 != (Object *)0x0) {
          if (pOStack_1[0x29].monitor == (MonitorData *)0x0) {
code_?:
            __return_storage_ptr__->x = VStack_8.x;
            __return_storage_ptr__->y = VStack_8.y;
            __return_storage_ptr__->z = VStack_8.z;
            return __return_storage_ptr__;
          }
          if ((pOStack_1[0x29].monitor != (MonitorData *)0x0) &&
             (iVar21 = *(int *)(pOStack_1[0x29].monitor + 0x110), iVar21 != 0)) {
            pOVar5 = pOStack_1[0x22].klass;
            movableGameObjectID_00 = *(int32_t *)(iVar21 + 8);
            if (pOVar5 != (Object__Class *)0x0) {
              pIVar6 = (pOVar5->_0).image;
              pVVar17 = (Vector3 *)(**(code **)&pIVar6[8].dynamic)(&QStack_16,pOVar5,pIVar6[9].name)
              ;
              pVVar17 = MoveableController_GetVel
                                  ((Vector3 *)&QStack_16,this,movableGameObjectID_00,*pVVar17,
                                   (MethodInfo *)0x0);
              uVar22 = pVVar17->x;
              uVar23 = pVVar17->y;
              VStack_8.z = fStack_13 + pVVar17->z;
              VStack_8.x = fStack_20 + (float)uVar22;
              VStack_8.y = fStack_14 + (float)uVar23;
              goto code_?;
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar24 = (code *)swi(3);
  pVVar17 = (Vector3 *)(*pcVar24)();
  return pVVar17;
}


/* Void RemoveMovable(MVMovable) */

void Assembly-CSharp.dll::MoveableController::MoveableController_RemoveMovable
               (MoveableController *this,MVMovable *movable,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_UnityEngine::Vector3>__Remove_int_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovable>__Remove_int_
                   );
    cRam_? = '\x01';
  }
  if (movable != (MVMovable *)0x0) {
    pDVar1 = (this->fields).MoveControllers;
    if (pDVar1 != (Dictionary_2_System_Int32_MVMovable_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
      Dictionary_2_System_Int32_System_Object__Remove
                ((Dictionary_2_System_Int32_System_Object_ *)pDVar1,(movable->fields)._._._.goId,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovable>__Remove_int_);
      this_00 = (this->fields).Velocities;
      if (this_00 != (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::Vector3]
        ::Dictionary_2_System_Int32_UnityEngine_Vector3__Remove
                  (this_00,(movable->fields)._._._.goId,
                   MethodInfo__System__Collections__Generic__Dictionary<int,_UnityEngine::Vector3>__Remove_int_
                  );
        if ((movable->fields)._CubeModel_k__BackingField != (MVCubeModelInstance *)0x0) {
          pDVar1 = (this->fields).CubeModelMovableMap;
          if (pDVar1 == (Dictionary_2_System_Int32_MVMovable_ *)0x0) goto code_?;
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
          Dictionary_2_System_Int32_System_Object__Remove
                    ((Dictionary_2_System_Int32_System_Object_ *)pDVar1,
                     (((movable->fields)._CubeModel_k__BackingField)->fields)._._._.id,
                     MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovable>__Remove_int_
                    );
        }
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void ResetMoveables() */

void Assembly-CSharp.dll::MoveableController::MoveableController_ResetMoveables
               (MoveableController *this,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  puStack_4 = &stack0xffffffbc;
  puVar5 = &stack0xffffffbc;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovable>__get_Values__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVMovable>__Dispose__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVMovable>__MoveNext__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVMovable>__get_Current__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVMovable>__GetEnumerator__
                   );
    cRam_? = '\x01';
    puVar5 = puStack_4;
  }
  puStack_4 = puVar5;
  DStack_6._dictionary = (Dictionary_2_System_UInt32_System_Object_ *)0x0;
  DStack_6._index = 0;
  DStack_6._version = 0;
  DStack_6._currentValue = (Object *)0x0;
  this_00 = (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
             *)(this->fields).MoveControllers;
  if (this_00 !=
      (Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
       *)0x0) {
    method_00 = (MethodInfo *)&UNK_?;
    this_02 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
              StyleSheets::StyleSheetCache+SheetHandleKey,System::Object]::
              Dictionary_2_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__get_Values
                        (this_00,
                         MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovable>__get_Values__
                        );
    if (this_02 !=
        (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
         *)0x0) {
      pDVar7 = mscorlib.dll::System::Collections::Generic::
               Dictionary`2[TKey,TValue]+ValueCollection[UnityEngine::UIElements::StyleSheets::
               StyleSheetCache+SheetHandleKey,System::Object]::
               Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object__GetEnumerator
                         ((Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_UnityEngine_UIElements_StyleSheets_StyleSheetCache_SheetHandleKey_System_Object_
                           *)auStack_8,this_02,
                          MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVMovable>__GetEnumerator__
                         );
      DStack_6._dictionary = (Dictionary_2_System_UInt32_System_Object_ *)pDVar7->_dictionary;
      DStack_6._index = pDVar7->_index;
      DStack_6._version = pDVar7->_version;
      DStack_6._currentValue = pDVar7->_currentValue;
      auStack_8._8_8_ = ZEXT48(&DStack_6) << 0x20;
      uStack_1 = 1;
      while( true ) {
        bVar9 = mscorlib.dll::System::Collections::Generic::
                Dictionary`2[TKey,TValue]+ValueCollection[TKey,TValue]+Enumerator[System::
                UInt32,System::Object]::
                Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enumerator_System_UInt32_System_Object__MoveNext
                          (&DStack_6,
                           MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVMovable>__MoveNext__
                          );
        if (bVar9 == 0) break;
        if (DStack_6._currentValue == (Object *)0x0) goto code_?;
        (*(code *)(DStack_6._currentValue)->klass[1]._1.cctor_finished_or_no_cctor)
                  (DStack_6._currentValue,(DStack_6._currentValue)->klass[1]._1.cctor_thread);
      }
      uStack_1 = 0xffffffff;
      mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                ((Object *)&DStack_6,
                 (ExceptionArgument__Enum)
                 MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVMovable>__Dispose__
                 ,method_00);
      uStack_1 = 0xffffffff;
      pMVar10 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if ((pMVar10 != (MVNetworkGame *)0x0) &&
         (this_01 = (pMVar10->fields)._Peer_k__BackingField, this_01 != (PhotonPeer *)0x0)) {
        iVar11 = Photon3Unity3D.dll::ExitGames::Client::Photon::PhotonPeer::
                PhotonPeer_get_ServerTimeInMilliSeconds(this_01,(MethodInfo *)0x0);
        if (iVar11 < 0) {
          iVar11 = iVar11 + -2;
        }
        auStack_8._8_8_ =
             (undefined8)
             ((float)((double)iVar11 + *(double *)(&UNK_? + (iVar11 >> 0x1f) * -8)) /
             _UNK_?);
        fVar12 = (float10)func_?();
        (this->fields).time = (float)fVar12;
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
    }
  }
code_?:
  uVar13 = func_?();
  func_?(uVar13);
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void SyncTimeToServer() */

void Assembly-CSharp.dll::MoveableController::MoveableController_SyncTimeToServer
               (MoveableController *this,MethodInfo *method)

{
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar1 != (MVNetworkGame *)0x0) &&
     (this_00 = (pMVar1->fields)._Peer_k__BackingField, this_00 != (PhotonPeer *)0x0)) {
    Photon3Unity3D.dll::ExitGames::Client::Photon::PhotonPeer::
    PhotonPeer_get_ServerTimeInMilliSeconds(this_00,(MethodInfo *)0x0);
    fVar2 = (float10)func_?();
    (this->fields).time = (float)fVar2;
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void UpdateControllerFixedUpdate() */

void Assembly-CSharp.dll::MoveableController::MoveableController_UpdateControllerFixedUpdate
               (MoveableController *this,MethodInfo *method)

{
  MoveableController_UpdateMoveables(this,1.0,(MethodInfo *)0x0);
  return;
}


/* Void UpdateMoveable(Int32, Single, Int32) */

void Assembly-CSharp.dll::MoveableController::MoveableController_UpdateMoveable
               (MoveableController *this,int32_t movableGameObjectID,float directionFactor,
               int32_t breakid,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).MoveControllers;
  if (this_00 != (Dictionary_2_System_Int32_MVMovable_ *)0x0) {
    pMVar1 = (MVMovable *)
             mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]
             ::Dictionary_2_System_Int32_System_Object__get_Item
                       ((Dictionary_2_System_Int32_System_Object_ *)this_00,movableGameObjectID,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovable>__get_Item_int_
                       );
    if (pMVar1 != (MVMovable *)0x0) {
      if ((pMVar1->fields).parentMover == (MVMovable *)0x0) {
        MVMovable::MVMovable_Move(pMVar1,directionFactor,breakid,(MethodInfo *)0x0);
        return;
      }
      pMVar1 = (pMVar1->fields).parentMover;
      if (pMVar1 != (MVMovable *)0x0) {
        MVMovable::MVMovable_UpdateMoverSubTree(pMVar1,directionFactor,breakid,(MethodInfo *)0x0);
        return;
      }
    }
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void UpdateMoveables(Single) */

void Assembly-CSharp.dll::MoveableController::MoveableController_UpdateMoveables
               (MoveableController *this,float directionFactor,MethodInfo *method)

{
  uStack_1 = 0xffffffff;
  puStack_2 = &DAT_?;
  uStack_3 = *unaff_FS_OFFSET;
  *unaff_FS_OFFSET = &uStack_3;
  if (cRam_? == '\0') {
    func_?(&
                    System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_MVMovable>_>_MethodInfo__System__Linq__Enumerable__Where<System::Collections::Generic::KeyValuePair<int,_MVMovable>_>_System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_MVMovable>_>__System__Func<System::Collections::Generic::KeyValuePair<int,_MVMovable>,_bool>_
                   );
    func_?(&
                    TypeInfo__System__Func<System::Collections::Generic::KeyValuePair<int,_MVMovable>,_bool>
                   );
    func_?(&TypeInfo__System__IDisposable);
    func_?(&
                    TypeInfo__System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_MVMovable>_>
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__IEnumerator<System::Collections::Generic::KeyValuePair<int,_MVMovable>_>
                   );
    func_?(&TypeInfo__System__Collections__IEnumerator);
    func_?(&
                    MethodInfo__System__Collections__Generic__KeyValuePair<int,_MVMovable>__get_Value__
                   );
    func_?(&
                    MethodInfo__MoveableController____c___UpdateMoveables_b__11_0_System__Collections__Generic__KeyValuePair<int,_MVMovable>_
                   );
    func_?(&TypeInfo__MoveableController____c);
    cRam_? = '\x01';
  }
  fVar4 = (this->fields).time;
  fVar5 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                    ((MethodInfo *)0x0);
  source = (this->fields).MoveControllers;
  (this->fields).time = fVar5 + fVar4;
  if ((TypeInfo__MoveableController____c->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  this_01 = TypeInfo__MoveableController____c->static_fields->__9__11_0;
  if (this_01 ==
      (Func_2_System_Collections_Generic_KeyValuePair_2_System_Int32_MVMovable_Boolean_ *)0x0) {
    if ((TypeInfo__MoveableController____c->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    object = TypeInfo__MoveableController____c->static_fields->__9;
    this_01 = (Func_2_System_Collections_Generic_KeyValuePair_2_System_Int32_MVMovable_Boolean_ *)
              func_?();
    mscorlib.dll::System::Predicate`1[System::Xml::Schema::
    XmlSchemaObjectTable+XmlSchemaObjectEntry]::
    Predicate_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry___ctor
              ((Predicate_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *)this_01,
               (Object *)object,
               MethodInfo__MoveableController____c___UpdateMoveables_b__11_0_System__Collections__Generic__KeyValuePair<int,_MVMovable>_
               ,(MethodInfo *)0x0);
    TypeInfo__MoveableController____c->static_fields->__9__11_0 = this_01;
    func_?(&TypeInfo__MoveableController____c->static_fields->__9__11_0,this_01);
  }
  pIVar6 = System.Core.dll::System::Linq::Enumerable::Enumerable_Where_1
                     ((IEnumerable_1_KeyValuePair_2_System_Object_System_Object_ *)source,
                      (Func_2_System_Collections_Generic_KeyValuePair_2_System_Object_System_Object_Boolean_
                       *)this_01,
                      System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_MVMovable>_>_MethodInfo__System__Linq__Enumerable__Where<System::Collections::Generic::KeyValuePair<int,_MVMovable>_>_System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_MVMovable>_>__System__Func<System::Collections::Generic::KeyValuePair<int,_MVMovable>,_bool>_
                     );
  if (pIVar6 != (IEnumerable_1_KeyValuePair_2_System_Object_System_Object_ *)0x0) {
    piVar7 = (int *)func_?();
    uStack_1 = 1;
    while( true ) {
      if (piVar7 == (int *)0x0) break;
      cVar8 = func_?();
      if (cVar8 == '\0') {
        uStack_1 = 0xffffffff;
        if (piVar7 != (int *)0x0) {
          func_?();
        }
        *unaff_FS_OFFSET = uStack_3;
        return;
      }
      if (piVar7 == (int *)0x0) break;
      uVar9 = 0;
      uVar10 = *(ushort *)(*piVar7 + 0xb6);
      if (uVar10 != 0) {
        do {
          if (*(IEnumerator_1_KeyValuePair_2_System_Int32_MVMovable___Class **)
               (*(int *)(*piVar7 + 0x58) + (uint)uVar9 * 8) ==
              TypeInfo__System__Collections__Generic__IEnumerator<System::Collections::Generic::KeyValuePair<int,_MVMovable>_>
             ) {
            puVar11 = (undefined4 *)
                     (*piVar7 +
                     (*(int *)(*(int *)(*piVar7 + 0x58) + 4 + (uint)uVar9 * 8) + 0x18) * 8);
            goto code_?;
          }
          uVar9 = uVar9 + 1;
        } while (uVar9 < uVar10);
      }
      puVar11 = (undefined4 *)func_?();
code_?:
      (*(code *)*puVar11)();
      if (this_02 == (MVMovable *)0x0) break;
      if ((this_02->fields).parentMover == (MVMovable *)0x0) {
        MVMovable::MVMovable_Move(this_02,directionFactor,0,(MethodInfo *)0x0);
      }
      else {
        this_00 = (this_02->fields).parentMover;
        if (this_00 == (MVMovable *)0x0) break;
        MVMovable::MVMovable_UpdateMoverSubTree(this_00,directionFactor,0,(MethodInfo *)0x0);
      }
    }
  }
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void UpdateSingleMoveableInChain(Int32, Single) */

void Assembly-CSharp.dll::MoveableController::MoveableController_UpdateSingleMoveableInChain
               (MoveableController *this,int32_t movableGameObjectID,float directionFactor,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovable>__get_Item_int_
                   );
    cRam_? = '\x01';
  }
  this_00 = (this->fields).MoveControllers;
  if (this_00 != (Dictionary_2_System_Int32_MVMovable_ *)0x0) {
    pMVar1 = (MVMovable *)
             mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]
             ::Dictionary_2_System_Int32_System_Object__get_Item
                       ((Dictionary_2_System_Int32_System_Object_ *)this_00,movableGameObjectID,
                        MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovable>__get_Item_int_
                       );
    if (pMVar1 != (MVMovable *)0x0) {
      if ((pMVar1->fields).parentMover == (MVMovable *)0x0) {
        MVMovable::MVMovable_Move(pMVar1,directionFactor,movableGameObjectID,(MethodInfo *)0x0);
        return;
      }
      pMVar1 = (pMVar1->fields).parentMover;
      if (pMVar1 != (MVMovable *)0x0) {
        MVMovable::MVMovable_UpdateMoverSubTree
                  (pMVar1,directionFactor,movableGameObjectID,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* MoveableController() */

void Assembly-CSharp.dll::MoveableController::MoveableController__ctor
               (MoveableController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_UnityEngine::Vector3>__Dictionary__
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovable>__Dictionary__
                   );
    func_?(&TypeInfo__System__Collections__Generic__Dictionary<int,_UnityEngine::Vector3>);
    func_?(&TypeInfo__System__Collections__Generic__Dictionary<int,_MVMovable>);
    func_?(&TypeInfo__UpdateController);
    cRam_? = '\x01';
  }
  pDVar1 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *)
           func_?(
                          TypeInfo__System__Collections__Generic__Dictionary<int,_UnityEngine::Vector3>
                          );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (pDVar1,
             MethodInfo__System__Collections__Generic__Dictionary<int,_UnityEngine::Vector3>__Dictionary__
            );
  (this->fields).Velocities = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)pDVar1;
  func_?(&this->fields,pDVar1);
  pDVar1 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *)
           func_?(TypeInfo__System__Collections__Generic__Dictionary<int,_MVMovable>);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (pDVar1,
             MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovable>__Dictionary__);
  (this->fields).MoveControllers = (Dictionary_2_System_Int32_MVMovable_ *)pDVar1;
  func_?(&(this->fields).MoveControllers,pDVar1);
  pDVar1 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *)
           func_?(TypeInfo__System__Collections__Generic__Dictionary<int,_MVMovable>);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (pDVar1,
             MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovable>__Dictionary__);
  method_00 = (MethodInfo *)&(this->fields).CubeModelMovableMap;
  (this->fields).CubeModelMovableMap = (Dictionary_2_System_Int32_MVMovable_ *)pDVar1;
  func_?(method_00,pDVar1);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
  if ((pMVar2 != (MVNetworkGame *)0x0) &&
     (this_00 = (pMVar2->fields)._Peer_k__BackingField, this_00 != (PhotonPeer *)0x0)) {
    Photon3Unity3D.dll::ExitGames::Client::Photon::PhotonPeer::
    PhotonPeer_get_ServerTimeInMilliSeconds(this_00,(MethodInfo *)0x0);
    fVar3 = (float10)func_?();
    (this->fields).time = (float)fVar3;
    if ((TypeInfo__UpdateController->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UpdateController::UpdateController_AddFixedUpdateObject
              ((IUpdatecontrollerSubscriberFixedUpdate *)this,
               UpdatePriority__Enum_PRE_UPDATEBUCKET_20,1,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}

