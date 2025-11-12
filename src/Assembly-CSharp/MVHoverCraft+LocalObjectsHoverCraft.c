
/* MVHoverCraft+LocalObjectsHoverCraft(MVSimpleOneSeatVehicle, SmoothCharacterController,
   SimpleVehicleMotorBase) */

void Assembly-CSharp.dll::MVHoverCraft+LocalObjectsHoverCraft::
     MVHoverCraft_LocalObjectsHoverCraft__ctor
               (MVHoverCraft_LocalObjectsHoverCraft *this,MVSimpleOneSeatVehicle *vehicleBase,
               SmoothCharacterController *smoothController,SimpleVehicleMotorBase *hoverCraftMotor,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MVTriggerHandler_MethodInfo__UnityEngine__GameObject__AddComponent<MVTriggerHandler>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&PickupGUI_MethodInfo__UnityEngine__GameObject__AddComponent<PickupGUI>__);
    LOCK();
    UNLOCK();
    FUN_?(&
                  VehicleEquipable_MethodInfo__UnityEngine__GameObject__AddComponent<VehicleEquipable>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  VehicleInteractable_MethodInfo__UnityEngine__GameObject__AddComponent<VehicleInteractable>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  VehiclePickupOwner_MethodInfo__UnityEngine__GameObject__GetComponent<VehiclePickupOwner>__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__List<UnityEngine::Component>__Add_UnityEngine__Component_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__MVVehicleBase__LocalObjectsBase__OnHealthChange_System__Object_);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__PickupGUI__Enter__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__PickupGUI__Leave__);
    LOCK();
    UNLOCK();
    FUN_?(&MethodInfo__VehiclePickupOwner__OnLocalObjectsDestroyed__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  MVVehicleBase+LocalObjectsBase::MVVehicleBase_LocalObjectsBase__ctor
            ((MVVehicleBase_LocalObjectsBase *)this,(MethodInfo *)0x0);
  if ((vehicleBase != (MVSimpleOneSeatVehicle *)0x0) &&
     (pMVar1 = (vehicleBase->fields).Health, pMVar1 != (MVRuntimeDataVariableClampedFloat *)0x0)) {
    pMVar2 = (pMVar1->fields)._._.OnChange;
    this_02 = (UnityAction_1_System_Object_ *)
              FUN_?(TypeInfo__MVRuntimeDataVariable__OnChangeDelegate);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Object]::
    UnityAction_1_System_Object___ctor
              (this_02,(Object *)this,
               MethodInfo__MVVehicleBase__LocalObjectsBase__OnHealthChange_System__Object_,
               (MethodInfo *)0x0);
    pMVar3 = (MVRuntimeDataVariable_OnChangeDelegate *)
              mscorlib.dll::System::Delegate::Delegate_Combine
                        ((Delegate *)pMVar2,(Delegate *)this_02,(MethodInfo *)0x0);
    pMVar2 = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
    if (pMVar3 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
      (pMVar1->fields)._._.OnChange = (MVRuntimeDataVariable_OnChangeDelegate *)0x0;
    }
    else {
      pMVar4 = pMVar2;
      if (pMVar3->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
        pMVar4 = pMVar3;
      }
      if (pMVar4 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
        FUN_?();
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      (pMVar1->fields)._._.OnChange = pMVar4;
      pMVar4 = pMVar2;
      if (pMVar3->klass == TypeInfo__MVRuntimeDataVariable__OnChangeDelegate) {
        pMVar4 = pMVar3;
      }
      if (pMVar4 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
        FUN_?();
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar6 = (uint)((ulonglong)&(pMVar1->fields)._._.OnChange >> 0xc);
      lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
      do {
        uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
        puVar9 = (ulonglong *)(lVar7 + 0xADDR);
        LOCK();
        bVar10 = uVar8 == *puVar9;
        if (bVar10) {
          *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
        }
        UNLOCK();
      } while (!bVar10);
    }
    this_00 = (vehicleBase->fields)._._._._.gameObject;
    if (((this_00 != (GameObject *)0x0) &&
        (pOVar11 = (Object__Class *)
                   UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                             (this_00,
                              VehicleInteractable_MethodInfo__UnityEngine__GameObject__AddComponent<VehicleInteractable>__
                             ), pOVar11 != (Object__Class *)0x0)) &&
       (pOVar12 = (Object__Class *)(pOVar11->_0).image,
       (*(code *)pOVar12[1].interfaceOffsets)
                 (pOVar11,(vehicleBase->fields).Modifiers,(vehicleBase->fields).Health,0,
                  (vehicleBase->fields).shield,0,pOVar12[1].static_fields),
       hoverCraftMotor != (SimpleVehicleMotorBase *)0x0)) {
      iStack_13 = (vehicleBase->fields)._._VehicleEnergyContainerConfig_k__BackingField.consumption;
      uStack_14._0_1_ =
           (vehicleBase->fields)._._VehicleEnergyContainerConfig_k__BackingField.usingEnergy;
      uStack_14._1_3_ =
           *(undefined3 *)
            &(vehicleBase->fields)._._VehicleEnergyContainerConfig_k__BackingField.field_0x1;
      uStack_14._4_4_ =
           (vehicleBase->fields)._._VehicleEnergyContainerConfig_k__BackingField.storage;
      (*(hoverCraftMotor->klass->vtable).Init.methodPtr)
                (hoverCraftMotor,smoothController,pOVar11,&uStack_14,
                 (hoverCraftMotor->klass->vtable).Init.method);
      pAVar15 = (this->fields)._._.onEnter;
      pNVar16 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (pNVar16,(Object *)hoverCraftMotor,
                 (hoverCraftMotor->klass->vtable).OnLocalVehicleEnter.method,(MethodInfo *)0x0);
      pMVar3 = (MVRuntimeDataVariable_OnChangeDelegate *)
                mscorlib.dll::System::Delegate::Delegate_Combine
                          ((Delegate *)pAVar15,(Delegate *)pNVar16,(MethodInfo *)0x0);
      if (pMVar3 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
        (this->fields)._._.onEnter = (Action *)0x0;
      }
      else {
        pMVar4 = pMVar2;
        if (pMVar3->klass ==
            (MVRuntimeDataVariable_OnChangeDelegate__Class *)TypeInfo__System__Action) {
          pMVar4 = pMVar3;
        }
        if (pMVar4 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
          FUN_?();
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        (this->fields)._._.onEnter = (Action *)pMVar4;
        pMVar4 = pMVar2;
        if (pMVar3->klass ==
            (MVRuntimeDataVariable_OnChangeDelegate__Class *)TypeInfo__System__Action) {
          pMVar4 = pMVar3;
        }
        if (pMVar4 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
          FUN_?();
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      if (iRam_? != 0) {
        uVar6 = (uint)((ulonglong)&(this->fields)._._.onEnter >> 0xc);
        lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
        do {
          uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
          puVar9 = (ulonglong *)(lVar7 + 0xADDR);
          LOCK();
          bVar10 = uVar8 == *puVar9;
          if (bVar10) {
            *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
          }
          UNLOCK();
        } while (!bVar10);
      }
      pAVar15 = (this->fields)._._.onLeave;
      pNVar16 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
      UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
      NavMesh_OnNavMeshPreUpdate__ctor
                (pNVar16,(Object *)hoverCraftMotor,
                 (hoverCraftMotor->klass->vtable).OnLocalVehicleLeave.method,(MethodInfo *)0x0);
      pMVar3 = (MVRuntimeDataVariable_OnChangeDelegate *)
                mscorlib.dll::System::Delegate::Delegate_Combine
                          ((Delegate *)pAVar15,(Delegate *)pNVar16,(MethodInfo *)0x0);
      if (pMVar3 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
        (this->fields)._._.onLeave = (Action *)0x0;
      }
      else {
        pMVar4 = pMVar2;
        if (pMVar3->klass ==
            (MVRuntimeDataVariable_OnChangeDelegate__Class *)TypeInfo__System__Action) {
          pMVar4 = pMVar3;
        }
        if (pMVar4 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
          FUN_?();
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        (this->fields)._._.onLeave = (Action *)pMVar4;
        pMVar4 = pMVar2;
        if (pMVar3->klass ==
            (MVRuntimeDataVariable_OnChangeDelegate__Class *)TypeInfo__System__Action) {
          pMVar4 = pMVar3;
        }
        if (pMVar4 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
          FUN_?();
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      if (iRam_? != 0) {
        uVar6 = (uint)((ulonglong)&(this->fields)._._.onLeave >> 0xc);
        lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
        do {
          uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
          puVar9 = (ulonglong *)(lVar7 + 0xADDR);
          LOCK();
          bVar10 = uVar8 == *puVar9;
          if (bVar10) {
            *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
          }
          UNLOCK();
        } while (!bVar10);
      }
      pOVar17 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                          (this_00,
                           VehicleEquipable_MethodInfo__UnityEngine__GameObject__AddComponent<VehicleEquipable>__
                          );
      iVar18 = iRam_?;
      pMVar19 = (vehicleBase->fields).CurrentItem;
      if (pOVar17 != (Object *)0x0) {
        pOVar17[3].klass = pOVar11;
        if (iVar18 != 0) {
          uVar6 = (uint)((ulonglong)(pOVar17 + 3) >> 0xc);
          lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
          do {
            uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
            puVar9 = (ulonglong *)(lVar7 + 0xADDR);
            LOCK();
            bVar10 = uVar8 == *puVar9;
            if (bVar10) {
              *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
            }
            UNLOCK();
            iVar18 = iRam_?;
          } while (!bVar10);
        }
        pOVar17[3].monitor = (MonitorData *)pMVar19;
        if (iVar18 != 0) {
          uVar6 = (uint)((ulonglong)&pOVar17[3].monitor >> 0xc);
          lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
          do {
            uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
            puVar9 = (ulonglong *)(lVar7 + 0xADDR);
            LOCK();
            bVar10 = uVar8 == *puVar9;
            if (bVar10) {
              *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
            }
            UNLOCK();
          } while (!bVar10);
        }
        this_01 = (vehicleBase->fields)._._._._.gameObject;
        if (this_01 != (GameObject *)0x0) {
          pVVar20 = (VehiclePickupOwner *)
                    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                              (this_01,
                               VehiclePickupOwner_MethodInfo__UnityEngine__GameObject__GetComponent<VehiclePickupOwner>__
                              );
          bVar10 = iRam_? != 0;
          (this->fields)._.pickupOwner = pVVar20;
          if (bVar10) {
            uVar6 = (uint)((ulonglong)&(this->fields)._.pickupOwner >> 0xc);
            lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
            do {
              uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
              puVar9 = (ulonglong *)(lVar7 + 0xADDR);
              LOCK();
              bVar10 = uVar8 == *puVar9;
              if (bVar10) {
                *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
              }
              UNLOCK();
            } while (!bVar10);
          }
          pVVar20 = (this->fields)._.pickupOwner;
          if (pVVar20 != (VehiclePickupOwner *)0x0) {
            (pVVar20->fields)._._IsLocal_k__BackingField = 1;
            pAVar15 = (this->fields)._._.onDestroy;
            pVVar20 = (this->fields)._.pickupOwner;
            pNVar16 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
            UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
            NavMesh_OnNavMeshPreUpdate__ctor
                      (pNVar16,(Object *)pVVar20,
                       MethodInfo__VehiclePickupOwner__OnLocalObjectsDestroyed__,(MethodInfo *)0x0);
            pMVar3 = (MVRuntimeDataVariable_OnChangeDelegate *)
                      mscorlib.dll::System::Delegate::Delegate_Combine
                                ((Delegate *)pAVar15,(Delegate *)pNVar16,(MethodInfo *)0x0);
            if (pMVar3 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
              (this->fields)._._.onDestroy = (Action *)0x0;
            }
            else {
              pMVar4 = pMVar2;
              if (pMVar3->klass ==
                  (MVRuntimeDataVariable_OnChangeDelegate__Class *)TypeInfo__System__Action) {
                pMVar4 = pMVar3;
              }
              if (pMVar4 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
                FUN_?();
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
              (this->fields)._._.onDestroy = (Action *)pMVar4;
              pMVar4 = pMVar2;
              if (pMVar3->klass ==
                  (MVRuntimeDataVariable_OnChangeDelegate__Class *)TypeInfo__System__Action) {
                pMVar4 = pMVar3;
              }
              if (pMVar4 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
                FUN_?();
                pcVar5 = (code *)swi(3);
                (*pcVar5)();
                return;
              }
            }
            if (iRam_? != 0) {
              uVar6 = (uint)((ulonglong)&this->fields >> 0xc);
              lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
              do {
                uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
                puVar9 = (ulonglong *)(lVar7 + 0xADDR);
                LOCK();
                bVar10 = uVar8 == *puVar9;
                if (bVar10) {
                  *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
                }
                UNLOCK();
              } while (!bVar10);
            }
            pPVar21 = (PickupGUI *)
                      UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_AddComponent_1
                                (this_00,
                                 PickupGUI_MethodInfo__UnityEngine__GameObject__AddComponent<PickupGUI>__
                                );
            bVar10 = iRam_? != 0;
            (this->fields)._.pickupGUI = pPVar21;
            if (bVar10) {
              uVar6 = (uint)((ulonglong)&(this->fields)._.pickupGUI >> 0xc);
              lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
              do {
                uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
                puVar9 = (ulonglong *)(lVar7 + 0xADDR);
                LOCK();
                bVar10 = uVar8 == *puVar9;
                if (bVar10) {
                  *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
                }
                UNLOCK();
              } while (!bVar10);
            }
            pPVar21 = (this->fields)._.pickupGUI;
            if (pPVar21 != (PickupGUI *)0x0) {
              PickupGUI::PickupGUI_Initialize
                        (pPVar21,(vehicleBase->fields)._._._._._.id,
                         (MVPickupOwner *)(this->fields)._.pickupOwner,(MethodInfo *)0x0);
              pAVar15 = (this->fields)._._.onEnter;
              pPVar21 = (this->fields)._.pickupGUI;
              pNVar16 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
              UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
              NavMesh_OnNavMeshPreUpdate__ctor
                        (pNVar16,(Object *)pPVar21,MethodInfo__PickupGUI__Enter__,(MethodInfo *)0x0)
              ;
              pMVar3 = (MVRuntimeDataVariable_OnChangeDelegate *)
                        mscorlib.dll::System::Delegate::Delegate_Combine
                                  ((Delegate *)pAVar15,(Delegate *)pNVar16,(MethodInfo *)0x0);
              if (pMVar3 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
                (this->fields)._._.onEnter = (Action *)0x0;
              }
              else {
                pMVar4 = pMVar2;
                if (pMVar3->klass ==
                    (MVRuntimeDataVariable_OnChangeDelegate__Class *)TypeInfo__System__Action) {
                  pMVar4 = pMVar3;
                }
                if (pMVar4 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
                  FUN_?();
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                (this->fields)._._.onEnter = (Action *)pMVar4;
                pMVar4 = pMVar2;
                if (pMVar3->klass ==
                    (MVRuntimeDataVariable_OnChangeDelegate__Class *)TypeInfo__System__Action) {
                  pMVar4 = pMVar3;
                }
                if (pMVar4 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
                  FUN_?();
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
              }
              if (iRam_? != 0) {
                uVar6 = (uint)((ulonglong)&(this->fields)._._.onEnter >> 0xc);
                lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
                do {
                  uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
                  puVar9 = (ulonglong *)(lVar7 + 0xADDR);
                  LOCK();
                  bVar10 = uVar8 == *puVar9;
                  if (bVar10) {
                    *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
                  }
                  UNLOCK();
                } while (!bVar10);
              }
              pAVar15 = (this->fields)._._.onLeave;
              pPVar21 = (this->fields)._.pickupGUI;
              pNVar16 = (NavMesh_OnNavMeshPreUpdate *)FUN_?(TypeInfo__System__Action);
              UnityEngine.AIModule.dll::UnityEngine::AI::NavMesh+OnNavMeshPreUpdate::
              NavMesh_OnNavMeshPreUpdate__ctor
                        (pNVar16,(Object *)pPVar21,MethodInfo__PickupGUI__Leave__,(MethodInfo *)0x0)
              ;
              pMVar3 = (MVRuntimeDataVariable_OnChangeDelegate *)
                        mscorlib.dll::System::Delegate::Delegate_Combine
                                  ((Delegate *)pAVar15,(Delegate *)pNVar16,(MethodInfo *)0x0);
              if (pMVar3 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
                (this->fields)._._.onLeave = (Action *)0x0;
              }
              else {
                pMVar4 = pMVar2;
                if (pMVar3->klass ==
                    (MVRuntimeDataVariable_OnChangeDelegate__Class *)TypeInfo__System__Action) {
                  pMVar4 = pMVar3;
                }
                if (pMVar4 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
                  FUN_?(pMVar3);
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
                (this->fields)._._.onLeave = (Action *)pMVar4;
                if (pMVar3->klass ==
                    (MVRuntimeDataVariable_OnChangeDelegate__Class *)TypeInfo__System__Action) {
                  pMVar2 = pMVar3;
                }
                if (pMVar2 == (MVRuntimeDataVariable_OnChangeDelegate *)0x0) {
                  FUN_?(pMVar3);
                  pcVar5 = (code *)swi(3);
                  (*pcVar5)();
                  return;
                }
              }
              if (iRam_? != 0) {
                uVar6 = (uint)((ulonglong)&(this->fields)._._.onLeave >> 0xc);
                lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
                do {
                  uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
                  puVar9 = (ulonglong *)(lVar7 + 0xADDR);
                  LOCK();
                  bVar10 = uVar8 == *puVar9;
                  if (bVar10) {
                    *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
                  }
                  UNLOCK();
                } while (!bVar10);
              }
              pMVar22 = (MVTriggerHandler *)
                        UnityEngine.CoreModule.dll::UnityEngine::GameObject::
                        GameObject_AddComponent_1
                                  (this_00,
                                   MVTriggerHandler_MethodInfo__UnityEngine__GameObject__AddComponent<MVTriggerHandler>__
                                  );
              bVar10 = iRam_? != 0;
              (this->fields)._.triggerHandler = pMVar22;
              if (bVar10) {
                uVar6 = (uint)((ulonglong)&(this->fields)._.triggerHandler >> 0xc);
                lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
                do {
                  uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
                  puVar9 = (ulonglong *)(lVar7 + 0xADDR);
                  LOCK();
                  bVar10 = uVar8 == *puVar9;
                  if (bVar10) {
                    *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
                  }
                  UNLOCK();
                } while (!bVar10);
              }
              pLVar23 = (this->fields)._._.localComponents;
              if (pLVar23 != (List_1_UnityEngine_Component_ *)0x0) {
                FUN_?(pLVar23,pOVar11);
                pLVar23 = (this->fields)._._.localComponents;
                if (pLVar23 != (List_1_UnityEngine_Component_ *)0x0) {
                  FUN_?(pLVar23,smoothController);
                  pLVar23 = (this->fields)._._.localComponents;
                  if (pLVar23 != (List_1_UnityEngine_Component_ *)0x0) {
                    FUN_?(pLVar23,hoverCraftMotor);
                    pLVar23 = (this->fields)._._.localComponents;
                    if (pLVar23 != (List_1_UnityEngine_Component_ *)0x0) {
                      FUN_?(pLVar23,pOVar17);
                      pLVar23 = (this->fields)._._.localComponents;
                      if (pLVar23 != (List_1_UnityEngine_Component_ *)0x0) {
                        FUN_?(pLVar23,(this->fields)._.triggerHandler);
                        iVar18 = iRam_?;
                        (this->fields)._.vehicleMotor = hoverCraftMotor;
                        if (iVar18 != 0) {
                          uVar6 = (uint)((ulonglong)&(this->fields)._.vehicleMotor >> 0xc);
                          lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
                          do {
                            uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
                            puVar9 = (ulonglong *)(lVar7 + 0xADDR);
                            LOCK();
                            bVar10 = uVar8 == *puVar9;
                            if (bVar10) {
                              *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
                            }
                            UNLOCK();
                            iVar18 = iRam_?;
                          } while (!bVar10);
                        }
                        (this->fields)._.owner = vehicleBase;
                        if (iVar18 != 0) {
                          uVar6 = (uint)((ulonglong)&(this->fields)._.owner >> 0xc);
                          lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
                          do {
                            uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
                            puVar9 = (ulonglong *)(lVar7 + 0xADDR);
                            LOCK();
                            bVar10 = uVar8 == *puVar9;
                            if (bVar10) {
                              *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
                            }
                            UNLOCK();
                          } while (!bVar10);
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
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

