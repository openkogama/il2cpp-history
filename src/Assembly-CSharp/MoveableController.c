
/* Void AddMovable(MVMovable, Boolean) */

void Assembly-CSharp.dll::MoveableController::MoveableController_AddMovable
               (MoveableController *this,MVMovable *movable,bool isInventoryPreviewMovable,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Debug);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_UnityEngine::Vector3>__Add_int__UnityEngine__Vector3_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovable>__Add_int__MVMovable_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__without_a_cube_model);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__MoveableController__trying_add_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((movable != (MVMovable *)0x0) &&
     (this_00 = (this->fields).Velocities,
     this_00 != (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0)) {
    VStack_1.z = (movable->fields).velocity.z;
    VStack_1.x = (movable->fields).velocity.x;
    VStack_1.y = (movable->fields).velocity.y;
    uVar2 = CONCAT71((int7)((ulonglong)method >> 8),2);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::Vector3]::
    Dictionary_2_System_Int32_UnityEngine_Vector3__TryInsert
              (this_00,(movable->fields)._._._.goId,&VStack_1,(InsertionBehavior__Enum)uVar2,
               MethodInfo__System__Collections__Generic__Dictionary<int,_UnityEngine::Vector3>__Add_int__UnityEngine__Vector3_
               ->klass->rgctx_data[0x22].method);
    pDVar3 = (this->fields).MoveControllers;
    if (pDVar3 != (Dictionary_2_System_Int32_MVMovable_ *)0x0) {
      uVar2 = CONCAT71((int7)((ulonglong)uVar2 >> 8),2);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
      Dictionary_2_System_Int32_System_Object__TryInsert
                ((Dictionary_2_System_Int32_System_Object_ *)pDVar3,(movable->fields)._._._.goId,
                 (Object *)movable,(InsertionBehavior__Enum)uVar2,
                 MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovable>__Add_int__MVMovable_
                 ->klass->rgctx_data[0x22].method);
      if (isInventoryPreviewMovable == 0) {
        if ((movable->fields)._CubeModel_k__BackingField != (MVCubeModelInstance *)0x0) {
          pMVar4 = (movable->fields)._CubeModel_k__BackingField;
          if ((pMVar4 != (MVCubeModelInstance *)0x0) &&
             (pDVar3 = (this->fields).CubeModelMovableMap,
             pDVar3 != (Dictionary_2_System_Int32_MVMovable_ *)0x0)) {
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
            Dictionary_2_System_Int32_System_Object__TryInsert
                      ((Dictionary_2_System_Int32_System_Object_ *)pDVar3,(pMVar4->fields)._._._.id,
                       (Object *)movable,
                       (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)uVar2 >> 8),2),
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovable>__Add_int__MVMovable_
                       ->klass->rgctx_data[0x22].method);
            return;
          }
          goto code_?;
        }
        aIStackX_8[0].m_value = (movable->fields)._._._._.id;
        pSVar5 = mscorlib.dll::System::Int32::Int32_ToString(aIStackX_8,(MethodInfo *)0x0);
        pSVar5 = mscorlib.dll::System::String::String_Concat_5
                           (StringLiteral__MoveableController__trying_add_,pSVar5,
                            StringLiteral__without_a_cube_model,(MethodInfo *)0x0);
        if (*(int *)&(TypeInfo__UnityEngine__Debug->_1).field_0x1c == 0) {
          FUN_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
                  ((Object *)pSVar5,(MethodInfo *)0x0);
      }
      return;
    }
  }
code_?:
  FUN_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Quaternion GetRotationQuat(Int32) */

