
/* Void EndMuzzleEdit() */

void Assembly-CSharp.dll::Assets::Scripts::WorldObjectTypes::CustomGun::MVCustomGunBlueprint::
     MVCustomGunBlueprint_EndMuzzleEdit(MVCustomGunBlueprint *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__Assets__UGUI__Desktop__Scripts__Shared__CubeModeling__CubeModelEditResetPosition
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__Assets__UGUI__Desktop__Scripts__Shared__CubeModeling__CubeModelEditResetRotation
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary_System__Collections__Generic__IDictionary<System::Object,_System::Object>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__Assets__Scripts__WorldObjectTypes__CustomGun__MVCustomGunBlueprint__ResetMuzzlePosition__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__Assets__Scripts__WorldObjectTypes__CustomGun__MVCustomGunBlueprint__ResetMuzzleRotation__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__RTG__MonoSingleton<RTG::RTGApp>__get_Get__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__MonoSingleton<RTG::RTGApp>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_MuzzleDirection);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_MuzzlePosition);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_itemData);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields).muzzlePoint;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pGVar1 != (GameObject *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pGVar1->fields)._.m_CachedPtr != (void *)0x0) {
      pMVar2 = (this->fields)._.itemBase;
      if ((pMVar2 != (MVEditablePickupItemBase *)0x0) &&
         (pDVar3 = (pMVar2->fields)._._._._.data,
         pDVar3 != (Dictionary_2_System_Object_System_Object_ *)0x0)) {
        pUVar4 = (UnityAction *)
                 mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                 Object]::Dictionary_2_System_Object_System_Object__get_Item
                           (pDVar3,(Object *)StringLiteral_itemData,
                            MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                           );
        pDVar3 = (Dictionary_2_System_Object_System_Object_ *)
                  FUN_?(
                               TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                               );
        pUVar5 = (UnityAction *)0x0;
        pUVar6 = pUVar5;
        if (pUVar4 != (UnityAction *)0x0) {
          bVar7 = (
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                  ->_1).naturalAligment;
          if (((pUVar4->klass->_1).naturalAligment < bVar7) ||
             (pUVar6 = pUVar4,
             (Dictionary_2_System_Object_System_Object___Class *)
             (pUVar4->klass->_1).typeHierarchy[(ulonglong)bVar7 - 1] !=
             TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
            FUN_?(pUVar4);
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
        }
        method_01 = MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary_System__Collections__Generic__IDictionary<System::Object,_System::Object>_
                    ->klass->rgctx_data[8].method;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object___ctor_4
                  (pDVar3,(IDictionary_2_System_Object_System_Object_ *)pUVar6,
                   (IEqualityComparer_1_System_Object_ *)0x0,method_01);
        pGVar1 = (this->fields).muzzlePoint;
        if ((pGVar1 != (GameObject *)0x0) &&
           (pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                                (pGVar1,(MethodInfo *)0x0), pTVar9 != (Transform *)0x0)) {
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          QStack_10.x = 0.0;
          QStack_10.y = 0.0;
          QStack_10._8_8_ = QStack_10._8_8_ & 0xffffffff00000000;
          pvVar11 = (pTVar9->fields)._._.m_CachedPtr;
          if (pvVar11 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar9,(MethodInfo *)0x0);
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pcVar8 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0)) {
            uVar12 = func_?(&UNK_?);
            FUN_?(uVar12,0);
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          pcRam_? = pcVar8;
          (*pcRam_?)(pvVar11,&QStack_10);
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__System__Single);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          method_00 = (MethodInfo *)FUN_?(TypeInfo__System__Single,3);
          if (method_00 != (MethodInfo *)0x0) {
            if (*(int *)&method_00->name != 0) {
              *(float *)&method_00->klass = QStack_10.x;
              if (1 < *(uint *)&method_00->name) {
                *(float *)((longlong)&method_00->klass + 4) = QStack_10.y;
                if (2 < *(uint *)&method_00->name) {
                  *(float *)&method_00->return_type = QStack_10.z;
                  if (pDVar3 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
                    uVar12 = CONCAT71((int7)((ulonglong)method_01 >> 8),1);
                    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                    Object]::Dictionary_2_System_Object_System_Object__TryInsert
                              (pDVar3,(Object *)StringLiteral_MuzzlePosition,(Object *)method_00,
                               (InsertionBehavior__Enum)uVar12,
                               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                               ->klass->rgctx_data[0x22].method);
                    pGVar1 = (this->fields).muzzlePoint;
                    if ((pGVar1 != (GameObject *)0x0) &&
                       (pTVar9 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                  GameObject_get_transform(pGVar1,(MethodInfo *)0x0),
                       pTVar9 != (Transform *)0x0)) {
                      if (cRam_? == '\0') {
                        FUN_?(&
                                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                     );
                        LOCK();
                        UNLOCK();
                        cRam_? = '\x01';
                      }
                      QStack_13.x = 0.0;
                      QStack_13.y = 0.0;
                      QStack_13.z = 0.0;
                      QStack_13.w = 0.0;
                      pvVar11 = (pTVar9->fields)._._.m_CachedPtr;
                      if (pvVar11 == (void *)0x0) {
                        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                        ThrowHelper_2_ThrowNullReferenceException
                                  ((Object *)pTVar9,(MethodInfo *)0x0);
                        pcVar8 = (code *)swi(3);
                        (*pcVar8)();
                        return;
                      }
                      pcVar8 = pcRam_?;
                      if ((pcRam_? == (code *)0x0) &&
                         (pcVar8 = (code *)FUN_?(&UNK_?), pcVar8 == (code *)0x0))
                      {
                        uVar12 = func_?(&UNK_?);
                        FUN_?(uVar12,0);
                        pcVar8 = (code *)swi(3);
                        (*pcVar8)();
                        return;
                      }
                      pcRam_? = pcVar8;
                      (*pcRam_?)(pvVar11,&QStack_13);
                      QStack_10.x = QStack_13.x;
                      QStack_10.y = QStack_13.y;
                      QStack_10.z = QStack_13.z;
                      QStack_10.w = QStack_13.w;
                      pVVar14 = UnityEngine.CoreModule.dll::UnityEngine::Quaternion::
                                Quaternion_get_eulerAngles
                                          ((Vector3 *)&QStack_13,&QStack_10,method_00);
                      QStack_10.x = pVVar14->x;
                      QStack_10.y = pVVar14->y;
                      fVar15 = pVVar14->z;
                      if (cRam_? == '\0') {
                        FUN_?(&TypeInfo__System__Single);
                        LOCK();
                        UNLOCK();
                        cRam_? = '\x01';
                      }
                      value = (Object *)FUN_?(TypeInfo__System__Single,3);
                      if (value != (Object *)0x0) {
                        if (*(int *)&value[1].monitor != 0) {
                          *(float *)&value[2].klass = QStack_10.x;
                          if (1 < *(uint *)&value[1].monitor) {
                            *(float *)((longlong)&value[2].klass + 4) = QStack_10.y;
                            if (2 < *(uint *)&value[1].monitor) {
                              *(float *)&value[2].monitor = fVar15;
                              uVar12 = CONCAT71((int7)((ulonglong)uVar12 >> 8),1);
                              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                              Object,System::Object]::
                              Dictionary_2_System_Object_System_Object__TryInsert
                                        (pDVar3,(Object *)StringLiteral_MuzzleDirection,value,
                                         (InsertionBehavior__Enum)uVar12,
                                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                                         ->klass->rgctx_data[0x22].method);
                              this_01 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                                         *)FUN_?(
                                                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                                  );
                              mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                              Object,UnityEngine::UIElements::UIR::
                              UIRenderDevice+DisableForceGammaMaterial]::
                              Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
                                        (this_01,
                                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                                        );
                              if (this_01 !=
                                  (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                                   *)0x0) {
                                mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                                Object,System::Object]::
                                Dictionary_2_System_Object_System_Object__TryInsert
                                          ((Dictionary_2_System_Object_System_Object_ *)this_01,
                                           (Object *)StringLiteral_itemData,(Object *)pDVar3,
                                           (InsertionBehavior__Enum)
                                           CONCAT71((int7)((ulonglong)uVar12 >> 8),2),
                                           MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                                           ->klass->rgctx_data[0x22].method);
                                pMVar2 = (this->fields)._.itemBase;
                                if (pMVar2 != (MVEditablePickupItemBase *)0x0) {
                                  (*(pMVar2->klass->vtable).PartialUpdateWOData.methodPtr)
                                            (pMVar2,this_01,
                                             (pMVar2->klass->vtable).PartialUpdateWOData.method);
                                  this_02 = MVGameControllerBase::
                                            MVGameControllerBase_get_OperationRequests
                                                      ((MethodInfo *)0x0);
                                  pMVar2 = (this->fields)._.itemBase;
                                  if ((pMVar2 != (MVEditablePickupItemBase *)0x0) &&
                                     (this_02 != (MVNetworkGame_OperationRequests *)0x0)) {
                                    MVNetworkGame+OperationRequests::
                                    MVNetworkGame_OperationRequests_UpdateWorldObjectDataPartial_1
                                              (this_02,(pMVar2->fields)._._._._.id,
                                               (Dictionary_2_System_Object_System_Object_ *)this_01,
                                               (MethodInfo *)0x0);
                                    pOVar16 = (this->fields).transformGizmo;
                                    if ((pOVar16 != (ObjectTransformGizmo *)0x0) &&
                                       (this_00 = (pOVar16->fields)._._gizmo, this_00 != (Gizmo *)0x0
                                       )) {
                                      RTG::Gizmo::Gizmo_SetEnabled(this_00,0,(MethodInfo *)0x0);
                                      pGVar1 = (this->fields).muzzlePoint;
                                      if (pGVar1 != (GameObject *)0x0) {
                                        UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                                        GameObject_SetActive(pGVar1,0,(MethodInfo *)0x0);
                                        if (*(int *)&(TypeInfo__RTG__MonoSingleton<RTG::RTGApp>->_1)
                                                     .field_0x1c == 0) {
                                          FUN_?();
                                        }
                                        this_03 = (Behaviour *)
                                                  RTG::MonoSingleton`1[System::Object]::
                                                  MonoSingleton_1_System_Object__get_Get
                                                            (
                                                  MethodInfo__RTG__MonoSingleton<RTG::RTGApp>__get_Get__
                                                  );
                                        if (this_03 != (Behaviour *)0x0) {
                                          UnityEngine.CoreModule.dll::UnityEngine::Behaviour::
                                          Behaviour_set_enabled(this_03,0,(MethodInfo *)0x0);
                                          if ((this->fields).muzzleBoundCheckRoutine !=
                                              (IEnumerator *)0x0) {
                                            Coroutines::Coroutines_Stop
                                                      ((this->fields).muzzleBoundCheckRoutine,
                                                       (MethodInfo *)0x0);
                                          }
                                          bVar17 = iRam_? != 0;
                                          (this->fields).muzzleBoundCheckRoutine =
                                               (IEnumerator *)0x0;
                                          if (bVar17) {
                                            uVar18 = (uint)((ulonglong)
                                                            &(this->fields).muzzleBoundCheckRoutine
                                                           >> 0xc);
                                            uVar19 = (ulonglong)((uVar18 & 0x1fffff) >> 6);
                                            do {
                                              uVar20 = *(ulonglong *)(uVar19 * 8 + 0xADDR);
                                              puVar21 = (ulonglong *)(uVar19 * 8 + 0xADDR);
                                              LOCK();
                                              bVar17 = uVar20 == *puVar21;
                                              if (bVar17) {
                                                *puVar21 = uVar20 | 1L << (uVar18 & 0x3f);
                                              }
                                              UNLOCK();
                                            } while (!bVar17);
                                          }
                                          pUVar6 = 
                                                  TypeInfo__Assets__UGUI__Desktop__Scripts__Shared__CubeModeling__CubeModelEditResetPosition
                                                  ->static_fields->OnResetPosition;
                                          pNVar22 = (NavMesh_OnNavMeshPreUpdate *)
                                                    FUN_?(
                                                  TypeInfo__UnityEngine__Events__UnityAction);
                                          UnityEngine.AIModule.dll::UnityEngine::AI::
                                          NavMesh+OnNavMeshPreUpdate::
                                          NavMesh_OnNavMeshPreUpdate__ctor
                                                    (pNVar22,(Object *)this,
                                                                                                          
                                                  MethodInfo__Assets__Scripts__WorldObjectTypes__CustomGun__MVCustomGunBlueprint__ResetMuzzlePosition__
                                                  ,(MethodInfo *)0x0);
                                          pUVar6 = (UnityAction *)
                                                    mscorlib.dll::System::Delegate::Delegate_Remove
                                                              ((Delegate *)pUVar6,
                                                               (Delegate *)pNVar22,(MethodInfo *)0x0
                                                              );
                                          if (pUVar6 == (UnityAction *)0x0) {
                                            TypeInfo__Assets__UGUI__Desktop__Scripts__Shared__CubeModeling__CubeModelEditResetPosition
                                            ->static_fields->OnResetPosition = (UnityAction *)0x0;
                                          }
                                          else {
                                            pUVar4 = pUVar5;
                                            if (pUVar6->klass ==
                                                TypeInfo__UnityEngine__Events__UnityAction) {
                                              pUVar4 = pUVar6;
                                            }
                                            if (pUVar4 == (UnityAction *)0x0) {
                                              FUN_?(pUVar6,
                                                  TypeInfo__UnityEngine__Events__UnityAction);
                                              pcVar8 = (code *)swi(3);
                                              (*pcVar8)();
                                              return;
                                            }
                                            TypeInfo__Assets__UGUI__Desktop__Scripts__Shared__CubeModeling__CubeModelEditResetPosition
                                            ->static_fields->OnResetPosition = pUVar4;
                                            pUVar4 = pUVar5;
                                            if (pUVar6->klass ==
                                                TypeInfo__UnityEngine__Events__UnityAction) {
                                              pUVar4 = pUVar6;
                                            }
                                            if (pUVar4 == (UnityAction *)0x0) {
                                              FUN_?(pUVar6);
                                              pcVar8 = (code *)swi(3);
                                              (*pcVar8)();
                                              return;
                                            }
                                          }
                                          if (iRam_? != 0) {
                                            uVar18 = (uint)((ulonglong)
                                                                                                                        
                                                  TypeInfo__Assets__UGUI__Desktop__Scripts__Shared__CubeModeling__CubeModelEditResetPosition
                                                  ->static_fields >> 0xc);
                                            uVar19 = (ulonglong)((uVar18 & 0x1fffff) >> 6);
                                            do {
                                              uVar20 = *(ulonglong *)(uVar19 * 8 + 0xADDR);
                                              puVar21 = (ulonglong *)(uVar19 * 8 + 0xADDR);
                                              LOCK();
                                              bVar17 = uVar20 == *puVar21;
                                              if (bVar17) {
                                                *puVar21 = uVar20 | 1L << (ulonglong)(uVar18 & 0x3f);
                                              }
                                              UNLOCK();
                                            } while (!bVar17);
                                          }
                                          pUVar6 = 
                                                  TypeInfo__Assets__UGUI__Desktop__Scripts__Shared__CubeModeling__CubeModelEditResetRotation
                                                  ->static_fields->OnResetRotation;
                                          pNVar22 = (NavMesh_OnNavMeshPreUpdate *)
                                                    FUN_?(
                                                  TypeInfo__UnityEngine__Events__UnityAction);
                                          UnityEngine.AIModule.dll::UnityEngine::AI::
                                          NavMesh+OnNavMeshPreUpdate::
                                          NavMesh_OnNavMeshPreUpdate__ctor
                                                    (pNVar22,(Object *)this,
                                                                                                          
                                                  MethodInfo__Assets__Scripts__WorldObjectTypes__CustomGun__MVCustomGunBlueprint__ResetMuzzleRotation__
                                                  ,(MethodInfo *)0x0);
                                          pUVar6 = (UnityAction *)
                                                    mscorlib.dll::System::Delegate::Delegate_Remove
                                                              ((Delegate *)pUVar6,
                                                               (Delegate *)pNVar22,(MethodInfo *)0x0
                                                              );
                                          if (pUVar6 == (UnityAction *)0x0) {
                                            TypeInfo__Assets__UGUI__Desktop__Scripts__Shared__CubeModeling__CubeModelEditResetRotation
                                            ->static_fields->OnResetRotation = (UnityAction *)0x0;
                                          }
                                          else {
                                            pUVar4 = pUVar5;
                                            if (pUVar6->klass ==
                                                TypeInfo__UnityEngine__Events__UnityAction) {
                                              pUVar4 = pUVar6;
                                            }
                                            if (pUVar4 == (UnityAction *)0x0) {
                                              FUN_?(pUVar6,
                                                  TypeInfo__UnityEngine__Events__UnityAction);
                                              pcVar8 = (code *)swi(3);
                                              (*pcVar8)();
                                              return;
                                            }
                                            TypeInfo__Assets__UGUI__Desktop__Scripts__Shared__CubeModeling__CubeModelEditResetRotation
                                            ->static_fields->OnResetRotation = pUVar4;
                                            if (pUVar6->klass ==
                                                TypeInfo__UnityEngine__Events__UnityAction) {
                                              pUVar5 = pUVar6;
                                            }
                                            if (pUVar5 == (UnityAction *)0x0) {
                                              FUN_?(pUVar6);
                                              pcVar8 = (code *)swi(3);
                                              (*pcVar8)();
                                              return;
                                            }
                                          }
                                          if (iRam_? == 0) {
                                            return;
                                          }
                                          uVar18 = (uint)((ulonglong)
                                                                                                                    
                                                  TypeInfo__Assets__UGUI__Desktop__Scripts__Shared__CubeModeling__CubeModelEditResetRotation
                                                  ->static_fields >> 0xc);
                                          uVar19 = (ulonglong)((uVar18 & 0x1fffff) >> 6);
                                          do {
                                            uVar20 = *(ulonglong *)(uVar19 * 8 + 0xADDR);
                                            puVar21 = (ulonglong *)(uVar19 * 8 + 0xADDR);
                                            LOCK();
                                            bVar17 = uVar20 == *puVar21;
                                            if (bVar17) {
                                              *puVar21 = uVar20 | 1L << (uVar18 & 0x3f);
                                            }
                                            UNLOCK();
                                          } while (!bVar17);
                                          return;
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                              goto DAT_?;
                            }
                          }
                        }
                        goto code_?;
                      }
                    }
                  }
                  goto DAT_?;
                }
              }
            }
code_?:
            FUN_?();
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
        }
      }
DAT_?:
      FUN_?();
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  return;
}


/* Void EnterMuzzleEdit() */

void Assembly-CSharp.dll::Assets::Scripts::WorldObjectTypes::CustomGun::MVCustomGunBlueprint::
     MVCustomGunBlueprint_EnterMuzzleEdit(MVCustomGunBlueprint *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__Assets__UGUI__Desktop__Scripts__Shared__CubeModeling__CubeModelEditResetPosition
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__Assets__UGUI__Desktop__Scripts__Shared__CubeModeling__CubeModelEditResetRotation
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__Assets__Scripts__WorldObjectTypes__CustomGun__MVCustomGunBlueprint__ResetMuzzlePosition__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__Assets__Scripts__WorldObjectTypes__CustomGun__MVCustomGunBlueprint__ResetMuzzleRotation__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__RTG__MonoSingleton<RTG::RTGApp>__get_Get__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__MonoSingleton<RTG::RTGApp>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Events__UnityAction);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__RTG__MonoSingleton<RTG::RTGApp>->_1).field_0x1c == 0) {
    FUN_?();
  }
  this_02 = (Behaviour *)
            RTG::MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                      (MethodInfo__RTG__MonoSingleton<RTG::RTGApp>__get_Get__);
  if (this_02 != (Behaviour *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              (this_02,1,(MethodInfo *)0x0);
    this_00 = (this->fields).muzzlePoint;
    if (this_00 != (GameObject *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                (this_00,1,(MethodInfo *)0x0);
      pOVar1 = (this->fields).transformGizmo;
      if ((pOVar1 != (ObjectTransformGizmo *)0x0) &&
         (this_01 = (pOVar1->fields)._._gizmo, this_01 != (Gizmo *)0x0)) {
        RTG::Gizmo::Gizmo_SetEnabled(this_01,1,(MethodInfo *)0x0);
        pOVar1 = (this->fields).transformGizmo;
        if (pOVar1 != (ObjectTransformGizmo *)0x0) {
          RTG::ObjectTransformGizmo::ObjectTransformGizmo_RefreshPosition(pOVar1,(MethodInfo *)0x0);
          RTG::ObjectTransformGizmo::ObjectTransformGizmo_RefreshRotation(pOVar1,(MethodInfo *)0x0);
          if ((this->fields).muzzleBoundCheckRoutine != (IEnumerator *)0x0) {
            pIVar2 = (this->fields).muzzleBoundCheckRoutine;
            if (cRam_? == '\0') {
              FUN_?(&TypeInfo__Coroutines);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            pMVar3 = (MonoBehaviour *)TypeInfo__Coroutines->static_fields->instance;
            if (pMVar3 == (MonoBehaviour *)0x0) goto DAT_?;
            UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StopCoroutine
                      (pMVar3,pIVar2,(MethodInfo *)0x0);
          }
          if (cRam_? == '\0') {
            FUN_?(&
                          TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__MVCustomGunBlueprint___MuzzleBoundCheckRoutine_d__17
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pIVar2 = (IEnumerator *)
                   FUN_?(
                                TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__MVCustomGunBlueprint___MuzzleBoundCheckRoutine_d__17
                                );
          pUVar4 = (UnityAction *)0x0;
          *(undefined4 *)&pIVar2[1].klass = 0;
          pIVar2[2].klass = (IEnumerator__Class *)this;
          if (iRam_? != 0) {
            uVar5 = (uint)((ulonglong)(pIVar2 + 2) >> 0xc);
            lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
            do {
              uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
              puVar8 = (ulonglong *)(lVar6 + 0xADDR);
              LOCK();
              bVar9 = uVar7 == *puVar8;
              if (bVar9) {
                *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
              }
              UNLOCK();
            } while (!bVar9);
          }
          iVar10 = iRam_?;
          (this->fields).muzzleBoundCheckRoutine = pIVar2;
          if (iVar10 != 0) {
            uVar5 = (uint)((ulonglong)&(this->fields).muzzleBoundCheckRoutine >> 0xc);
            lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
            do {
              uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
              puVar8 = (ulonglong *)(lVar6 + 0xADDR);
              LOCK();
              bVar9 = uVar7 == *puVar8;
              if (bVar9) {
                *puVar8 = uVar7 | 1L << (ulonglong)(uVar5 & 0x3f);
              }
              UNLOCK();
            } while (!bVar9);
          }
          pIVar2 = (this->fields).muzzleBoundCheckRoutine;
          if (cRam_? == '\0') {
            FUN_?(&TypeInfo__Coroutines);
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pMVar3 = (MonoBehaviour *)TypeInfo__Coroutines->static_fields->instance;
          if (pMVar3 != (MonoBehaviour *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour_StartCoroutine_2
                      (pMVar3,pIVar2,(MethodInfo *)0x0);
            pUVar11 = TypeInfo__Assets__UGUI__Desktop__Scripts__Shared__CubeModeling__CubeModelEditResetPosition
                      ->static_fields->OnResetPosition;
            pNVar12 = (NavMesh_OnNavMeshPreUpdate *)
                     FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
            UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
            NavMesh_OnNavMeshPreUpdate__ctor
                      (pNVar12,(Object *)this,
                       MethodInfo__Assets__Scripts__WorldObjectTypes__CustomGun__MVCustomGunBlueprint__ResetMuzzlePosition__
                       ,(MethodInfo *)0x0);
            pUVar11 = (UnityAction *)
                      mscorlib.dll::System::Delegate::Delegate_Combine
                                ((Delegate *)pUVar11,(Delegate *)pNVar12,(MethodInfo *)0x0);
            if (pUVar11 == (UnityAction *)0x0) {
              TypeInfo__Assets__UGUI__Desktop__Scripts__Shared__CubeModeling__CubeModelEditResetPosition
              ->static_fields->OnResetPosition = (UnityAction *)0x0;
            }
            else {
              pUVar13 = pUVar4;
              if (pUVar11->klass == TypeInfo__UnityEngine__Events__UnityAction) {
                pUVar13 = pUVar11;
              }
              if (pUVar13 == (UnityAction *)0x0) {
                FUN_?(pUVar11,TypeInfo__UnityEngine__Events__UnityAction);
                pcVar14 = (code *)swi(3);
                (*pcVar14)();
                return;
              }
              TypeInfo__Assets__UGUI__Desktop__Scripts__Shared__CubeModeling__CubeModelEditResetPosition
              ->static_fields->OnResetPosition = pUVar13;
              pUVar13 = pUVar4;
              if (pUVar11->klass == TypeInfo__UnityEngine__Events__UnityAction) {
                pUVar13 = pUVar11;
              }
              if (pUVar13 == (UnityAction *)0x0) {
                FUN_?(pUVar11);
                pcVar14 = (code *)swi(3);
                (*pcVar14)();
                return;
              }
            }
            if (iRam_? != 0) {
              uVar5 = (uint)((ulonglong)
                              TypeInfo__Assets__UGUI__Desktop__Scripts__Shared__CubeModeling__CubeModelEditResetPosition
                              ->static_fields >> 0xc);
              lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
              do {
                uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
                puVar8 = (ulonglong *)(lVar6 + 0xADDR);
                LOCK();
                bVar9 = uVar7 == *puVar8;
                if (bVar9) {
                  *puVar8 = uVar7 | 1L << (ulonglong)(uVar5 & 0x3f);
                }
                UNLOCK();
              } while (!bVar9);
            }
            pUVar11 = TypeInfo__Assets__UGUI__Desktop__Scripts__Shared__CubeModeling__CubeModelEditResetRotation
                      ->static_fields->OnResetRotation;
            pNVar12 = (NavMesh_OnNavMeshPreUpdate *)
                     FUN_?(TypeInfo__UnityEngine__Events__UnityAction);
            UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
            NavMesh_OnNavMeshPreUpdate__ctor
                      (pNVar12,(Object *)this,
                       MethodInfo__Assets__Scripts__WorldObjectTypes__CustomGun__MVCustomGunBlueprint__ResetMuzzleRotation__
                       ,(MethodInfo *)0x0);
            pUVar11 = (UnityAction *)
                      mscorlib.dll::System::Delegate::Delegate_Combine
                                ((Delegate *)pUVar11,(Delegate *)pNVar12,(MethodInfo *)0x0);
            if (pUVar11 == (UnityAction *)0x0) {
              TypeInfo__Assets__UGUI__Desktop__Scripts__Shared__CubeModeling__CubeModelEditResetRotation
              ->static_fields->OnResetRotation = (UnityAction *)0x0;
            }
            else {
              pUVar13 = pUVar4;
              if (pUVar11->klass == TypeInfo__UnityEngine__Events__UnityAction) {
                pUVar13 = pUVar11;
              }
              if (pUVar13 == (UnityAction *)0x0) {
                FUN_?(pUVar11,TypeInfo__UnityEngine__Events__UnityAction);
                pcVar14 = (code *)swi(3);
                (*pcVar14)();
                return;
              }
              TypeInfo__Assets__UGUI__Desktop__Scripts__Shared__CubeModeling__CubeModelEditResetRotation
              ->static_fields->OnResetRotation = pUVar13;
              if (pUVar11->klass == TypeInfo__UnityEngine__Events__UnityAction) {
                pUVar4 = pUVar11;
              }
              if (pUVar4 == (UnityAction *)0x0) {
                FUN_?(pUVar11);
                pcVar14 = (code *)swi(3);
                (*pcVar14)();
                return;
              }
            }
            if (iRam_? != 0) {
              uVar5 = (uint)((ulonglong)
                              TypeInfo__Assets__UGUI__Desktop__Scripts__Shared__CubeModeling__CubeModelEditResetRotation
                              ->static_fields >> 0xc);
              lVar6 = (ulonglong)((uVar5 & 0x1fffff) >> 6) * 8;
              do {
                uVar7 = *(ulonglong *)(lVar6 + 0xADDR);
                puVar8 = (ulonglong *)(lVar6 + 0xADDR);
                LOCK();
                bVar9 = uVar7 == *puVar8;
                if (bVar9) {
                  *puVar8 = uVar7 | 1L << (uVar5 & 0x3f);
                }
                UNLOCK();
              } while (!bVar9);
            }
            return;
          }
        }
      }
    }
  }
DAT_?:
  FUN_?();
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* Void Initialize() */

void Assembly-CSharp.dll::Assets::Scripts::WorldObjectTypes::CustomGun::MVCustomGunBlueprint::
     MVCustomGunBlueprint_Initialize(MVCustomGunBlueprint *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Extensions);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__Add_UnityEngine__GameObject_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::GameObject>);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__RTG__MonoSingleton<RTG::RTGApp>__get_Get__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>__get_Get__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__MonoSingleton<RTG::RTGApp>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_MuzzleDirection);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_MuzzlePosition);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_itemData);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  EditablePickupItem::MVEditablePickupItemBaseBlueprint::
  MVEditablePickupItemBaseBlueprint_Initialize
            ((MVEditablePickupItemBaseBlueprint *)this,(MethodInfo *)0x0);
  pMVar1 = (this->fields)._.itemBase;
  if ((pMVar1 == (MVEditablePickupItemBase *)0x0) ||
     (pDVar2 = (pMVar1->fields)._._._._.data,
     pDVar2 == (Dictionary_2_System_Object_System_Object_ *)0x0)) {
DAT_?:
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pDVar2 = (Dictionary_2_System_Object_System_Object_ *)
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__get_Item
                      (pDVar2,(Object *)StringLiteral_itemData,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
  if (pDVar2 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    bVar4 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1)
            .naturalAligment;
    if (((pDVar2->klass->_1).naturalAligment < bVar4) ||
       ((Dictionary_2_System_Object_System_Object___Class *)
        (pDVar2->klass->_1).typeHierarchy[(ulonglong)bVar4 - 1] !=
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
      FUN_?(pDVar2);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__PrefabPool);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pPVar5 = TypeInfo__PrefabPool->static_fields->instance;
  if (pPVar5 == (PrefabPool *)0x0) goto DAT_?;
  pGVar6 = (pPVar5->fields).muzzleEditNodePrefab;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pGVar6 = (GameObject *)
            UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                      ((Object *)pGVar6,
                       UnityEngine__GameObject_MethodInfo__UnityEngine__Object__Instantiate<UnityEngine::GameObject>_UnityEngine__GameObject_
                      );
  bVar7 = iRam_? != 0;
  (this->fields).muzzlePoint = pGVar6;
  if (bVar7) {
    uVar8 = (uint)((ulonglong)&(this->fields).muzzlePoint >> 0xc);
    uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
    do {
      uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
      puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
      LOCK();
      bVar7 = uVar10 == *puVar11;
      if (bVar7) {
        *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
      }
      UNLOCK();
    } while (!bVar7);
  }
  pGVar6 = (this->fields).muzzlePoint;
  if (pGVar6 == (GameObject *)0x0) goto DAT_?;
  pTVar12 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                      (pGVar6,(MethodInfo *)0x0);
  pMVar13 = (this->fields)._.editableCubeModel;
  if ((pMVar13 == (MVCubeModelInstance *)0x0) || (pTVar12 == (Transform *)0x0)) goto DAT_?;
  UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
            (pTVar12,(pMVar13->fields)._._.transform,1,(MethodInfo *)0x0);
  pGVar6 = (this->fields).muzzlePoint;
  if (pGVar6 == (GameObject *)0x0) goto DAT_?;
  pTVar12 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                      (pGVar6,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
    FUN_?();
  }
  pSVar14 = StringLiteral_MuzzlePosition;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Extensions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  VStack_15.x = 0.0;
  VStack_15.y = 0.0;
  if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
    FUN_?();
  }
  VStack_16.x = VStack_15.x;
  VStack_16.y = VStack_15.y;
  VStack_16.z = 0.0;
  pVVar17 = Extensions::Extensions_GetVector3OrDefault
                      (&VStack_15,pDVar2,pSVar14,&VStack_16,(MethodInfo *)0x0);
  if (pTVar12 == (Transform *)0x0) {
code_?:
    FUN_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  VStack_16.x = pVVar17->x;
  VStack_16.y = pVVar17->y;
  VStack_16.z = pVVar17->z;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar18 = (pTVar12->fields)._._.m_CachedPtr;
  if (pvVar18 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar12,(MethodInfo *)0x0);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pcVar3 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
    uVar19 = func_?(&UNK_?);
    FUN_?(uVar19,0);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pcRam_? = pcVar3;
  (*pcRam_?)(pvVar18);
  pGVar6 = (this->fields).muzzlePoint;
  if (pGVar6 == (GameObject *)0x0) goto code_?;
  pTVar12 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                      (pGVar6,(MethodInfo *)0x0);
  pSVar14 = StringLiteral_MuzzleDirection;
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Extensions);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  VStack_15.x = 0.0;
  VStack_15.y = 0.0;
  if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
    FUN_?();
  }
  VStack_15.z = 0.0;
  pVVar17 = Extensions::Extensions_GetVector3OrDefault
                      (&VStack_20,pDVar2,pSVar14,&VStack_15,(MethodInfo *)0x0);
  uVar21 = pVVar17->x;
  uVar22 = pVVar17->y;
  VStack_15.z = pVVar17->z * _UNK_?;
  VStack_15.y = (float)uVar22 * _UNK_?;
  VStack_15.x = (float)uVar21 * _UNK_?;
  QStack_23.x = 0.0;
  QStack_23.y = 0.0;
  QStack_23.z = 0.0;
  QStack_23.w = 0.0;
  pcVar3 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
    uVar19 = func_?(&UNK_?);
    FUN_?(uVar19,0);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pcRam_? = pcVar3;
  (*pcRam_?)(&VStack_15);
  if (pTVar12 == (Transform *)0x0) goto code_?;
  VStack_20.x = QStack_23.x;
  VStack_20.y = QStack_23.y;
  VStack_20.z = QStack_23.z;
  fStack_24 = QStack_23.w;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pvVar18 = (pTVar12->fields)._._.m_CachedPtr;
  if (pvVar18 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar12,(MethodInfo *)0x0);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pcVar3 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
    uVar19 = func_?(&UNK_?);
    FUN_?(uVar19,0);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pcRam_? = pcVar3;
  (*pcRam_?)(pvVar18);
  pGVar6 = (this->fields).muzzlePoint;
  if (pGVar6 == (GameObject *)0x0) goto code_?;
  UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
            (pGVar6,0,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__RTG__MonoSingleton<RTG::RTGApp>->_1).field_0x1c == 0) {
    FUN_?();
  }
  pBVar25 = (Behaviour *)
            RTG::MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                      (MethodInfo__RTG__MonoSingleton<RTG::RTGApp>__get_Get__);
  if (pBVar25 == (Behaviour *)0x0) goto code_?;
  UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
            (pBVar25,1,(MethodInfo *)0x0);
  if (*(int *)&(TypeInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>->_1).field_0x1c == 0) {
    FUN_?();
  }
  this_01 = (RTGizmosEngine *)
            RTG::MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                      (MethodInfo__RTG__MonoSingleton<RTG::RTGizmosEngine>__get_Get__);
  if (this_01 == (RTGizmosEngine *)0x0) goto code_?;
  if (cRam_? == '\0') {
    FUN_?(&
                  RTG__ObjectTransformGizmo_MethodInfo__RTG__Gizmo__AddBehaviour<RTG::ObjectTransformGizmo>__
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pUVar26 = RTG::RTGizmosEngine::RTGizmosEngine_CreateUniversalGizmo(this_01,(MethodInfo *)0x0);
  pMVar27 = 
  RTG__ObjectTransformGizmo_MethodInfo__RTG__Gizmo__AddBehaviour<RTG::ObjectTransformGizmo>__;
  if ((pUVar26 == (UniversalGizmo *)0x0) ||
     (pGVar28 = (pUVar26->fields)._._gizmo, pGVar28 == (Gizmo *)0x0)) goto code_?;
  if ((RTG__ObjectTransformGizmo_MethodInfo__RTG__Gizmo__AddBehaviour<RTG::ObjectTransformGizmo>__->
      field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?(
                 RTG__ObjectTransformGizmo_MethodInfo__RTG__Gizmo__AddBehaviour<RTG::ObjectTransformGizmo>__
                 );
  }
  pOVar29 = (ObjectTransformGizmo *)
            mscorlib.dll::System::Activator::Activator_CreateInstance_24
                      (((pMVar27->field7_0x38).rgctx_data)->method);
  RTG::Gizmo::Gizmo_AddBehaviour(pGVar28,(IGizmoBehaviour *)pOVar29,(MethodInfo *)0x0);
  if ((pOVar29 == (ObjectTransformGizmo *)0x0) ||
     (pGVar28 = (pOVar29->fields)._._gizmo, pGVar28 == (Gizmo *)0x0)) goto code_?;
  if ((pGVar28->fields)._dragInfo._isDragged == 0) {
    (pOVar29->fields)._transformChannelFlags = 7;
  }
  (pOVar29->fields)._sharedSettings = (this_01->fields)._objectUniversalGizmoSettings;
  if (iRam_? != 0) {
    uVar8 = (uint)((ulonglong)&(pOVar29->fields)._sharedSettings >> 0xc);
    uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
    do {
      uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
      puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
      LOCK();
      bVar7 = uVar10 == *puVar11;
      if (bVar7) {
        *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
      }
      UNLOCK();
    } while (!bVar7);
  }
  iVar30 = iRam_?;
  (this->fields).transformGizmo = pOVar29;
  if (iVar30 != 0) {
    uVar8 = (uint)((ulonglong)&(this->fields).transformGizmo >> 0xc);
    uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
    do {
      uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
      puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
      LOCK();
      bVar7 = uVar10 == *puVar11;
      if (bVar7) {
        *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
      }
      UNLOCK();
    } while (!bVar7);
  }
  pOVar29 = (this->fields).transformGizmo;
  pGVar6 = (this->fields).muzzlePoint;
  if (pOVar29 == (ObjectTransformGizmo *)0x0) goto code_?;
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__Add_UnityEngine__GameObject_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__List__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::GameObject>);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar28 = (pOVar29->fields)._._gizmo;
  if (pGVar28 == (Gizmo *)0x0) goto code_?;
  if ((pGVar28->fields)._dragInfo._isDragged == 0) {
    (pOVar29->fields)._targetObjectMode = 1;
    pLVar31 = (LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
              FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::GameObject>);
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
    __Il2CppFullySharedGenericType]::
    LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
              (pLVar31,
               MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__List__);
    if (pLVar31 == (LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0)
    goto code_?;
    FUN_?(pLVar31);
    iVar30 = iRam_?;
    (pOVar29->fields)._targetObjects = (IEnumerable_1_UnityEngine_GameObject_ *)pLVar31;
    if (iVar30 != 0) {
      uVar8 = (uint)((ulonglong)&(pOVar29->fields)._targetObjects >> 0xc);
      uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
      do {
        uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
        puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
        LOCK();
        bVar7 = uVar10 == *puVar11;
        if (bVar7) {
          *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
        }
        UNLOCK();
        iVar30 = iRam_?;
      } while (!bVar7);
    }
    (pOVar29->fields)._targetPivotObject = pGVar6;
    if (iVar30 != 0) {
      uVar8 = (uint)((ulonglong)&(pOVar29->fields)._targetPivotObject >> 0xc);
      uVar9 = (ulonglong)((uVar8 & 0x1fffff) >> 6);
      do {
        uVar10 = *(ulonglong *)(uVar9 * 8 + 0xADDR);
        puVar11 = (ulonglong *)(uVar9 * 8 + 0xADDR);
        LOCK();
        bVar7 = uVar10 == *puVar11;
        if (bVar7) {
          *puVar11 = uVar10 | 1L << (uVar8 & 0x3f);
        }
        UNLOCK();
      } while (!bVar7);
    }
    RTG::ObjectTransformGizmo::ObjectTransformGizmo_RefreshPosition(pOVar29,(MethodInfo *)0x0);
    if (cRam_? == '\0') {
      FUN_?(&TypeInfo__UnityEngine__Object);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if ((pOVar29->fields)._targetObjects == (IEnumerable_1_UnityEngine_GameObject_ *)0x0)
    goto code_?;
    pGVar28 = (pOVar29->fields)._._gizmo;
    if (pGVar28 == (Gizmo *)0x0) goto code_?;
    if ((pGVar28->fields)._dragInfo._isDragged != 0) goto code_?;
    pGVar32 = (pGVar28->fields)._transform;
    if ((pOVar29->fields)._transformSpace == 0) {
code_?:
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Quaternion);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pQVar33 = TypeInfo__UnityEngine__Quaternion->static_fields;
      if (pGVar32 == (GizmoTransform *)0x0) goto code_?;
      QStack_23.x = (pQVar33->identityQuaternion).x;
      QStack_23.y = (pQVar33->identityQuaternion).y;
      QStack_23.z = (pQVar33->identityQuaternion).z;
      QStack_23.w = (pQVar33->identityQuaternion).w;
    }
    else {
      pGVar6 = (pOVar29->fields)._targetPivotObject;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if (cRam_? == '\0') {
        FUN_?(&TypeInfo__UnityEngine__Object);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (pGVar6 == (GameObject *)0x0) goto code_?;
      if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
        FUN_?();
      }
      if ((pGVar6->fields)._.m_CachedPtr == (void *)0x0) goto code_?;
      pGVar6 = (pOVar29->fields)._targetPivotObject;
      if (((pGVar6 == (GameObject *)0x0) ||
          (pTVar12 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                               (pGVar6,(MethodInfo *)0x0), pTVar12 == (Transform *)0x0)) ||
         (pQVar34 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                              (&QStack_23,pTVar12,(MethodInfo *)0x0),
         pGVar32 == (GizmoTransform *)0x0)) goto code_?;
      QStack_23.x = pQVar34->x;
      QStack_23.y = pQVar34->y;
      QStack_23.z = pQVar34->z;
      QStack_23.w = pQVar34->w;
    }
    RTG::GizmoTransform::GizmoTransform_set_Rotation3D(pGVar32,&QStack_23,(MethodInfo *)0x0);
  }
code_?:
  pOVar29 = (this->fields).transformGizmo;
  if ((pOVar29 == (ObjectTransformGizmo *)0x0) ||
     (pGVar28 = (pOVar29->fields)._._gizmo, pGVar28 == (Gizmo *)0x0)) goto code_?;
  pUVar26 = (pGVar28->fields)._universalGizmo;
  pLVar31 = (LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)
            FUN_?(TypeInfo__System__Collections__Generic__List<UnityEngine::GameObject>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            (pLVar31,MethodInfo__System__Collections__Generic__List<UnityEngine::GameObject>__List__
            );
  if ((pLVar31 == (LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)0x0) ||
     ((FUN_?(pLVar31,(this->fields).muzzlePoint), pUVar26 == (UniversalGizmo *)0x0 ||
      (this_00 = (pUVar26->fields)._mvVertexSnapDrag, this_00 == (GizmoObjectVertexSnapDrag3D *)0x0)
      ))) goto code_?;
  RTG::GizmoObjectVertexSnapDrag3D::GizmoObjectVertexSnapDrag3D_SetTargetObjects
            (this_00,(IEnumerable_1_UnityEngine_GameObject_ *)pLVar31,(MethodInfo *)0x0);
  pOVar29 = (this->fields).transformGizmo;
  if ((pOVar29 == (ObjectTransformGizmo *)0x0) ||
     (pGVar28 = (pOVar29->fields)._._gizmo, pGVar28 == (Gizmo *)0x0)) goto code_?;
  if (((pGVar28->fields)._dragInfo._isDragged == 0) &&
     ((pOVar29->fields)._isTransformSpacePermanent == 0)) {
    bVar7 = cRam_? == '\0';
    (pOVar29->fields)._transformSpace = 0;
    if (bVar7) {
      FUN_?(&TypeInfo__UnityEngine__Object);
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    if ((pOVar29->fields)._targetObjects != (IEnumerable_1_UnityEngine_GameObject_ *)0x0) {
      pGVar28 = (pOVar29->fields)._._gizmo;
      if (pGVar28 == (Gizmo *)0x0) goto code_?;
      if ((pGVar28->fields)._dragInfo._isDragged != 0) goto code_?;
      pGVar32 = (pGVar28->fields)._transform;
      if ((pOVar29->fields)._transformSpace == 0) {
code_?:
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Quaternion);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pQVar33 = TypeInfo__UnityEngine__Quaternion->static_fields;
        if (pGVar32 == (GizmoTransform *)0x0) goto code_?;
        QStack_23.x = (pQVar33->identityQuaternion).x;
        QStack_23.y = (pQVar33->identityQuaternion).y;
        QStack_23.z = (pQVar33->identityQuaternion).z;
        QStack_23.w = (pQVar33->identityQuaternion).w;
      }
      else {
        pGVar6 = (pOVar29->fields)._targetPivotObject;
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Object);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Object);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (pGVar6 == (GameObject *)0x0) goto code_?;
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if ((pGVar6->fields)._.m_CachedPtr == (void *)0x0) goto code_?;
        pGVar6 = (pOVar29->fields)._targetPivotObject;
        if (((pGVar6 == (GameObject *)0x0) ||
            (pTVar12 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                                 (pGVar6,(MethodInfo *)0x0), pTVar12 == (Transform *)0x0)) ||
           (pQVar34 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_rotation
                                (&QStack_23,pTVar12,(MethodInfo *)0x0),
           pGVar32 == (GizmoTransform *)0x0)) goto code_?;
        QStack_23.x = pQVar34->x;
        QStack_23.y = pQVar34->y;
        QStack_23.z = pQVar34->z;
        QStack_23.w = pQVar34->w;
      }
      RTG::GizmoTransform::GizmoTransform_set_Rotation3D(pGVar32,&QStack_23,(MethodInfo *)0x0);
    }
  }
code_?:
  pOVar29 = (this->fields).transformGizmo;
  if ((pOVar29 != (ObjectTransformGizmo *)0x0) &&
     (pGVar28 = (pOVar29->fields)._._gizmo, pGVar28 != (Gizmo *)0x0)) {
    if ((pGVar28->fields)._dragInfo._isDragged == 0) {
      piVar35 = &(pOVar29->fields)._transformChannelFlags;
      *piVar35 = *piVar35 & 0xfffffffb;
    }
    pOVar29 = (this->fields).transformGizmo;
    if ((pOVar29 != (ObjectTransformGizmo *)0x0) &&
       (pGVar28 = (pOVar29->fields)._._gizmo, pGVar28 != (Gizmo *)0x0)) {
      RTG::Gizmo::Gizmo_SetEnabled(pGVar28,0,(MethodInfo *)0x0);
      pBVar25 = (Behaviour *)
                RTG::MonoSingleton`1[System::Object]::MonoSingleton_1_System_Object__get_Get
                          (MethodInfo__RTG__MonoSingleton<RTG::RTGApp>__get_Get__);
      if (pBVar25 != (Behaviour *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                  (pBVar25,0,(MethodInfo *)0x0);
        return;
      }
    }
  }
code_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* IEnumerator MuzzleBoundCheckRoutine() */

IEnumerator *
Assembly-CSharp.dll::Assets::Scripts::WorldObjectTypes::CustomGun::MVCustomGunBlueprint::
MVCustomGunBlueprint_MuzzleBoundCheckRoutine(MVCustomGunBlueprint *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__MVCustomGunBlueprint___MuzzleBoundCheckRoutine_d__17
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pIVar1 = (IEnumerator *)
           FUN_?(
                        TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__MVCustomGunBlueprint___MuzzleBoundCheckRoutine_d__17
                        );
  bVar2 = iRam_? != 0;
  *(undefined4 *)&pIVar1[1].klass = 0;
  pIVar1[2].klass = (IEnumerator__Class *)this;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)(pIVar1 + 2) >> 0xc);
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
  return pIVar1;
}


/* Void OnEndEditing() */

void Assembly-CSharp.dll::Assets::Scripts::WorldObjectTypes::CustomGun::MVCustomGunBlueprint::
     MVCustomGunBlueprint_OnEndEditing(MVCustomGunBlueprint *this,MethodInfo *method)

{
  pMVar1 = (this->fields)._.editableCubeModel;
  if ((pMVar1 != (MVCubeModelInstance *)0x0) &&
     (this_00 = (pMVar1->fields)._._.transform, this_00 != (Transform *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_SetParent_1
              (this_00,(this->fields)._.cubeModelBaseParent,1,(MethodInfo *)0x0);
    pMVar1 = (this->fields)._.editableCubeModel;
    if (pMVar1 != (MVCubeModelInstance *)0x0) {
      pBVar2 = MVCubeModelBase::MVCubeModelBase_GetBounds
                         (aBStack_3,(MVCubeModelBase *)pMVar1,(MethodInfo *)0x0);
      uStack_4._0_4_ = (pBVar2->m_Extents).y;
      uStack_4._4_4_ = (pBVar2->m_Extents).z;
      fVar5 = (pBVar2->m_Center).x;
      fVar6 = (pBVar2->m_Center).y;
      fVar7 = (pBVar2->m_Center).z;
      pMVar1 = (this->fields)._.editableCubeModel;
      if ((pMVar1 != (MVCubeModelInstance *)0x0) &&
         (obj = (pMVar1->fields)._._.transform, obj != (Transform *)0x0)) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        uStack_8 = 0;
        fStack_9 = 0.0;
        pvVar10 = (obj->fields)._._.m_CachedPtr;
        if (pvVar10 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        pcVar11 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar11 = (code *)FUN_?(&UNK_?), pcVar11 == (code *)0x0)) {
          uVar12 = func_?(&UNK_?);
          FUN_?(uVar12,0);
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        pcRam_? = pcVar11;
        (*pcRam_?)(pvVar10);
        aBStack_3[0].m_Center.z =
             (float)((uint)(fVar7 * fStack_9) ^ _UNK_?) * _UNK_?;
        aBStack_3[0].m_Center.y =
             (float)((uint)(fVar6 * uStack_8._4_4_) ^ _UNK_?) * _UNK_?;
        aBStack_3[0].m_Center.x = (float)((uint)(fVar5 * (float)uStack_8) ^ _UNK_?);
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar10 = (this_00->fields)._._.m_CachedPtr;
        if (pvVar10 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)this_00,(MethodInfo *)0x0);
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        pcVar11 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar11 = (code *)FUN_?(&UNK_?), pcVar11 == (code *)0x0)) {
          uVar12 = func_?(&UNK_?);
          FUN_?(uVar12,0);
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        pcRam_? = pcVar11;
        (*pcRam_?)(pvVar10);
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Quaternion);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pQVar13 = TypeInfo__UnityEngine__Quaternion->static_fields;
        uStack_8._0_4_ = (pQVar13->identityQuaternion).x;
        uStack_8._4_4_ = (pQVar13->identityQuaternion).y;
        fStack_9 = (pQVar13->identityQuaternion).z;
        fStack_14 = (pQVar13->identityQuaternion).w;
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar10 = (this_00->fields)._._.m_CachedPtr;
        if (pvVar10 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)this_00,(MethodInfo *)0x0);
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        pcVar11 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar11 = (code *)FUN_?(&UNK_?), pcVar11 == (code *)0x0)) {
          uVar12 = func_?(&UNK_?);
          FUN_?(uVar12,0);
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        pcRam_? = pcVar11;
        (*pcRam_?)(pvVar10,&uStack_8);
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Vector3);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pVVar15 = TypeInfo__UnityEngine__Vector3->static_fields;
        uVar16 = (pVVar15->oneVector).x;
        uVar17 = (pVVar15->oneVector).y;
        fVar5 = (pVVar15->oneVector).z;
        fVar6 = (float)(*(this->klass->vtable).get_CubeModelScale.methodPtr)(this);
        aBStack_3[0].m_Center.z = fVar5 * fVar6;
        aBStack_3[0].m_Center.y = (float)uVar17 * fVar6;
        aBStack_3[0].m_Center.x = (float)uVar16 * fVar6;
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar10 = (this_00->fields)._._.m_CachedPtr;
        if (pvVar10 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)this_00,(MethodInfo *)0x0);
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        pcVar11 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar11 = (code *)FUN_?(&UNK_?), pcVar11 == (code *)0x0)) {
          uVar12 = func_?(&UNK_?);
          FUN_?(uVar12,0);
          pcVar11 = (code *)swi(3);
          (*pcVar11)();
          return;
        }
        pcRam_? = pcVar11;
        (*pcRam_?)(pvVar10);
        MVCustomGunBlueprint_EndMuzzleEdit(this,(MethodInfo *)0x0);
        return;
      }
    }
  }
  FUN_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Boolean OnEnterObject(EditorStateMachine) */

bool Assembly-CSharp.dll::Assets::Scripts::WorldObjectTypes::CustomGun::MVCustomGunBlueprint::
     MVCustomGunBlueprint_OnEnterObject
               (MVCustomGunBlueprint *this,EditorStateMachine *e,MethodInfo *method)

{
  if (e != (EditorStateMachine *)0x0) {
    this_00 = (this->fields)._.itemBase;
    bVar1 = (e->fields)._MuzzleEditMode_k__BackingField;
    if (this_00 != (MVEditablePickupItemBase *)0x0) {
      pMVar2 = EditablePickupItem::MVEditablePickupItemBase::MVEditablePickupItemBase_get_BaseObject
                         (this_00,(MethodInfo *)0x0);
      if ((pMVar2 != (MVEditablePickupItemBaseObject *)0x0) &&
         (this_01 = (pMVar2->fields)._._.mainCollider, this_01 != (Collider *)0x0)) {
        this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                            ((Component *)this_01,(MethodInfo *)0x0);
        if (this_02 != (GameObject *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                    (this_02,0,(MethodInfo *)0x0);
          EditablePickupItem::MVEditablePickupItemBaseBlueprint::
          MVEditablePickupItemBaseBlueprint_ToggleCubeModelColliders
                    ((MVEditablePickupItemBaseBlueprint *)this,bVar1 == 0,(MethodInfo *)0x0);
          (*(this->klass->vtable).OnStartEditing.methodPtr)(this);
          if (bVar1 != 0) {
            MVCustomGunBlueprint_EnterMuzzleEdit(this,(MethodInfo *)0x0);
          }
          pEVar3 = (this->fields)._.editableCubeModelWrapper;
          if (pEVar3 != (EditableCubeModelWrapper *)0x0) {
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            bVar1 = (*(pEVar3->klass->vtable).OnEnterObject.methodPtr)
                              (pEVar3,e,(pEVar3->klass->vtable).OnEnterObject.method);
            return bVar1;
          }
        }
      }
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  bVar1 = (*pcVar4)();
  return bVar1;
}


/* Void ResetMuzzlePosition() */

void Assembly-CSharp.dll::Assets::Scripts::WorldObjectTypes::CustomGun::MVCustomGunBlueprint::
     MVCustomGunBlueprint_ResetMuzzlePosition(MVCustomGunBlueprint *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary_System__Collections__Generic__IDictionary<System::Object,_System::Object>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_MuzzlePosition);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_itemData);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields).muzzlePoint;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pGVar1 != (GameObject *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pGVar1->fields)._.m_CachedPtr != (void *)0x0) {
      if (*(int *)&(TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData->_1).
                   field_0x1c == 0) {
        FUN_?();
      }
      pVVar2 = CustomGunData::CustomGunData_DefaultVector3
                         (aVStack_3,StringLiteral_MuzzlePosition,(MethodInfo *)0x0);
      pMVar4 = (this->fields)._.itemBase;
      uVar5._0_4_ = pVVar2->x;
      uVar5._4_4_ = pVVar2->y;
      fVar6 = pVVar2->z;
      if ((pMVar4 != (MVEditablePickupItemBase *)0x0) &&
         (pDVar7 = (pMVar4->fields)._._._._.data,
         pDVar7 != (Dictionary_2_System_Object_System_Object_ *)0x0)) {
        dictionary = (IDictionary_2_System_Object_System_Object_ *)
                     mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System
                     ::Object]::Dictionary_2_System_Object_System_Object__get_Item
                               (pDVar7,(Object *)StringLiteral_itemData,
                                MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                               );
        pDVar7 = (Dictionary_2_System_Object_System_Object_ *)
                 FUN_?(
                              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                              );
        if (dictionary != (IDictionary_2_System_Object_System_Object_ *)0x0) {
          bVar8 = (
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                  ->_1).naturalAligment;
          if (((dictionary->klass->_1).naturalAligment < bVar8) ||
             ((Dictionary_2_System_Object_System_Object___Class *)
              (dictionary->klass->_1).typeHierarchy[(ulonglong)bVar8 - 1] !=
              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
            FUN_?(dictionary);
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
        }
        method_00 = MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary_System__Collections__Generic__IDictionary<System::Object,_System::Object>_
                    ->klass->rgctx_data[8].method;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object___ctor_4
                  (pDVar7,dictionary,(IEqualityComparer_1_System_Object_ *)0x0,method_00);
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__System__Single);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        value = (Object *)FUN_?(TypeInfo__System__Single,3);
        if (value != (Object *)0x0) {
          if (*(int *)&value[1].monitor != 0) {
            *(float *)&value[2].klass = (float)uVar5;
            if (1 < *(uint *)&value[1].monitor) {
              *(float *)((longlong)&value[2].klass + 4) = uVar5._4_4_;
              if (2 < *(uint *)&value[1].monitor) {
                *(float *)&value[2].monitor = fVar6;
                if (pDVar7 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__TryInsert
                            (pDVar7,(Object *)StringLiteral_MuzzlePosition,value,
                             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)method_00 >> 8),1),
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                             ->klass->rgctx_data[0x22].method);
                  pGVar1 = (this->fields).muzzlePoint;
                  if ((pGVar1 != (GameObject *)0x0) &&
                     (obj = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                            GameObject_get_transform(pGVar1,(MethodInfo *)0x0),
                     obj != (Transform *)0x0)) {
                    aVStack_3[0]._0_8_ = uVar5;
                    aVStack_3[0].z = fVar6;
                    if (cRam_? == '\0') {
                      FUN_?(&
                                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                   );
                      LOCK();
                      UNLOCK();
                      cRam_? = '\x01';
                    }
                    pvVar10 = (obj->fields)._._.m_CachedPtr;
                    if (pvVar10 == (void *)0x0) {
                      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                      ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
                      pcVar9 = (code *)swi(3);
                      (*pcVar9)();
                      return;
                    }
                    pcVar9 = pcRam_?;
                    if ((pcRam_? == (code *)0x0) &&
                       (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
                      uVar5 = func_?(&UNK_?);
                      FUN_?(uVar5,0);
                      pcVar9 = (code *)swi(3);
                      (*pcVar9)();
                      return;
                    }
                    pcRam_? = pcVar9;
                    (*pcRam_?)(pvVar10);
                    this_00 = (this->fields).transformGizmo;
                    if (this_00 != (ObjectTransformGizmo *)0x0) {
                      RTG::ObjectTransformGizmo::ObjectTransformGizmo_RefreshPosition
                                (this_00,(MethodInfo *)0x0);
                      RTG::ObjectTransformGizmo::ObjectTransformGizmo_RefreshRotation
                                (this_00,(MethodInfo *)0x0);
                      return;
                    }
                  }
                }
                goto DAT_?;
              }
            }
          }
          FUN_?();
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
      }
DAT_?:
      FUN_?();
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  return;
}


/* Void ResetMuzzleRotation() */

void Assembly-CSharp.dll::Assets::Scripts::WorldObjectTypes::CustomGun::MVCustomGunBlueprint::
     MVCustomGunBlueprint_ResetMuzzleRotation(MVCustomGunBlueprint *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary_System__Collections__Generic__IDictionary<System::Object,_System::Object>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_MuzzleDirection);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_itemData);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pGVar1 = (this->fields).muzzlePoint;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pGVar1 != (GameObject *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pGVar1->fields)._.m_CachedPtr != (void *)0x0) {
      if (*(int *)&(TypeInfo__Assets__Scripts__WorldObjectTypes__CustomGun__CustomGunData->_1).
                   field_0x1c == 0) {
        FUN_?();
      }
      pVVar2 = CustomGunData::CustomGunData_DefaultVector3
                         ((Vector3 *)auStack_3,StringLiteral_MuzzleDirection,(MethodInfo *)0x0);
      pMVar4 = (this->fields)._.itemBase;
      uStack_5._0_4_ = pVVar2->x;
      uStack_5._4_4_ = pVVar2->y;
      fVar6 = pVVar2->z;
      if ((pMVar4 != (MVEditablePickupItemBase *)0x0) &&
         (pDVar7 = (pMVar4->fields)._._._._.data,
         pDVar7 != (Dictionary_2_System_Object_System_Object_ *)0x0)) {
        dictionary = (IDictionary_2_System_Object_System_Object_ *)
                     mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System
                     ::Object]::Dictionary_2_System_Object_System_Object__get_Item
                               (pDVar7,(Object *)StringLiteral_itemData,
                                MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                               );
        pDVar7 = (Dictionary_2_System_Object_System_Object_ *)
                 FUN_?(
                              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                              );
        if (dictionary != (IDictionary_2_System_Object_System_Object_ *)0x0) {
          bVar8 = (
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                  ->_1).naturalAligment;
          if (((dictionary->klass->_1).naturalAligment < bVar8) ||
             ((Dictionary_2_System_Object_System_Object___Class *)
              (dictionary->klass->_1).typeHierarchy[(ulonglong)bVar8 - 1] !=
              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
            FUN_?(dictionary);
            pcVar9 = (code *)swi(3);
            (*pcVar9)();
            return;
          }
        }
        method_00 = MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary_System__Collections__Generic__IDictionary<System::Object,_System::Object>_
                    ->klass->rgctx_data[8].method;
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object___ctor_4
                  (pDVar7,dictionary,(IEqualityComparer_1_System_Object_ *)0x0,method_00);
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__System__Single);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        value = (Object *)FUN_?(TypeInfo__System__Single,3);
        if (value != (Object *)0x0) {
          if (*(int *)&value[1].monitor != 0) {
            fVar10 = (float)uStack_5;
            *(float *)&value[2].klass = (float)uStack_5;
            if (1 < *(uint *)&value[1].monitor) {
              fVar11 = uStack_5._4_4_;
              *(float *)((longlong)&value[2].klass + 4) = uStack_5._4_4_;
              if (2 < *(uint *)&value[1].monitor) {
                *(float *)&value[2].monitor = fVar6;
                if (pDVar7 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
                  Object]::Dictionary_2_System_Object_System_Object__TryInsert
                            (pDVar7,(Object *)StringLiteral_MuzzleDirection,value,
                             (InsertionBehavior__Enum)CONCAT71((int7)((ulonglong)method_00 >> 8),1),
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                             ->klass->rgctx_data[0x22].method);
                  pGVar1 = (this->fields).muzzlePoint;
                  if (pGVar1 != (GameObject *)0x0) {
                    obj = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                          GameObject_get_transform(pGVar1,(MethodInfo *)0x0);
                    fStack_12 = fVar6 * _UNK_?;
                    uStack_5 = CONCAT44(fVar11 * _UNK_?,fVar10 * _UNK_?);
                    auStack_3._0_4_ = 0.0;
                    auStack_3._4_4_ = 0.0;
                    stack0xffffffffffffffb0 = 0;
                    pcVar9 = pcRam_?;
                    if ((pcRam_? == (code *)0x0) &&
                       (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0)) {
                      uVar13 = func_?(&UNK_?);
                      FUN_?(uVar13,0);
                      pcVar9 = (code *)swi(3);
                      (*pcVar9)();
                      return;
                    }
                    pcRam_? = pcVar9;
                    (*pcRam_?)(&uStack_5);
                    if (obj != (Transform *)0x0) {
                      fStack_14 = (float)auStack_3._0_4_;
                      fStack_15 = (float)auStack_3._4_4_;
                      fStack_16 = (float)auStack_3._8_4_;
                      uStack_17 = uStack_18;
                      if (cRam_? == '\0') {
                        FUN_?(&
                                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                                     );
                        LOCK();
                        UNLOCK();
                        cRam_? = '\x01';
                      }
                      pvVar19 = (obj->fields)._._.m_CachedPtr;
                      if (pvVar19 == (void *)0x0) {
                        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
                        ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
                        pcVar9 = (code *)swi(3);
                        (*pcVar9)();
                        return;
                      }
                      pcVar9 = pcRam_?;
                      if ((pcRam_? == (code *)0x0) &&
                         (pcVar9 = (code *)FUN_?(&UNK_?), pcVar9 == (code *)0x0))
                      {
                        uVar13 = func_?(&UNK_?);
                        FUN_?(uVar13,0);
                        pcVar9 = (code *)swi(3);
                        (*pcVar9)();
                        return;
                      }
                      pcRam_? = pcVar9;
                      (*pcRam_?)(pvVar19);
                      this_00 = (this->fields).transformGizmo;
                      if (this_00 != (ObjectTransformGizmo *)0x0) {
                        RTG::ObjectTransformGizmo::ObjectTransformGizmo_RefreshPosition
                                  (this_00,(MethodInfo *)0x0);
                        RTG::ObjectTransformGizmo::ObjectTransformGizmo_RefreshRotation
                                  (this_00,(MethodInfo *)0x0);
                        return;
                      }
                    }
                    FUN_?();
                    pcVar9 = (code *)swi(3);
                    (*pcVar9)();
                    return;
                  }
                }
                goto DAT_?;
              }
            }
          }
          FUN_?();
          pcVar9 = (code *)swi(3);
          (*pcVar9)();
          return;
        }
      }