Quaternion *
Assembly-CSharp.dll::MoveableController::MoveableController_GetRotationQuat
          (Quaternion *__return_storage_ptr__,MoveableController *this,int32_t movableGameObjectID,
          MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovable>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (this->fields).MoveControllers;
  if ((pDVar1 != (Dictionary_2_System_Int32_MVMovable_ *)0x0) &&
     (pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
               Object]::Dictionary_2_System_Int32_System_Object__get_Item
                         ((Dictionary_2_System_Int32_System_Object_ *)pDVar1,movableGameObjectID,
                          MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovable>__get_Item_int_
                         ), pOVar2 != (Object *)0x0)) {
    if (pOVar2[0x18].monitor == (MonitorData *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Quaternion);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pQVar3 = TypeInfo__UnityEngine__Quaternion->static_fields;
      uStack_4._0_4_ = (pQVar3->identityQuaternion).x;
      uStack_4._4_4_ = (pQVar3->identityQuaternion).y;
      uStack_5._0_4_ = (pQVar3->identityQuaternion).z;
      uStack_5._4_4_ = (pQVar3->identityQuaternion).w;
code_?:
      __return_storage_ptr__->x = (float)uStack_4;
      __return_storage_ptr__->y = uStack_4._4_4_;
      __return_storage_ptr__->z = (float)uStack_5;
      __return_storage_ptr__->w = uStack_5._4_4_;
      return __return_storage_ptr__;
    }
    pDVar1 = (this->fields).MoveControllers;
    if (((pDVar1 != (Dictionary_2_System_Int32_MVMovable_ *)0x0) &&
        (pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                  Object]::Dictionary_2_System_Int32_System_Object__get_Item
                            ((Dictionary_2_System_Int32_System_Object_ *)pDVar1,movableGameObjectID,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovable>__get_Item_int_
                            ), pOVar2 != (Object *)0x0)) &&
       (pOVar2 = (Object *)pOVar2[0xd].monitor, pOVar2 != (Object *)0x0)) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      uStack_4 = 0;
      uStack_5 = 0;
      pOVar6 = pOVar2[1].klass;
      if (pOVar6 == (Object__Class *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException(pOVar2,(MethodInfo *)0x0);
        pcVar7 = (code *)swi(3);
        pQVar8 = (Quaternion *)(*pcVar7)();
        return pQVar8;
      }
      pcVar7 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
        uVar9 = func_?(&UNK_?);
        FUN_?(uVar9,0);
        pcVar7 = (code *)swi(3);
        pQVar8 = (Quaternion *)(*pcVar7)();
        return pQVar8;
      }
      pcRam_? = pcVar7;
      (*pcRam_?)(pOVar6,&uStack_4);
      pDVar1 = (this->fields).MoveControllers;
      if ((pDVar1 != (Dictionary_2_System_Int32_MVMovable_ *)0x0) &&
         (pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                   Object]::Dictionary_2_System_Int32_System_Object__get_Item
                             ((Dictionary_2_System_Int32_System_Object_ *)pDVar1,movableGameObjectID
                              ,
                              MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovable>__get_Item_int_
                             ), pOVar2 != (Object *)0x0)) {
        pOStack_10 = pOVar2[0x1b].klass;
        fVar11 = *(float *)((longlong)&pOVar2[0x1b].monitor + 4);
        fVar12 = fVar11 * SUB84(pOStack_10,0);
        fVar13 = fVar11 * *(float *)&pOVar2[0x1b].monitor;
        fVar11 = fVar11 * (float)((ulonglong)pOStack_10 >> 0x20);
        fVar14 = uStack_4._4_4_ + uStack_4._4_4_;
        fVar15 = (float)uStack_5 + (float)uStack_5;
        fVar16 = uStack_5._4_4_ * ((float)uStack_4 + (float)uStack_4);
        fVar17 = (float)uStack_4 * ((float)uStack_4 + (float)uStack_4);
        fVar18 = (_UNK_? - ((float)uStack_5 * fVar15 + uStack_4._4_4_ * fVar14)) * fVar12 +
                ((float)uStack_4 * fVar14 - uStack_5._4_4_ * fVar15) * fVar11 +
                (uStack_5._4_4_ * fVar14 + (float)uStack_4 * fVar15) * fVar13;
        fVar19 = ((float)uStack_4 * fVar15 - uStack_5._4_4_ * fVar14) * fVar12 +
                 (fVar16 + uStack_4._4_4_ * fVar15) * fVar11 +
                 (_UNK_? - (uStack_4._4_4_ * fVar14 + fVar17)) * fVar13;
        fVar11 = (_UNK_? - ((float)uStack_5 * fVar15 + fVar17)) * fVar11 +
                (uStack_5._4_4_ * fVar15 + (float)uStack_4 * fVar14) * fVar12 +
                (uStack_4._4_4_ * fVar15 - fVar16) * fVar13;
        pDVar1 = (this->fields).MoveControllers;
        if ((pDVar1 != (Dictionary_2_System_Int32_MVMovable_ *)0x0) &&
           (pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::
                     Object]::Dictionary_2_System_Int32_System_Object__get_Item
                               ((Dictionary_2_System_Int32_System_Object_ *)pDVar1,
                                movableGameObjectID,
                                MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovable>__get_Item_int_
                               ), pOVar2 != (Object *)0x0)) {
          fVar15 = *(float *)((longlong)&pOVar2[0x1b].monitor + 4);
          fStack_20 = *(float *)&pOVar2[0x1b].monitor * fVar15;
          pOStack_10 = (Object__Class *)
                       CONCAT44((float)((ulonglong)pOVar2[0x1b].klass >> 0x20) * fVar15,
                                SUB84(pOVar2[0x1b].klass,0) * fVar15);
          fVar15 = (float)FUN_?(&pOStack_10);
          pcVar7 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
            uVar9 = func_?(&UNK_?);
            FUN_?(uVar9,0);
            pcVar7 = (code *)swi(3);
            pQVar8 = (Quaternion *)(*pcVar7)();
            return pQVar8;
          }
          pcRam_? = pcVar7;
          fVar14 = (float)(*pcRam_?)();
          pOStack_10 = (Object__Class *)CONCAT44(fVar11,fVar18);
          fStack_20 = fVar19;
          fVar16 = (float)FUN_?(&pOStack_10);
          if (_UNK_? < fVar16) {
            fVar18 = fVar18 / fVar16;
            fVar11 = fVar11 / fVar16;
            fStack_20 = fVar19 / fVar16;
          }
          else {
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__UnityEngine__Vector3);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pVVar21 = TypeInfo__UnityEngine__Vector3->static_fields;
            fVar18 = (pVVar21->zeroVector).x;
            fVar11 = (pVVar21->zeroVector).y;
            fStack_20 = (pVVar21->zeroVector).z;
          }
          fVar15 = fVar15 * _UNK_?;
          pOStack_10 = (Object__Class *)CONCAT44(fVar11,fVar18);
          uStack_4 = 0;
          uStack_5 = 0;
          pcVar7 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar7 = (code *)FUN_?(&UNK_?), pcVar7 == (code *)0x0)) {
            uVar9 = func_?(&UNK_?);
            FUN_?(uVar9,0);
            pcVar7 = (code *)swi(3);
            pQVar8 = (Quaternion *)(*pcVar7)();
            return pQVar8;
          }
          pcRam_? = pcVar7;
          (*pcRam_?)(fVar15 * fVar14,&pOStack_10,&uStack_4);
          pDVar1 = (this->fields).MoveControllers;
          if ((pDVar1 != (Dictionary_2_System_Int32_MVMovable_ *)0x0) &&
             (pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System
                       ::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                 ((Dictionary_2_System_Int32_System_Object_ *)pDVar1,
                                  movableGameObjectID,
                                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovable>__get_Item_int_
                                 ), pOVar2 != (Object *)0x0)) {
            if (pOVar2[0x1c].monitor == (MonitorData *)0x0) {
              goto code_?;
            }
            pDVar1 = (this->fields).MoveControllers;
            if (((pDVar1 != (Dictionary_2_System_Int32_MVMovable_ *)0x0) &&
                (pOVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                          Int32,System::Object]::Dictionary_2_System_Int32_System_Object__get_Item
                                    ((Dictionary_2_System_Int32_System_Object_ *)pDVar1,
                                     movableGameObjectID,
                                     MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovable>__get_Item_int_
                                    ), pOVar2 != (Object *)0x0)) &&
               (pOVar2[0x1c].monitor != (MonitorData *)0x0)) {
              pQVar8 = MoveableController_GetRotationQuat
                                 ((Quaternion *)&pOStack_10,this,
                                  *(int32_t *)(pOVar2[0x1c].monitor + 0xbc),(MethodInfo *)0x0);
              fVar11 = pQVar8->x;
              fVar18 = pQVar8->y;
              fVar15 = pQVar8->z;
              fVar14 = pQVar8->w;
              __return_storage_ptr__->x =
                   ((float)uStack_4 * fVar14 + uStack_5._4_4_ * fVar11 + (float)uStack_5 * fVar18)
                   - uStack_4._4_4_ * fVar15;
              __return_storage_ptr__->y =
                   (uStack_5._4_4_ * fVar18 + uStack_4._4_4_ * fVar14 + (float)uStack_4 * fVar15)
                   - (float)uStack_5 * fVar11;
              __return_storage_ptr__->z =
                   (uStack_5._4_4_ * fVar15 + (float)uStack_5 * fVar14 + uStack_4._4_4_ * fVar11)
                   - (float)uStack_4 * fVar18;
              __return_storage_ptr__->w =
                   ((uStack_5._4_4_ * fVar14 - (float)uStack_4 * fVar11) - uStack_4._4_4_ * fVar18)
                   - (float)uStack_5 * fVar15;
              return __return_storage_ptr__;
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar7 = (code *)swi(3);
  pQVar8 = (Quaternion *)(*pcVar7)();
  return pQVar8;
}


/* Vector3 GetVel(Int32, Vector3) */