DAT_?:
      FUN_?();
      pcVar9 = (code *)swi(3);
      (*pcVar9)();
      return;
    }
  }
  return;
}


/* Void SetCubeSize() */

void Assembly-CSharp.dll::Assets::Scripts::WorldObjectTypes::CustomGun::MVCustomGunBlueprint::
     MVCustomGunBlueprint_SetCubeSize(MVCustomGunBlueprint *this,MethodInfo *method)

{
  pMVar1 = (this->fields)._.editableCubeModel;
  if (pMVar1 != (MVCubeModelInstance *)0x0) {
    MVCubeModelBase::MVCubeModelBase_GetBounds
              (aBStack_2,(MVCubeModelBase *)pMVar1,(MethodInfo *)0x0);
    pMVar1 = (this->fields)._.editableCubeModel;
    if ((pMVar1 != (MVCubeModelInstance *)0x0) &&
       (pTVar3 = (pMVar1->fields)._._.transform, pTVar3 != (Transform *)0x0)) {
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar4 = (pTVar3->fields)._._.m_CachedPtr;
      if (pvVar4 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar3,(MethodInfo *)0x0);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pcVar5 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
        uVar6 = func_?(&UNK_?);
        FUN_?(uVar6,0);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pcRam_? = pcVar5;
      (*pcRam_?)(pvVar4);
      pMVar7 = (this->fields)._.itemBase;
      if (((pMVar7 != (MVEditablePickupItemBase *)0x0) &&
          (pMVar8 = EditablePickupItem::MVEditablePickupItemBase::
                    MVEditablePickupItemBase_get_BaseObject(pMVar7,(MethodInfo *)0x0),
          pMVar8 != (MVEditablePickupItemBaseObject *)0x0)) &&
         (this_00 = (pMVar8->fields)._._.mainCollider, this_00 != (Collider *)0x0)) {
        pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)this_00,(MethodInfo *)0x0);
        if (pTVar3 != (Transform *)0x0) {
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pvVar4 = (pTVar3->fields)._._.m_CachedPtr;
          if (pvVar4 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)pTVar3,(MethodInfo *)0x0);
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pcVar5 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
            uVar6 = func_?(&UNK_?);
            FUN_?(uVar6,0);
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pcRam_? = pcVar5;
          (*pcRam_?)(pvVar4);
          pMVar7 = (this->fields)._.itemBase;
          if (pMVar7 != (MVEditablePickupItemBase *)0x0) {
            MVLogicObject::MVLogicObject_SetLocalBounds((MVLogicObject *)pMVar7,(MethodInfo *)0x0);
            return;
          }
        }
        FUN_?();
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void SetMuzzlePointPosition(Vector3) */

void Assembly-CSharp.dll::Assets::Scripts::WorldObjectTypes::CustomGun::MVCustomGunBlueprint::
     MVCustomGunBlueprint_SetMuzzlePointPosition
               (MVCustomGunBlueprint *this,Vector3 *pos,MethodInfo *method)

{
  this_00 = (this->fields).muzzlePoint;
  if ((this_00 != (GameObject *)0x0) &&
     (obj = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_get_transform
                      (this_00,(MethodInfo *)0x0), obj != (Transform *)0x0)) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Transform>_UnityEngine__Transform_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar1 = (obj->fields)._._.m_CachedPtr;
    if (pvVar1 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcVar2 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
      uVar3 = func_?(&UNK_?);
      FUN_?(uVar3,0);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    pcRam_? = pcVar2;
    (*pcRam_?)(pvVar1);
    this_01 = (this->fields).transformGizmo;
    if (this_01 != (ObjectTransformGizmo *)0x0) {
      RTG::ObjectTransformGizmo::ObjectTransformGizmo_RefreshPosition(this_01,(MethodInfo *)0x0);
      return;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* MVCustomGunBlueprint(Dictionary`2[System.Object,System.Object],
   Dictionary`2[System.Int32,MVWorldObjectClient]) */

void Assembly-CSharp.dll::Assets::Scripts::WorldObjectTypes::CustomGun::MVCustomGunBlueprint::
     MVCustomGunBlueprint__ctor
               (MVCustomGunBlueprint *this,Dictionary_2_System_Object_System_Object_ *data,
               Dictionary_2_System_Int32_MVWorldObjectClient_ *worldObjects,MethodInfo *method)

{
  (this->fields)._.cubeModelId = -1;
  (this->fields)._.cubeModelPid = -1;
  MVBlueprintBase::MVBlueprintBase__ctor
            ((MVBlueprintBase *)this,data,worldObjects,(MethodInfo *)0x0);
  piVar1 = &(this->fields)._._._._.interactionFlags;
  *piVar1 = *piVar1 | 0x1021030b100;
  return;
}


/* Single get_CubeModelScale() */

float Assembly-CSharp.dll::Assets::Scripts::WorldObjectTypes::CustomGun::MVCustomGunBlueprint::
      MVCustomGunBlueprint_get_CubeModelScale(MVCustomGunBlueprint *this,MethodInfo *method)

{
  return _UNK_?;
}