Vector3 * Assembly-CSharp.dll::MoveableController::MoveableController_GetVel
                    (Vector3 *__return_storage_ptr__,MoveableController *this,
                    int32_t movableGameObjectID,Vector3 *position,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovable>__TryGetValue_int__MVMovable__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_UnityEngine::Vector3>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).MoveControllers;
  pOStackX_8 = (Object *)0x0;
  if (this_00 != (Dictionary_2_System_Int32_MVMovable_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
    Dictionary_2_System_Int32_System_Object__TryGetValue
              ((Dictionary_2_System_Int32_System_Object_ *)this_00,movableGameObjectID,&pOStackX_8,
               MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovable>__TryGetValue_int__MVMovable__
              );
    if (pOStackX_8 == (Object *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pVVar1 = TypeInfo__UnityEngine__Vector3->static_fields;
      fVar2 = (pVVar1->zeroVector).y;
      fVar3 = (pVVar1->zeroVector).z;
      __return_storage_ptr__->x = (pVVar1->zeroVector).x;
      __return_storage_ptr__->y = fVar2;
      __return_storage_ptr__->z = fVar3;
      return __return_storage_ptr__;
    }
    pMVar4 = pOStackX_8[0x18].monitor;
    if (pMVar4 != (MonitorData *)0x0) {
      puVar5 = (undefined8 *)
                (**(code **)(*(longlong *)pMVar4 + 0x2c8))
                          (&VStack_6,pMVar4,*(undefined8 *)(*(longlong *)pMVar4 + 0x2d0));
      uVar7 = position->x;
      uVar8 = position->y;
      aQStack_9[0]._0_8_ = *puVar5;
      fVar10 = position->z - *(float *)(puVar5 + 1);
      fVar11 = (float)uVar7 - (float)aQStack_9[0]._0_8_;
      fVar12 = (float)uVar8 - SUB84(aQStack_9[0]._0_8_,4);
      pQVar13 = MoveableController_GetRotationQuat
                          (aQStack_9,this,movableGameObjectID,(MethodInfo *)0x0);
      pMVar14 = 
      MethodInfo__System__Collections__Generic__Dictionary<int,_UnityEngine::Vector3>__get_Item_int_
      ;
      fVar3 = pQVar13->x;
      fVar2 = pQVar13->y;
      fVar15 = pQVar13->z;
      fVar16 = pQVar13->w;
      fVar17 = fVar15 + fVar15;
      fVar18 = fVar2 + fVar2;
      fVar19 = (fVar3 + fVar3) * fVar3;
      fVar20 = (fVar3 + fVar3) * fVar16;
      fVar21 = _UNK_? - (fVar17 * fVar15 + fVar18 * fVar2);
      fVar22 = _UNK_? - (fVar17 * fVar15 + fVar19);
      fVar15 = _UNK_? - (fVar18 * fVar2 + fVar19);
      this_01 = (this->fields).Velocities;
      if (this_01 != (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0) {
        uVar23 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine
                 ::Vector3]::Dictionary_2_System_Int32_UnityEngine_Vector3__FindEntry
                           (this_01,movableGameObjectID,
                            MethodInfo__System__Collections__Generic__Dictionary<int,_UnityEngine::Vector3>__get_Item_int_
                            ->klass->rgctx_data[0x21].method);
        if ((int)uVar23 < 0) {
          uVar24 = func_?(pMVar14->klass->rgctx_data,0xe);
          key = (Object *)func_?(uVar24);
          mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowKeyNotFoundException
                    (key,(MethodInfo *)0x0);
          pcVar25 = (code *)swi(3);
          pVVar26 = (Vector3 *)(*pcVar25)();
          return pVVar26;
        }
        pDVar27 = (this_01->fields)._entries;
        if (pDVar27 != (Dictionary_2_TKey_TValue_Entry_System_Int32_UnityEngine_Vector3___Array *)0x0
           ) {
          if ((uint)pDVar27->max_length <= uVar23) {
            FUN_?();
            pcVar25 = (code *)swi(3);
            pVVar26 = (Vector3 *)(*pcVar25)();
            return pVVar26;
          }
          aQStack_9[0].x = pDVar27->vector[(int)uVar23].value.x;
          aQStack_9[0].y = pDVar27->vector[(int)uVar23].value.y;
          fVar15 = (((fVar17 * fVar3 - fVar18 * fVar16) * fVar11 +
                     (fVar20 + fVar17 * fVar2) * fVar12 + fVar15 * fVar10) - fVar10) +
                   pDVar27->vector[(int)uVar23].value.z;
          fVar19 = ((fVar21 * fVar11 + (fVar18 * fVar3 - fVar17 * fVar16) * fVar12 +
                    (fVar18 * fVar16 + fVar17 * fVar3) * fVar10) - fVar11) + aQStack_9[0].x;
          fVar3 = ((fVar22 * fVar12 + (fVar17 * fVar16 + fVar18 * fVar3) * fVar11 +
                    (fVar17 * fVar2 - fVar20) * fVar10) - fVar12) + aQStack_9[0].y;
          if (pOStackX_8 != (Object *)0x0) {
            if (pOStackX_8[0x1c].monitor == (MonitorData *)0x0) {
              __return_storage_ptr__->x = fVar19;
              __return_storage_ptr__->y = fVar3;
code_?:
              __return_storage_ptr__->z = fVar15;
              return __return_storage_ptr__;
            }
            if ((pOStackX_8[0x1c].monitor != (MonitorData *)0x0) &&
               (lVar28 = *(longlong *)(pOStackX_8[0x1c].monitor + 0x188), lVar28 != 0)) {
              movableGameObjectID_00 = *(int32_t *)(lVar28 + 0x10);
              pMVar4 = pOStackX_8[0x18].monitor;
              if (pMVar4 != (MonitorData *)0x0) {
                puVar5 = (undefined8 *)
                          (**(code **)(*(longlong *)pMVar4 + 0x2c8))
                                    (aQStack_9,pMVar4,*(undefined8 *)(*(longlong *)pMVar4 + 0x2d0))
                ;
                VStack_6._0_8_ = *puVar5;
                VStack_6.z = *(float *)(puVar5 + 1);
                pVVar26 = MoveableController_GetVel
                                    ((Vector3 *)aQStack_9,this,movableGameObjectID_00,&VStack_6,
                                     (MethodInfo *)0x0);
                uVar29 = pVVar26->x;
                uVar30 = pVVar26->y;
                fVar15 = fVar15 + pVVar26->z;
                __return_storage_ptr__->x = fVar19 + (float)uVar29;
                __return_storage_ptr__->y = fVar3 + (float)uVar30;
                goto code_?;
              }
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar25 = (code *)swi(3);
  pVVar26 = (Vector3 *)(*pcVar25)();
  return pVVar26;
}


/* Void RemoveMovable(MVMovable) */

void Assembly-CSharp.dll::MoveableController::MoveableController_RemoveMovable
               (MoveableController *this,MVMovable *movable,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_UnityEngine::Vector3>__Remove_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovable>__Remove_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((movable != (MVMovable *)0x0) &&
     (pDVar1 = (this->fields).MoveControllers, pDVar1 != (Dictionary_2_System_Int32_MVMovable_ *)0x0
     )) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
    Dictionary_2_System_Int32_System_Object__Remove
              ((Dictionary_2_System_Int32_System_Object_ *)pDVar1,(movable->fields)._._._.goId,
               MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovable>__Remove_int_);
    this_00 = (this->fields).Velocities;
    if (this_00 != (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::Vector3]::
      Dictionary_2_System_Int32_UnityEngine_Vector3__Remove
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
code_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void ResetMoveables() */

void Assembly-CSharp.dll::MoveableController::MoveableController_ResetMoveables
               (MoveableController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovable>__get_Values__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVMovable>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVMovable>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue__ValueCollection_TKey_TValue___Enumerator<int,_MVMovable>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary_2_TKey_TValue___ValueCollection<int,_MVMovable>__GetEnumerator__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *
            )(this->fields).MoveControllers;
  if ((this_00 ==
       (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)0x0)
     || (pDVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[UnityEngine::UIElements::
                  TypeConverterRegistry+ConverterKey,System::Object]::
                  Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object__get_Values
                            (this_00,
                             MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovable>__get_Values__
                            ),
        pDVar1 == (Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                   *)0x0)) {
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
    uVar2 = uStack_3;
code_?:
    uStack_3 = uVar2;
    FUN_?();
code_?:
    FUN_?();
code_?:
    mscorlib.dll::System::ThrowHelper::
    ThrowHelper_1_ThrowInvalidOperationException_InvalidOperation_EnumFailedVersion
              ((MethodInfo *)0x0);
  }
  else {
    uStack_4 = (pDVar1->fields)._dictionary;
    puStack_5 = (undefined4 *)0x0;
    uStack_6 = 0;
    if (iRam_? != 0) {
      uVar2 = (uint)((ulonglong)&uStack_4 >> 0xc);
      puVar7 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
      do {
        uVar8 = *puVar7;
        LOCK();
        uVar9 = *puVar7;
        if (uVar8 == uVar9) {
          *puVar7 = uVar8 | 1L << (uVar2 & 0x3f);
        }
        UNLOCK();
      } while (uVar8 != uVar9);
    }
    if (uStack_4 ==
        (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_ *)0x0
       ) {
      FUN_?();
      pcVar10 = (code *)swi(3);
      (*pcVar10)();
      return;
    }
    iStack_11 = (uStack_4->fields)._version;
    uStack_6 = 0;
    uStack_4._4_4_ = (undefined4)((ulonglong)uStack_4 >> 0x20);
    uStack_12 = (undefined4)uStack_4;
    uStack_13 = uStack_4._4_4_;
    uStack_3 = 0;
    aplStack_14[0] = (longlong *)0x0;
    uStack_4 = (Dictionary_2_UnityEngine_UIElements_TypeConverterRegistry_ConverterKey_System_Object_
                 *)0x0;
    puStack_5 = &uStack_12;
    while (lVar15 = CONCAT44(uStack_13,uStack_12), lVar15 != 0) {
      if (iStack_11 != *(int *)(lVar15 + 0x2c)) goto code_?;
      do {
        if (lVar15 == 0) goto code_?;
        if (*(uint *)(lVar15 + 0x20) <= uStack_3) {
          uStack_3 = *(int *)(lVar15 + 0x20) + 1;
          aplStack_14[0] = (longlong *)0x0;
          MoveableController_SyncTimeToServer(this,(MethodInfo *)0x0);
          return;
        }
        lVar16 = *(longlong *)(lVar15 + 0x18);
        lVar17 = (longlong)(int)uStack_3;
        uVar2 = uStack_3 + 1;
        if (lVar16 == 0) goto code_?;
        bVar18 = *(uint *)(lVar16 + 0x18) <= uStack_3;
        uStack_3 = uVar2;
        if (bVar18) goto code_?;
      } while (*(int *)(lVar16 + 0x20 + lVar17 * 0x18) < 0);
      aplStack_14[0] = *(longlong **)(lVar16 + (lVar17 + 2) * 0x18);
      func_?(aplStack_14);
      if (aplStack_14[0] == (longlong *)0x0) goto code_?;
      (**(code **)(*aplStack_14[0] + 600))();
    }
  }
  FUN_?();
  FUN_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void SyncTimeToServer() */

void Assembly-CSharp.dll::MoveableController::MoveableController_SyncTimeToServer
               (MoveableController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar1 != (MVGameControllerBase *)0x0) &&
      (pMVar2 = (pMVar1->fields).game, pMVar2 != (MVNetworkGame *)0x0)) &&
     (this_00 = (pMVar2->fields)._Peer_k__BackingField, this_00 != (PhotonPeer *)0x0)) {
    uVar3 = Photon3Unity3D.dll::ExitGames::Client::Photon::PhotonPeer::
            PhotonPeer_get_ServerTimeInMilliSeconds(this_00,(MethodInfo *)0x0);
    if ((int)uVar3 < 0) {
      uVar3 = uVar3 - 2;
    }
    fVar4 = (float)FUN_?((float)uVar3 / _UNK_?,_UNK_?);
    (this->fields).time = fVar4;
    return;
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void UpdateControllerFixedUpdate() */

void Assembly-CSharp.dll::MoveableController::MoveableController_UpdateControllerFixedUpdate
               (MoveableController *this,MethodInfo *method)

{
  directionFactor = _UNK_?;
  if (cRam_? == '\0') {
    FUN_?(&
                  System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_MVMovable>_>_MethodInfo__System__Linq__Enumerable__Where<System::Collections::Generic::KeyValuePair<int,_MVMovable>_>_System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_MVMovable>_>__System__Func<System::Collections::Generic::KeyValuePair<int,_MVMovable>,_bool>_
                  ,_UNK_?,0);
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Func<System::Collections::Generic::KeyValuePair<int,_MVMovable>,_bool>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__IDisposable);
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_MVMovable>_>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__IEnumerator<System::Collections::Generic::KeyValuePair<int,_MVMovable>_>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__IEnumerator);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<int,_MVMovable>__get_Value__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MoveableController____c___UpdateMoveables_b__11_0_System__Collections__Generic__KeyValuePair<int,_MVMovable>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MoveableController____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fVar1 = (this->fields).time;
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
  }
  else {
    pcRam_? = pcVar2;
    fVar4 = (float)(*pcRam_?)();
    (this->fields).time = fVar4 + fVar1;
    source = (this->fields).MoveControllers;
    if (*(int *)&(TypeInfo__MoveableController____c->_1).field_0x1c == 0) {
      FUN_?();
    }
    this_00 = TypeInfo__MoveableController____c->static_fields->__9__11_0;
    if (this_00 ==
        (Func_2_System_Collections_Generic_KeyValuePair_2_System_Int32_MVMovable_Boolean_ *)0x0) {
      if (*(int *)&(TypeInfo__MoveableController____c->_1).field_0x1c == 0) {
        FUN_?();
      }
      object = TypeInfo__MoveableController____c->static_fields->__9;
      this_00 = (Func_2_System_Collections_Generic_KeyValuePair_2_System_Int32_MVMovable_Boolean_ *)
                FUN_?(
                             TypeInfo__System__Func<System::Collections::Generic::KeyValuePair<int,_MVMovable>,_bool>
                             );
      mscorlib.dll::System::Predicate`1[System::Xml::Schema::
      XmlSchemaObjectTable+XmlSchemaObjectEntry]::
      Predicate_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry___ctor
                ((Predicate_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *)this_00
                 ,(Object *)object,
                 MethodInfo__MoveableController____c___UpdateMoveables_b__11_0_System__Collections__Generic__KeyValuePair<int,_MVMovable>_
                 ,(MethodInfo *)0x0);
      TypeInfo__MoveableController____c->static_fields->__9__11_0 = this_00;
      if (iRam_? != 0) {
        uVar5 = (uint)((ulonglong)&TypeInfo__MoveableController____c->static_fields->__9__11_0 >>
                       0xc);
        uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
        do {
          uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
          puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
          LOCK();
          bVar9 = uVar7 == *puVar8;
          if (bVar9) {
            *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
          }
          UNLOCK();
        } while (!bVar9);
      }
    }
    pIVar10 = System.Core.dll::System::Linq::Enumerable::Enumerable_Where
                       ((IEnumerable_1_KeyValuePair_2_System_Int32_System_Object_ *)source,
                        (Func_2_System_Collections_Generic_KeyValuePair_2_System_Int32_System_Object_Boolean_
                         *)this_00,
                        System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_MVMovable>_>_MethodInfo__System__Linq__Enumerable__Where<System::Collections::Generic::KeyValuePair<int,_MVMovable>_>_System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_MVMovable>_>__System__Func<System::Collections::Generic::KeyValuePair<int,_MVMovable>,_bool>_
                       );
    if (pIVar10 == (IEnumerable_1_KeyValuePair_2_System_Int32_System_Object_ *)0x0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    plVar11 = (longlong *)
             FUN_?(0,
                           TypeInfo__System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_MVMovable>_>
                           ,pIVar10);
    while (plVar11 != (longlong *)0x0) {
      cVar12 = FUN_?(0,TypeInfo__System__Collections__IEnumerator);
      if (cVar12 == '\0') {
        if (plVar11 != (longlong *)0x0) {
          FUN_?(0,TypeInfo__System__IDisposable,plVar11);
        }
        return;
      }
      if (plVar11 == (longlong *)0x0) goto code_?;
      lVar13 = *plVar11;
      uVar14 = 0;
      if (*(ushort *)(lVar13 + 0x12e) != 0) {
        do {
          if (*(IEnumerator_1_KeyValuePair_2_System_Int32_MVMovable___Class **)
               (*(longlong *)(lVar13 + 0xb0) + (ulonglong)uVar14 * 0x10) ==
              TypeInfo__System__Collections__Generic__IEnumerator<System::Collections::Generic::KeyValuePair<int,_MVMovable>_>
             ) {
            puVar15 = (undefined8 *)
                     ((longlong)
                      *(int *)(*(longlong *)(lVar13 + 0xb0) + 8 + (ulonglong)uVar14 * 0x10) * 0x10 +
                      0x138 + lVar13);
            goto code_?;
          }
          uVar14 = uVar14 + 1;
        } while (uVar14 < *(ushort *)(lVar13 + 0x12e));
      }
      puVar15 = (undefined8 *)
               FUN_?(plVar11,
                             TypeInfo__System__Collections__Generic__IEnumerator<System::Collections::Generic::KeyValuePair<int,_MVMovable>_>
                             ,0);
code_?:
      lVar13 = (*(code *)*puVar15)(auStack_16,plVar11);
      pMVar17 = *(MVMovable **)(lVar13 + 8);
      if (pMVar17 == (MVMovable *)0x0) goto code_?;
      if ((pMVar17->fields).parentMover == (MVMovable *)0x0) {
        MVMovable::MVMovable_Move(pMVar17,directionFactor,0,(MethodInfo *)0x0);
      }
      else {
        pMVar17 = (pMVar17->fields).parentMover;
        if (pMVar17 == (MVMovable *)0x0) goto code_?;
        MVMovable::MVMovable_UpdateMoverSubTree(pMVar17,directionFactor,0,(MethodInfo *)0x0);
      }
    }
  }
  FUN_?();
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void UpdateMoveable(Int32, Single, Int32) */

void Assembly-CSharp.dll::MoveableController::MoveableController_UpdateMoveable
               (MoveableController *this,int32_t movableGameObjectID,float directionFactor,
               int32_t breakid,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovable>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
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
      }
      else {
        pMVar1 = (pMVar1->fields).parentMover;
        if (pMVar1 == (MVMovable *)0x0) goto code_?;
        MVMovable::MVMovable_UpdateMoverSubTree(pMVar1,directionFactor,breakid,(MethodInfo *)0x0);
      }
      return;
    }
  }
code_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void UpdateMoveables(Single) */

void Assembly-CSharp.dll::MoveableController::MoveableController_UpdateMoveables
               (MoveableController *this,float directionFactor,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_MVMovable>_>_MethodInfo__System__Linq__Enumerable__Where<System::Collections::Generic::KeyValuePair<int,_MVMovable>_>_System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_MVMovable>_>__System__Func<System::Collections::Generic::KeyValuePair<int,_MVMovable>,_bool>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Func<System::Collections::Generic::KeyValuePair<int,_MVMovable>,_bool>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__IDisposable);
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_MVMovable>_>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__IEnumerator<System::Collections::Generic::KeyValuePair<int,_MVMovable>_>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__IEnumerator);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__KeyValuePair<int,_MVMovable>__get_Value__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__MoveableController____c___UpdateMoveables_b__11_0_System__Collections__Generic__KeyValuePair<int,_MVMovable>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MoveableController____c);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  fVar1 = (this->fields).time;
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar3 = func_?(&UNK_?);
    FUN_?(uVar3,0);
code_?:
    FUN_?();
code_?:
    FUN_?();
code_?:
    FUN_?();
  }
  else {
    pcRam_? = pcVar2;
    fVar4 = (float)(*pcRam_?)();
    (this->fields).time = fVar4 + fVar1;
    source = (this->fields).MoveControllers;
    if (*(int *)&(TypeInfo__MoveableController____c->_1).field_0x1c == 0) {
      FUN_?();
    }
    this_00 = TypeInfo__MoveableController____c->static_fields->__9__11_0;
    if (this_00 ==
        (Func_2_System_Collections_Generic_KeyValuePair_2_System_Int32_MVMovable_Boolean_ *)0x0) {
      if (*(int *)&(TypeInfo__MoveableController____c->_1).field_0x1c == 0) {
        FUN_?();
      }
      object = TypeInfo__MoveableController____c->static_fields->__9;
      this_00 = (Func_2_System_Collections_Generic_KeyValuePair_2_System_Int32_MVMovable_Boolean_ *)
                FUN_?(
                             TypeInfo__System__Func<System::Collections::Generic::KeyValuePair<int,_MVMovable>,_bool>
                             );
      mscorlib.dll::System::Predicate`1[System::Xml::Schema::
      XmlSchemaObjectTable+XmlSchemaObjectEntry]::
      Predicate_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry___ctor
                ((Predicate_1_System_Xml_Schema_XmlSchemaObjectTable_XmlSchemaObjectEntry_ *)this_00
                 ,(Object *)object,
                 MethodInfo__MoveableController____c___UpdateMoveables_b__11_0_System__Collections__Generic__KeyValuePair<int,_MVMovable>_
                 ,(MethodInfo *)0x0);
      TypeInfo__MoveableController____c->static_fields->__9__11_0 = this_00;
      if (iRam_? != 0) {
        uVar5 = (uint)((ulonglong)&TypeInfo__MoveableController____c->static_fields->__9__11_0 >>
                       0xc);
        uVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6);
        do {
          uVar7 = *(ulonglong *)(uVar6 * 8 + 0xADDR);
          puVar8 = (ulonglong *)(uVar6 * 8 + 0xADDR);
          LOCK();
          bVar9 = uVar7 == *puVar8;
          if (bVar9) {
            *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
          }
          UNLOCK();
        } while (!bVar9);
      }
    }
    pIVar10 = System.Core.dll::System::Linq::Enumerable::Enumerable_Where
                       ((IEnumerable_1_KeyValuePair_2_System_Int32_System_Object_ *)source,
                        (Func_2_System_Collections_Generic_KeyValuePair_2_System_Int32_System_Object_Boolean_
                         *)this_00,
                        System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_MVMovable>_>_MethodInfo__System__Linq__Enumerable__Where<System::Collections::Generic::KeyValuePair<int,_MVMovable>_>_System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_MVMovable>_>__System__Func<System::Collections::Generic::KeyValuePair<int,_MVMovable>,_bool>_
                       );
    if (pIVar10 == (IEnumerable_1_KeyValuePair_2_System_Int32_System_Object_ *)0x0) {
      FUN_?();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    plVar11 = (longlong *)
             FUN_?(0,
                           TypeInfo__System__Collections__Generic__IEnumerable<System::Collections::Generic::KeyValuePair<int,_MVMovable>_>
                           ,pIVar10);
    while (plVar11 != (longlong *)0x0) {
      cVar12 = FUN_?(0,TypeInfo__System__Collections__IEnumerator);
      if (cVar12 == '\0') {
        if (plVar11 != (longlong *)0x0) {
          FUN_?(0,TypeInfo__System__IDisposable,plVar11);
        }
        return;
      }
      if (plVar11 == (longlong *)0x0) goto code_?;
      lVar13 = *plVar11;
      uVar14 = 0;
      if (*(ushort *)(lVar13 + 0x12e) != 0) {
        do {
          if (*(IEnumerator_1_KeyValuePair_2_System_Int32_MVMovable___Class **)
               (*(longlong *)(lVar13 + 0xb0) + (ulonglong)uVar14 * 0x10) ==
              TypeInfo__System__Collections__Generic__IEnumerator<System::Collections::Generic::KeyValuePair<int,_MVMovable>_>
             ) {
            puVar15 = (undefined8 *)
                     ((longlong)
                      *(int *)(*(longlong *)(lVar13 + 0xb0) + 8 + (ulonglong)uVar14 * 0x10) * 0x10 +
                      0x138 + lVar13);
            goto code_?;
          }
          uVar14 = uVar14 + 1;
        } while (uVar14 < *(ushort *)(lVar13 + 0x12e));
      }
      puVar15 = (undefined8 *)
               FUN_?(plVar11,
                             TypeInfo__System__Collections__Generic__IEnumerator<System::Collections::Generic::KeyValuePair<int,_MVMovable>_>
                             ,0);
code_?:
      lVar13 = (*(code *)*puVar15)(auStack_16,plVar11);
      pMVar17 = *(MVMovable **)(lVar13 + 8);
      if (pMVar17 == (MVMovable *)0x0) goto code_?;
      if ((pMVar17->fields).parentMover == (MVMovable *)0x0) {
        MVMovable::MVMovable_Move(pMVar17,directionFactor,0,(MethodInfo *)0x0);
      }
      else {
        pMVar17 = (pMVar17->fields).parentMover;
        if (pMVar17 == (MVMovable *)0x0) goto code_?;
        MVMovable::MVMovable_UpdateMoverSubTree(pMVar17,directionFactor,0,(MethodInfo *)0x0);
      }
    }
  }
  FUN_?();
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void UpdateSingleMoveableInChain(Int32, Single) */

void Assembly-CSharp.dll::MoveableController::MoveableController_UpdateSingleMoveableInChain
               (MoveableController *this,int32_t movableGameObjectID,float directionFactor,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovable>__get_Item_int_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).MoveControllers;
  if (this_00 == (Dictionary_2_System_Int32_MVMovable_ *)0x0) {
code_?:
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  this_02 = (MVWorldObjectClient *)
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,System::Object]::
            Dictionary_2_System_Int32_System_Object__get_Item
                      ((Dictionary_2_System_Int32_System_Object_ *)this_00,movableGameObjectID,
                       MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovable>__get_Item_int_
                      );
  if (this_02 == (MVWorldObjectClient *)0x0) goto code_?;
  if (this_02[1].fields._.OnInputLinkChanged !=
      (Action_1_System_Collections_Generic_List_1_MV_WorldObject_Link_ *)0x0) {
    this_02 = (MVWorldObjectClient *)this_02[1].fields._.OnInputLinkChanged;
    if (this_02 == (MVWorldObjectClient *)0x0) goto code_?;
    pAVar2 = this_02[1].fields._.OnInputLinkChanged;
    while (pAVar2 != (Action_1_System_Collections_Generic_List_1_MV_WorldObject_Link_ *)0x0) {
      this_02 = (MVWorldObjectClient *)this_02[1].fields._.OnInputLinkChanged;
      if (this_02 == (MVWorldObjectClient *)0x0) {
        FUN_?();
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pAVar2 = this_02[1].fields._.OnInputLinkChanged;
    }
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVMovable>__Dispose__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVMovable>__MoveNext__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVMovable>__get_Current__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<MVMovable>__GetEnumerator__);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(longlong *)&this_02[1].fields._.position.z == 0) {
    return;
  }
  pMVar3 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if ((pMVar3 == (MVWorldObjectClientManager *)0x0) ||
     (pMVar4 = (pMVar3->fields)._MoveableController_k__BackingField,
     pMVar4 == (MoveableController *)0x0)) goto code_?;
  fVar5 = (pMVar4->fields).time;
  if (this_02[1].fields._.field_0x74 == '\0') {
    if (directionFactor < 0.0) {
      fVar6 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                         ((MethodInfo *)0x0);
      fVar5 = fVar5 - fVar6;
    }
    this_02[1].fields._.ownerActorNr = 0;
    this_02[1].fields._.previewOwnerProfileId = 0;
    if (*(float *)((longlong)&this_02[1].fields._.objectLinkRefs + 4) != 0.0) {
      fVar6 = (float)FUN_?();
      this_02[1].fields._.ownerActorNr = (int32_t)fVar6;
      fVar6 = fVar6 / *(float *)((longlong)&this_02[1].fields._.objectLinkRefs + 4);
      this_02[1].fields._.previewOwnerProfileId = (int32_t)fVar6;
      if (_UNK_? < *(float *)((longlong)&this_02[1].fields._.objectLinkRefs + 4)) {
        this_02[1].fields._.previewOwnerProfileId =
             (int32_t)(TypeRef__System__Activator__T._0_4_ - fVar6);
      }
    }
  }
  else {
    this_02[1].fields._.ownerActorNr =
         (int32_t)((float)this_02[1].fields._.previewOwnerProfileId *
                  *(float *)((longlong)&this_02[1].fields._.objectLinkRefs + 4));
  }
  puVar7 = (undefined8 *)
            (*(this_02->klass->vtable).get_WorldPosition_1.methodPtr)
                      (&VStack_8,this_02,(this_02->klass->vtable).get_WorldPosition_1.method);
  uStack_9 = *puVar7;
  fVar6 = *(float *)(puVar7 + 1);
  if (this_02[1].fields._.OnInputLinkChanged !=
      (Action_1_System_Collections_Generic_List_1_MV_WorldObject_Link_ *)0x0) {
    pMVar10 = this_02[1].fields._.OnInputLinkChanged[3].monitor;
    if (pMVar10 == (MonitorData *)0x0) goto code_?;
    puVar7 = (undefined8 *)(**(code **)(*(longlong *)pMVar10 + 0x2c8))(&VStack_11);
    VStack_8._0_8_ = *puVar7;
    fVar6 = *(float *)(puVar7 + 1);
    pAVar2 = this_02[1].fields._.OnInputLinkChanged;
    if ((pAVar2 == (Action_1_System_Collections_Generic_List_1_MV_WorldObject_Link_ *)0x0) ||
       (pMVar12 = (MVWorldObjectClient *)pAVar2[3].monitor, pMVar12 == (MVWorldObjectClient *)0x0))
    goto code_?;
    pQVar13 = MVWorldObjectClient::MVWorldObjectClient_get_WorldRotation
                        ((Quaternion *)auStack_14,pMVar12,(MethodInfo *)0x0);
    pLVar15 = *(List_1_MV_WorldObject_Link_ **)pQVar13;
    puVar16 = *(undefined1 **)&pQVar13->z;
    puVar7 = (undefined8 *)
              (*(this_02->klass->vtable).get_WorldPosition_1.methodPtr)
                        (auStack_17,this_02,(this_02->klass->vtable).get_WorldPosition_1.method);
    VStack_11._0_8_ = *puVar7;
    fVar18 = *(float *)(puVar7 + 1);
    pAVar2 = this_02[1].fields._.OnInputLinkChanged;
    if (pAVar2 == (Action_1_System_Collections_Generic_List_1_MV_WorldObject_Link_ *)0x0)
    goto code_?;
    puVar7 = (undefined8 *)
              (*(code *)pAVar2->klass[1].rgctx_data)
                        (auStack_17,pAVar2,pAVar2->klass[1]._1.typeHierarchy);
    VStack_11.z = fVar18 - *(float *)(puVar7 + 1);
    VStack_11.y = VStack_11.y - (float)((ulonglong)*puVar7 >> 0x20);
    VStack_11.x = VStack_11.x - (float)*puVar7;
    auStack_14._0_8_ = pLVar15;
    auStack_14._8_8_ = puVar16;
    pVVar19 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::Quaternion_op_Multiply_1
                        ((Vector3 *)auStack_17,(Quaternion *)auStack_14,&VStack_11,(MethodInfo *)0x0
                        );
    uVar20._0_4_ = pVVar19->x;
    uVar20._4_4_ = pVVar19->y;
    fVar6 = fVar6 + pVVar19->z;
    uStack_9 = CONCAT44(VStack_8.y + uVar20._4_4_,VStack_8.x + (float)uVar20);
    VStack_8._0_8_ = uVar20;
  }
  if (_UNK_? < *(float *)((longlong)&this_02[1].fields._.objectLinkRefs + 4)) {
    if (*(int *)&(TypeInfo__MVMovable->_1).field_0x1c == 0) {
      FUN_?(TypeInfo__MVMovable);
    }
    TypeInfo__MVMovable->static_fields->direction = 1.0;
    pMVar21 = this_02->klass;
    _Var27 = pMVar21[1]._0.byval_arg.data;
    uVar22._0_2_ = pMVar21[1]._0.byval_arg.attrs;
    uVar22._2_1_ = pMVar21[1]._0.byval_arg.type;
    uVar22._3_5_ = *(undefined5 *)&pMVar21[1]._0.byval_arg.field_0xb;
    fVar18 = *(float *)((longlong)&this_02[1].fields._.objectLinkRefs + 4);
    piVar23 = &this_02[1].fields._.ownerActorNr;
    if ((float)*piVar23 <= fVar18 && fVar18 != (float)*piVar23) {
      puVar7 = (undefined8 *)(*(code *)_Var27)(auStack_17,this_02,uVar22);
      fVar18 = (float)this_02[1].fields._.ownerActorNr;
      VStack_8._0_8_ = *puVar7;
      fVar24 = *(float *)(puVar7 + 1);
      this_02[1].fields._.inputLinkRefs =
           (List_1_MV_WorldObject_Link_ *)CONCAT44(VStack_8.y * fVar18,VStack_8.x * fVar18);
      *(float *)&this_02[1].fields._.objectLinkRefs = fVar24 * fVar18;
    }
    else {
      puVar7 = (undefined8 *)(*(code *)_Var27)();
      fVar18 = *(float *)((longlong)&this_02[1].fields._.objectLinkRefs + 4);
      VStack_8._0_8_ = *puVar7;
      fVar24 = (fVar18 + fVar18) - (float)this_02[1].fields._.ownerActorNr;
      fVar18 = *(float *)(puVar7 + 1);
      this_02[1].fields._.inputLinkRefs =
           (List_1_MV_WorldObject_Link_ *)CONCAT44(fVar24 * VStack_8.y,fVar24 * VStack_8.x);
      *(float *)&this_02[1].fields._.objectLinkRefs = fVar24 * fVar18;
      if (*(int *)&(TypeInfo__MVMovable->_1).field_0x1c == 0) {
        FUN_?();
      }
      TypeInfo__MVMovable->static_fields->direction = -1.0;
    }
    if (0.0 < directionFactor) {
      pMVar3 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if ((pMVar3 == (MVWorldObjectClientManager *)0x0) ||
         (pMVar4 = (pMVar3->fields)._MoveableController_k__BackingField,
         pMVar4 == (MoveableController *)0x0)) goto code_?;
      this_01 = (pMVar4->fields).Velocities;
      key = (this_02->fields).goId;
      if (*(int *)&(TypeInfo__MVMovable->_1).field_0x1c == 0) {
        FUN_?(TypeInfo__MVMovable);
      }
      fVar18 = TypeInfo__MVMovable->static_fields->direction;
      pMVar21 = this_02->klass;
      uVar25._0_2_ = pMVar21[1]._0.byval_arg.attrs;
      uVar25._2_1_ = pMVar21[1]._0.byval_arg.type;
      uVar25._3_5_ = *(undefined5 *)&pMVar21[1]._0.byval_arg.field_0xb;
      plVar26 = (longlong *)(*(code *)pMVar21[1]._0.byval_arg.data)(auStack_17,this_02,uVar25);
      pLVar15 = (List_1_MV_WorldObject_Link_ *)*plVar26;
      fVar24 = *(float *)(plVar26 + 1);
      fVar27 = UnityEngine.CoreModule.dll::UnityEngine::Time::Time_1_get_fixedDeltaTime
                         ((MethodInfo *)0x0);
      auStack_17 = (undefined1  [8])pLVar15;
      if (this_01 == (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)0x0)
      goto code_?;
      VStack_8.y = fVar18 * (float)((ulonglong)pLVar15 >> 0x20) * directionFactor * fVar27;
      VStack_8.x = fVar18 * SUB84(pLVar15,0) * directionFactor * fVar27;
      VStack_8.z = fVar18 * fVar24 * directionFactor * fVar27;
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::Vector3]::
      Dictionary_2_System_Int32_UnityEngine_Vector3__TryInsert
                (this_01,key,&VStack_8,(InsertionBehavior__Enum)CONCAT71(_Var27._1_7_,1),
                 MethodInfo__System__Collections__Generic__Dictionary<int,_UnityEngine::Vector3>__set_Item_int__UnityEngine__Vector3_
                 ->klass->rgctx_data[0x22].method);
    }
  }
  else {
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Vector3);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    fVar18 = (TypeInfo__UnityEngine__Vector3->static_fields->zeroVector).z;
    this_02[1].fields._.inputLinkRefs =
         *(List_1_MV_WorldObject_Link_ **)&TypeInfo__UnityEngine__Vector3->static_fields->zeroVector
    ;
    *(float *)&this_02[1].fields._.objectLinkRefs = fVar18;
  }
  plVar26 = *(longlong **)&this_02[1].fields._.position.z;
  auStack_17 = (undefined1  [8])this_02[1].fields._.inputLinkRefs;
  uVar28._0_4_ = (float)uStack_9 + SUB84(auStack_17,0);
  if (plVar26 != (longlong *)0x0) {
    uVar28._4_4_ = uStack_9._4_4_ + (float)((ulonglong)auStack_17 >> 0x20);
    VStack_8._0_8_ = uVar28;
    VStack_8.z = fVar6 + *(float *)&this_02[1].fields._.objectLinkRefs;
    (**(code **)(*plVar26 + 0x2d8))(plVar26,&VStack_8,*(undefined8 *)(*plVar26 + 0x2e0));
    fVar6 = *(float *)((longlong)&this_02[1].fields._.runTimeData + 4);
    auStack_17 = (undefined1  [8])this_02[1].fields._.data;
    VStack_8.z = fVar6 * *(float *)&this_02[1].fields._.runTimeData * fVar5;
    VStack_8.y = fVar6 * (float)((ulonglong)auStack_17 >> 0x20) * fVar5;
    VStack_8.x = fVar6 * SUB84(auStack_17,0) * fVar5;
    FUN_?(&VStack_8);
    fVar5 = *(float *)((longlong)&this_02[1].fields._.runTimeData + 4);
    auStack_17 = (undefined1  [8])this_02[1].fields._.data;
    fVar24 = fVar5 * *(float *)&this_02[1].fields._.runTimeData;
    fVar18 = fVar5 * (float)((ulonglong)auStack_17 >> 0x20);
    fVar5 = fVar5 * SUB84(auStack_17,0);
    VStack_8.y = fVar18;
    VStack_8.x = fVar5;
    VStack_8.z = fVar24;
    fVar6 = (float)FUN_?(&VStack_8);
    if (_UNK_? < fVar6) {
      VStack_8.z = fVar24 / fVar6;
      VStack_8.y = fVar18 / fVar6;
      VStack_8.x = fVar5 / fVar6;
    }
    else {
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Vector3);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pVVar29 = TypeInfo__UnityEngine__Vector3->static_fields;
      VStack_8.x = (pVVar29->zeroVector).x;
      VStack_8.y = (pVVar29->zeroVector).y;
      VStack_8.z = (pVVar29->zeroVector).z;
    }
    auStack_17 = (undefined1  [8])0x0;
    uStack_30 = (undefined1 *)0x0;
    pcVar1 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
      uVar20 = func_?(&UNK_?);
      FUN_?(uVar20,0);
code_?:
      FUN_?();
      FUN_?();
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pcRam_? = pcVar1;
    (*pcRam_?)();
    pQVar13 = MVWorldObjectClient::MVWorldObjectClient_get_WorldRotation
                        ((Quaternion *)auStack_14,this_02,(MethodInfo *)0x0);
    fVar5 = pQVar13->x;
    fVar6 = pQVar13->y;
    fVar18 = pQVar13->z;
    fVar24 = pQVar13->w;
    if (this_02[1].fields._.timestamp != -1) {
      pAVar2 = this_02[1].fields._.OnInputLinkChanged;
      if ((pAVar2 == (Action_1_System_Collections_Generic_List_1_MV_WorldObject_Link_ *)0x0) ||
         (pMVar12 = (MVWorldObjectClient *)pAVar2[3].monitor, pMVar12 == (MVWorldObjectClient *)0x0))
      goto code_?;
      pQVar13 = MVWorldObjectClient::MVWorldObjectClient_get_WorldRotation
                          ((Quaternion *)auStack_14,pMVar12,(MethodInfo *)0x0);
      fVar5 = pQVar13->x;
      fVar6 = pQVar13->y;
      fVar18 = pQVar13->z;
      fVar24 = pQVar13->w;
    }
    if (this_02[1].fields._.field_0x74 == '\0') {
      pMVar12 = *(MVWorldObjectClient **)&this_02[1].fields._.position.z;
      uVar31 = auStack_17._0_4_;
      uVar32 = auStack_17._4_4_;
      fVar27 = (float)auStack_17._4_4_ * fVar18;
      auStack_17._4_4_ =
           ((float)auStack_17._4_4_ * fVar24 + uStack_30._4_4_ * fVar6 +
           (float)auStack_17._0_4_ * fVar18) - (float)uStack_30 * fVar5;
      auStack_17._0_4_ =
           ((float)auStack_17._0_4_ * fVar24 + uStack_30._4_4_ * fVar5 + (float)uStack_30 * fVar6)
           - fVar27;
      uStack_30 = (undefined1 *)
                  CONCAT44(((uStack_30._4_4_ * fVar24 - (float)uVar31 * fVar5) -
                           (float)uVar32 * fVar6) - (float)uStack_30 * fVar18,
                           ((float)uStack_30 * fVar24 + uStack_30._4_4_ * fVar18 +
                           (float)uVar32 * fVar5) - (float)uVar31 * fVar6);
      if (pMVar12 == (MVWorldObjectClient *)0x0) goto code_?;
      auStack_14._0_8_ = auStack_17;
      auStack_14._8_8_ = uStack_30;
      MVWorldObjectClient::MVWorldObjectClient_set_WorldRotation
                (pMVar12,(Quaternion *)auStack_14,(MethodInfo *)0x0);
    }
    lVar33 = *(longlong *)&this_02[1].fields._.position.z;
    if (lVar33 != 0) {
      if (movableGameObjectID != *(int *)(lVar33 + 0x10)) {
        auStack_34._0_8_ = this_02[1].fields._.outputLinkRefs;
        if ((List_1_MV_WorldObject_Link_ *)auStack_34._0_8_ == (List_1_MV_WorldObject_Link_ *)0x0)
        goto code_?;
        if (iRam_? != 0) {
          uVar35 = (uint)((ulonglong)auStack_14 >> 0xc);
          uVar36 = (ulonglong)((uVar35 & 0x1fffff) >> 6);
          do {
            uVar37 = *(ulonglong *)(uVar36 * 8 + 0xADDR);
            puVar38 = (ulonglong *)(uVar36 * 8 + 0xADDR);
            LOCK();
            bVar39 = uVar37 == *puVar38;
            if (bVar39) {
              *puVar38 = uVar37 | 1L << (uVar35 & 0x3f);
            }
            UNLOCK();
          } while (!bVar39);
        }
        auStack_14._8_8_ =
             (ulonglong)(uint)(((List_1_MV_WorldObject_Link_ *)auStack_34._0_8_)->fields)._version
             << 0x20;
        uStack_40 = 0;
        auStack_34._8_8_ = auStack_14._8_8_;
        pMStack_41 = (MVMovable *)0x0;
        auStack_17 = (undefined1  [8])0x0;
        uStack_30 = auStack_34;
        auStack_14._0_8_ = auStack_34._0_8_;
        while (bVar42 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::
                        Object]::List_1_T_Enumerator_System_Object__MoveNext
                                  ((List_1_T_Enumerator_System_Object_ *)auStack_34,
                                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<MVMovable>__MoveNext__
                                  ), bVar42 != 0) {
          if (pMStack_41 == (MVMovable *)0x0) goto code_?;
          MVMovable::MVMovable_Move
                    (pMStack_41,directionFactor,movableGameObjectID,(MethodInfo *)0x0);
        }
      }
      return;
    }
  }
code_?:
  FUN_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* MoveableController() */

void Assembly-CSharp.dll::MoveableController::MoveableController__ctor
               (MoveableController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_UnityEngine::Vector3>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovable>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<int,_UnityEngine::Vector3>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__Dictionary<int,_MVMovable>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UpdateController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pDVar1 = (Dictionary_2_System_Int32_UnityEngine_Vector3_ *)
           FUN_?(
                        TypeInfo__System__Collections__Generic__Dictionary<int,_UnityEngine::Vector3>
                        );
  pEVar2 = mscorlib.dll::System::Collections::Generic::EqualityComparer`1[System::Int32]::
           EqualityComparer_1_System_Int32__get_Default
                     (MethodInfo__System__Collections__Generic__Dictionary<int,_UnityEngine::Vector3>__Dictionary__
                      ->klass->rgctx_data->method->klass->rgctx_data[3].method);
  if ((pEVar2 != (EqualityComparer_1_System_Int32_ *)0x0) &&
     (bVar3 = iRam_? != 0,
     (pDVar1->fields)._comparer = (IEqualityComparer_1_System_Int32_ *)0x0, bVar3)) {
    uVar4 = (uint)((ulonglong)&(pDVar1->fields)._comparer >> 0xc);
    lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
    do {
      uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
      puVar7 = (ulonglong *)(lVar5 + 0xADDR);
      LOCK();
      bVar3 = uVar6 == *puVar7;
      if (bVar3) {
        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar3);
  }
  bVar3 = iRam_? != 0;
  (this->fields).Velocities = pDVar1;
  if (bVar3) {
    uVar4 = (uint)((ulonglong)&this->fields >> 0xc);
    lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
    do {
      uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
      puVar7 = (ulonglong *)(lVar5 + 0xADDR);
      LOCK();
      bVar3 = uVar6 == *puVar7;
      if (bVar3) {
        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar3);
  }
  pDVar8 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *)
           FUN_?(TypeInfo__System__Collections__Generic__Dictionary<int,_MVMovable>);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (pDVar8,
             MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovable>__Dictionary__);
  bVar3 = iRam_? != 0;
  (this->fields).MoveControllers = (Dictionary_2_System_Int32_MVMovable_ *)pDVar8;
  if (bVar3) {
    uVar4 = (uint)((ulonglong)&(this->fields).MoveControllers >> 0xc);
    lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
    do {
      uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
      puVar7 = (ulonglong *)(lVar5 + 0xADDR);
      LOCK();
      bVar3 = uVar6 == *puVar7;
      if (bVar3) {
        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar3);
  }
  pDVar8 = (Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef_ *)
           FUN_?(TypeInfo__System__Collections__Generic__Dictionary<int,_MVMovable>);
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32,UnityEngine::TextCore::Text
  ::TextResourceManager+FontAssetRef]::
  Dictionary_2_System_Int32_UnityEngine_TextCore_Text_TextResourceManager_FontAssetRef___ctor
            (pDVar8,
             MethodInfo__System__Collections__Generic__Dictionary<int,_MVMovable>__Dictionary__);
  bVar3 = iRam_? != 0;
  (this->fields).CubeModelMovableMap = (Dictionary_2_System_Int32_MVMovable_ *)pDVar8;
  if (bVar3) {
    uVar4 = (uint)((ulonglong)&(this->fields).CubeModelMovableMap >> 0xc);
    lVar5 = (ulonglong)((uVar4 & 0x1fffff) >> 6) * 8;
    do {
      uVar6 = *(ulonglong *)(lVar5 + 0xADDR);
      puVar7 = (ulonglong *)(lVar5 + 0xADDR);
      LOCK();
      bVar3 = uVar6 == *puVar7;
      if (bVar3) {
        *puVar7 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (!bVar3);
  }
  MoveableController_SyncTimeToServer(this,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__UpdateController->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<PriorityDataFixedUpdate>__Add_PriorityDataFixedUpdate_
                  ,0,1,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UpdateController);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (iRam_? != 0) {
    uVar4 = (uint)((ulonglong)&uStack_9 >> 0xc);
    puVar7 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar10 = *puVar7;
      LOCK();
      uVar6 = *puVar7;
      if (uVar10 == uVar6) {
        *puVar7 = uVar10 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (uVar10 != uVar6);
  }
  uStack_11 = 0;
  uStack_12 = 1;
  uStack_9 = this;
  if (*(int *)&(TypeInfo__UpdateController->_1).field_0x1c == 0) {
    FUN_?(TypeInfo__UpdateController);
  }
  pLVar13 = TypeInfo__UpdateController->static_fields->fixedUpdateBuckets;
  if (pLVar13 != (List_1_PriorityDataFixedUpdate___Array *)0x0) {
    if ((int)pLVar13->max_length == 0) {
      FUN_?();
      pcVar14 = (code *)swi(3);
      (*pcVar14)();
      return;
    }
    if (pLVar13->vector[0] != (List_1_PriorityDataFixedUpdate_ *)0x0) {
      uStack_15 = (undefined4)uStack_9;
      uStack_16 = uStack_9._4_4_;
      uStack_17 = uStack_11;
      uStack_18 = uStack_12;
      FUN_?(pLVar13->vector[0],&uStack_15,
                    MethodInfo__System__Collections__Generic__List<PriorityDataFixedUpdate>__Add_PriorityDataFixedUpdate_
                   );
      return;
    }
  }
  FUN_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}

