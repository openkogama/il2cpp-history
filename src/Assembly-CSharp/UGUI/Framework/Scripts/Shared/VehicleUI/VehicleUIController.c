
/* Void Awake() */

void Assembly-CSharp.dll::UGUI::Framework::Scripts::Shared::VehicleUI::VehicleUIController::
     VehicleUIController_Awake(VehicleUIController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__System__Action<int>);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__System__Action<bool,_float>);
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<bool>__add_OnChange_Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable_1_T___SubDelegate<bool>_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable_1_T___SubDelegate<bool>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__UGUI__Framework__Scripts__Shared__VehicleUI__VehicleUIController__OnIsInVehicleChange_bool_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__UGUI__Framework__Scripts__Shared__VehicleUI__VehicleUIController__OnSpawnRoleModeChange_int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__UGUI__Framework__Scripts__Shared__VehicleUI__VehicleUIController__OnSpeedOMeterShowHide_bool__float_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).rectTransform;
  if ((this_00 != (RectTransform *)0x0) &&
     (this_02 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this_00,(MethodInfo *)0x0), this_02 != (GameObject *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (this_02,0,(MethodInfo *)0x0);
    pSVar1 = MVGameControllerBase::MVGameControllerBase_get_SpawnRoleDataMediatorLocal
                        ((MethodInfo *)0x0);
    if (pSVar1 != (SpawnRoleDataMediator *)0x0) {
      pSVar2 = (pSVar1->fields).isInVehicle;
      pDVar3 = (Delegate *)
                FUN_?(
                             TypeInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable_1_T___SubDelegate<bool>
                             );
      pMVar4 = 
      MethodInfo__UGUI__Framework__Scripts__Shared__VehicleUI__VehicleUIController__OnIsInVehicleChange_bool_
      ;
      bVar5 = iRam_? != 0;
      (pDVar3->fields).method_ptr =
           MethodInfo__UGUI__Framework__Scripts__Shared__VehicleUI__VehicleUIController__OnIsInVehicleChange_bool_
           ->virtualMethodPointer;
      (pDVar3->fields).method = pMVar4;
      (pDVar3->fields).m_target = (Object *)this;
      if (bVar5) {
        uVar6 = (uint)((ulonglong)&(pDVar3->fields).m_target >> 0xc);
        lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
        do {
          uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
          puVar9 = (ulonglong *)(lVar7 + 0xADDR);
          LOCK();
          bVar5 = uVar8 == *puVar9;
          if (bVar5) {
            *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
          }
          UNLOCK();
        } while (!bVar5);
      }
      uVar10 = pMVar4->parameters_count;
      (pDVar3->fields).method_code = pDVar3;
      if (((pMVar4->flags & 0x10) == 0) || (uVar10 != 1)) {
        (pDVar3->fields).method_code = (pDVar3->fields).m_target;
        puVar11 = (pDVar3->fields).method_ptr;
      }
      else {
        puVar11 = &UNK_?;
      }
      (pDVar3->fields).invoke_impl = puVar11;
      (pDVar3->fields).extra_arg = FUN_?;
      pMVar4 = 
      MethodInfo__Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable<bool>__add_OnChange_Assets__Scripts__Network__Player__SpawnRoles__SpawnRoleData__SpawnRoleVariableTypes__SpawnRoleVariable_1_T___SubDelegate<bool>_
      ;
      if (pSVar2 != (SpawnRoleDataMediator_SpawnRoleVariableInternal_1_System_Boolean_ *)0x0) {
        ppSVar12 = &(pSVar2->fields)._.OnChange;
        a = (pSVar2->fields)._.OnChange;
        do {
          method_00 = (MethodInfo *)0x0;
          pDVar13 = mscorlib.dll::System::Delegate::Delegate_Combine
                              ((Delegate *)a,pDVar3,(MethodInfo *)0x0);
          player = pMVar4->klass->rgctx_data;
          pIVar14 = (Il2CppRGCTXData *)player[6].method;
          if ((*(byte *)((longlong)pIVar14 + 0x135) & 1) == 0) {
            pIVar14 = (Il2CppRGCTXData *)FUN_?();
          }
          if (pDVar13 == (Delegate *)0x0) {
            pSVar15 = (SpawnRoleVariable_1_T_SubDelegate_System_Boolean_ *)0x0;
          }
          else {
            player = pIVar14;
            pSVar15 = (SpawnRoleVariable_1_T_SubDelegate_System_Boolean_ *)FUN_?(pDVar13);
            if (pSVar15 == (SpawnRoleVariable_1_T_SubDelegate_System_Boolean_ *)0x0) {
              FUN_?(pDVar13,pIVar14);
              pcVar16 = (code *)swi(3);
              (*pcVar16)();
              return;
            }
          }
          LOCK();
          pSVar17 = *ppSVar12;
          bVar5 = a == pSVar17;
          if (bVar5) {
            *ppSVar12 = pSVar15;
            pSVar17 = a;
          }
          UNLOCK();
          pSVar15 = a;
          if (!bVar5) {
            pSVar15 = pSVar17;
          }
          if (iRam_? != 0) {
            uVar6 = (uint)((ulonglong)ppSVar12 >> 0xc);
            method_00 = (MethodInfo *)(ulonglong)(uVar6 & 0x3f);
            lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
            player = (Il2CppRGCTXData *)(lVar7 + 0xADDR);
            do {
              uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
              LOCK();
              bVar5 = uVar8 == *(ulonglong *)(lVar7 + 0xADDR);
              if (bVar5) {
                *(ulonglong *)(lVar7 + 0xADDR) = uVar8 | 1L << (longlong)method_00;
              }
              UNLOCK();
            } while (!bVar5);
          }
          bVar5 = pSVar15 != a;
          a = pSVar15;
        } while (bVar5);
        MVTriggerBox::MVTriggerBox_OnExit((MVTriggerBox *)0x0,(MVPlayer *)player,method_00);
        if (extraout_RAX != 0) {
          this_01 = *(SpawnRolesManager **)(extraout_RAX + 0x88);
          value = (Action_1_Int32_ *)FUN_?(TypeInfo__System__Action<int>);
          FUN_?(value,this);
          if (this_01 != (SpawnRolesManager *)0x0) {
            SpawnRolesManager::SpawnRolesManager_add_OnSpawnRoleActivated
                      (this_01,value,(MethodInfo *)0x0);
            pSVar18 = (this->fields).speedOMeter;
            if (pSVar18 != (SpeedOMeter *)0x0) {
              pAVar19 = (pSVar18->fields).OnShowHide;
              pDVar3 = (Delegate *)FUN_?(TypeInfo__System__Action<bool,_float>);
              pMVar4 = 
              MethodInfo__UGUI__Framework__Scripts__Shared__VehicleUI__VehicleUIController__OnSpeedOMeterShowHide_bool__float_
              ;
              bVar5 = iRam_? != 0;
              (pDVar3->fields).method_ptr =
                   MethodInfo__UGUI__Framework__Scripts__Shared__VehicleUI__VehicleUIController__OnSpeedOMeterShowHide_bool__float_
                   ->virtualMethodPointer;
              (pDVar3->fields).method = pMVar4;
              (pDVar3->fields).m_target = (Object *)this;
              if (bVar5) {
                uVar6 = (uint)((ulonglong)&(pDVar3->fields).m_target >> 0xc);
                lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
                do {
                  uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
                  puVar9 = (ulonglong *)(lVar7 + 0xADDR);
                  LOCK();
                  bVar5 = uVar8 == *puVar9;
                  if (bVar5) {
                    *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
                  }
                  UNLOCK();
                } while (!bVar5);
              }
              uVar10 = pMVar4->parameters_count;
              (pDVar3->fields).method_code = pDVar3;
              if (((pMVar4->flags & 0x10) == 0) || (uVar10 != 2)) {
                (pDVar3->fields).method_code = (pDVar3->fields).m_target;
                puVar11 = (pDVar3->fields).method_ptr;
              }
              else {
                puVar11 = &UNK_?;
              }
              (pDVar3->fields).invoke_impl = puVar11;
              (pDVar3->fields).extra_arg = FUN_?;
              pDVar3 = mscorlib.dll::System::Delegate::Delegate_Combine
                                  ((Delegate *)pAVar19,pDVar3,(MethodInfo *)0x0);
              pAVar20 = TypeInfo__System__Action<bool,_float>;
              if (pDVar3 == (Delegate *)0x0) {
                (pSVar18->fields).OnShowHide = (Action_2_Boolean_Single_ *)0x0;
              }
              else {
                pAVar19 = (Action_2_Boolean_Single_ *)
                          FUN_?(pDVar3,TypeInfo__System__Action<bool,_float>);
                if (pAVar19 == (Action_2_Boolean_Single_ *)0x0) {
                  FUN_?(pDVar3,pAVar20);
                  pcVar16 = (code *)swi(3);
                  (*pcVar16)();
                  return;
                }
                (pSVar18->fields).OnShowHide = pAVar19;
                pAVar20 = TypeInfo__System__Action<bool,_float>;
                lVar7 = FUN_?(pDVar3,TypeInfo__System__Action<bool,_float>);
                if (lVar7 == 0) {
                  FUN_?(pDVar3,pAVar20);
                  pcVar16 = (code *)swi(3);
                  (*pcVar16)();
                  return;
                }
              }
              if (iRam_? != 0) {
                uVar6 = (uint)((ulonglong)&(pSVar18->fields).OnShowHide >> 0xc);
                lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
                do {
                  uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
                  puVar9 = (ulonglong *)(lVar7 + 0xADDR);
                  LOCK();
                  bVar5 = uVar8 == *puVar9;
                  if (bVar5) {
                    *puVar9 = uVar8 | 1L << (uVar6 & 0x3f);
                  }
                  UNLOCK();
                } while (!bVar5);
              }
              return;
            }
          }
        }
      }
    }
  }
  FUN_?();
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
  return;
}


/* Void FixedUpdate() */

void Assembly-CSharp.dll::UGUI::Framework::Scripts::Shared::VehicleUI::VehicleUIController::
     VehicleUIController_FixedUpdate(VehicleUIController *this,MethodInfo *method)

{
  if ((this->fields).hasRigidBody == 0) {
    return;
  }
  this_00 = (this->fields).speedOMeter;
  if (this_00 != (SpeedOMeter *)0x0) {
    SpeedOMeter::SpeedOMeter_UpdateSpeed(this_00,(MethodInfo *)0x0);
    this_01 = (this->fields).vehicleEnergyMeter;
    if (this_01 != (VehicleEnergyMeterText *)0x0) {
      if (cRam_? == '\0') {
        FUN_?(&::StringLiteral__);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if ((this_01->fields).isVisible == 0) {
        return;
      }
      pVVar1 = (this_01->fields).vehicleEnergyContainer;
      if (pVVar1 != (VehicleEnergyContainer *)0x0) {
        iVar2 = (int)(((pVVar1->fields).energyStorage / (pVVar1->fields).originalEnergyStorage) *
                     _UNK_?);
        iVar3 = (this_01->fields).currentEnergyStatus;
        if (iVar2 < iVar3) {
          (this_01->fields).currentEnergyStatus = iVar2;
        }
        else if (iVar3 < iVar2) {
          piVar4 = &(this_01->fields).currentEnergyStatus;
          *piVar4 = *piVar4 + 1;
        }
        pTVar5 = (this_01->fields).energyText;
        pSVar6 = mscorlib.dll::System::Int32::Int32_ToString
                           ((Int32 *)&(this_01->fields).currentEnergyStatus,(MethodInfo *)0x0);
        pSVar7 = ::StringLiteral__;
        if (pSVar6 != (String *)0x0) {
          pSVar7 = pSVar6;
        }
        if (pTVar5 != (Text *)0x0) {
          (*(pTVar5->klass->vtable).set_text.methodPtr)
                    (pTVar5,pSVar7,(pTVar5->klass->vtable).set_text.method,in_R9,unaff_RBX);
          VehicleEnergyMeterText::VehicleEnergyMeterText_VisualStuff(this_01,(MethodInfo *)0x0);
          return;
        }
      }
      FUN_?();
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  FUN_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void OnIsInVehicleChange(Boolean) */

void Assembly-CSharp.dll::UGUI::Framework::Scripts::Shared::VehicleUI::VehicleUIController::
     VehicleUIController_OnIsInVehicleChange
               (VehicleUIController *this,bool value,MethodInfo *method)

{
  (this->fields).insideVehicle = value;
  VehicleUIController_UpdateRigidBody(this,(MethodInfo *)0x0);
  pSVar1 = (this->fields).speedOMeter;
  if (pSVar1 != (SpeedOMeter *)0x0) {
    (*(pSVar1->klass->vtable).Initialize.methodPtr)
              (pSVar1,(ulonglong)(this->fields).insideVehicle,(this->fields).rigidBody,
               (pSVar1->klass->vtable).Initialize.method,unaff_RBX);
    pVVar2 = (this->fields).vehicleEnergyMeter;
    if (pVVar2 != (VehicleEnergyMeterText *)0x0) {
      (*(pVVar2->klass->vtable).Initialize.methodPtr)
                (pVVar2,(ulonglong)(this->fields).insideVehicle,(this->fields).rigidBody,
                 (pVVar2->klass->vtable).Initialize.method);
      if ((((this->fields).vehicleEnergyMeter != (VehicleEnergyMeterText *)0x0) &&
          (pSVar1 = (this->fields).speedOMeter, pSVar1 != (SpeedOMeter *)0x0)) &&
         (obj = (pSVar1->fields).speedGroup, obj != (CanvasGroup *)0x0)) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::CanvasGroup>_UnityEngine__CanvasGroup_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar3 = (obj->fields)._._._.m_CachedPtr;
        if (pvVar3 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pcVar4 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
          uVar5 = func_?(&UNK_?);
          FUN_?(uVar5,0);
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pcRam_? = pcVar4;
        fVar6 = (float)(*pcRam_?)(pvVar3);
        this_00 = (this->fields).rectTransform;
        if (this_00 != (RectTransform *)0x0) {
          obj_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)this_00,(MethodInfo *)0x0);
          bVar7 = (this->fields).insideVehicle != 0 || 0.0 < fVar6;
          if (obj_00 != (GameObject *)0x0) {
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                            ,bVar7,0);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            if (obj_00 == (GameObject *)0x0) {
              FUN_?();
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pvVar3 = (obj_00->fields)._.m_CachedPtr;
            if (pvVar3 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)obj_00,(MethodInfo *)0x0);
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pcVar4 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
              uVar5 = func_?(&UNK_?);
              FUN_?(uVar5,0);
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pcRam_? = pcVar4;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*pcRam_?)(pvVar3,bVar7);
            return;
          }
        }
      }
      FUN_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void OnSpeedOMeterShowHide(Boolean, Single) */

void Assembly-CSharp.dll::UGUI::Framework::Scripts::Shared::VehicleUI::VehicleUIController::
     VehicleUIController_OnSpeedOMeterShowHide
               (VehicleUIController *this,bool visible,float alpha,MethodInfo *method)

{
  if (visible == 0) {
    pVVar1 = (this->fields).vehicleEnergyMeter;
    if (pVVar1 == (VehicleEnergyMeterText *)0x0) goto code_?;
    if ((pVVar1->fields).isVisible != 0) {
      return;
    }
  }
  VehicleUIController_UpdateVisibility(this,(MethodInfo *)0x0);
  this_00 = (this->fields).rectTransform;
  if ((this_00 != (RectTransform *)0x0) &&
     (this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this_00,(MethodInfo *)0x0), this_01 != (GameObject *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (this_01,visible,(MethodInfo *)0x0);
    return;
  }
code_?:
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Start() */

void Assembly-CSharp.dll::UGUI::Framework::Scripts::Shared::VehicleUI::VehicleUIController::
     VehicleUIController_Start(VehicleUIController *this,MethodInfo *method)

{
  VehicleUIController_UpdateRigidBody(this,(MethodInfo *)0x0);
  pSVar1 = (this->fields).speedOMeter;
  if (pSVar1 != (SpeedOMeter *)0x0) {
    (*(pSVar1->klass->vtable).Initialize.methodPtr)
              (pSVar1,(ulonglong)(this->fields).insideVehicle,(this->fields).rigidBody,
               (pSVar1->klass->vtable).Initialize.method,unaff_RBX);
    pVVar2 = (this->fields).vehicleEnergyMeter;
    if (pVVar2 != (VehicleEnergyMeterText *)0x0) {
      (*(pVVar2->klass->vtable).Initialize.methodPtr)
                (pVVar2,(ulonglong)(this->fields).insideVehicle,(this->fields).rigidBody,
                 (pVVar2->klass->vtable).Initialize.method);
      if ((((this->fields).vehicleEnergyMeter != (VehicleEnergyMeterText *)0x0) &&
          (pSVar1 = (this->fields).speedOMeter, pSVar1 != (SpeedOMeter *)0x0)) &&
         (obj = (pSVar1->fields).speedGroup, obj != (CanvasGroup *)0x0)) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::CanvasGroup>_UnityEngine__CanvasGroup_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar3 = (obj->fields)._._._.m_CachedPtr;
        if (pvVar3 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pcVar4 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
          uVar5 = func_?(&UNK_?);
          FUN_?(uVar5,0);
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pcRam_? = pcVar4;
        fVar6 = (float)(*pcRam_?)(pvVar3);
        this_00 = (this->fields).rectTransform;
        if (this_00 != (RectTransform *)0x0) {
          obj_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)this_00,(MethodInfo *)0x0);
          bVar7 = (this->fields).insideVehicle != 0 || 0.0 < fVar6;
          if (obj_00 != (GameObject *)0x0) {
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                            ,bVar7,0);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            if (obj_00 == (GameObject *)0x0) {
              FUN_?();
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pvVar3 = (obj_00->fields)._.m_CachedPtr;
            if (pvVar3 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)obj_00,(MethodInfo *)0x0);
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pcVar4 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
              uVar5 = func_?(&UNK_?);
              FUN_?(uVar5,0);
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pcRam_? = pcVar4;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*pcRam_?)(pvVar3,bVar7);
            return;
          }
        }
      }
      FUN_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void UpdateRigidBody() */

void Assembly-CSharp.dll::UGUI::Framework::Scripts::Shared::VehicleUI::VehicleUIController::
     VehicleUIController_UpdateRigidBody(VehicleUIController *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&MVRigidBody_MethodInfo__UnityEngine__GameObject__GetComponent<MVRigidBody>__);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (pMVar1 == (MVWorldObjectClientManager *)0x0) {
code_?:
    (this->fields).insideVehicle = 0;
    bVar2 = iRam_? != 0;
    (this->fields).rigidBody = (MVRigidBody *)0x0;
    if (bVar2) {
      uVar3 = (uint)((ulonglong)&(this->fields).rigidBody >> 0xc);
      lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
      do {
        uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
        puVar6 = (ulonglong *)(lVar4 + 0xADDR);
        LOCK();
        bVar2 = uVar5 == *puVar6;
        if (bVar2) {
          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar2);
    }
    (this->fields).hasRigidBody = 0;
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__MVGameControllerBase);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar7 = TypeInfo__MVGameControllerBase->static_fields->instance;
  if (((pMVar7 != (MVGameControllerBase *)0x0) &&
      (pMVar8 = (pMVar7->fields).game, pMVar8 != (MVNetworkGame *)0x0)) &&
     (pMVar9 = (pMVar8->fields)._PlayerController_k__BackingField,
     pMVar9 != (MVLocalObjectController *)0x0)) {
    pMVar10 = MVLocalObjectController::MVLocalObjectController_get_CurrentWorldObject
                       (pMVar9,(MethodInfo *)0x0);
    if (pMVar10 == (MVWorldObjectClient *)0x0) goto code_?;
    pMVar8 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (((pMVar8 != (MVNetworkGame *)0x0) &&
        (pMVar9 = (pMVar8->fields)._PlayerController_k__BackingField,
        pMVar9 != (MVLocalObjectController *)0x0)) &&
       ((pMVar10 = MVLocalObjectController::MVLocalObjectController_get_CurrentWorldObject
                            (pMVar9,(MethodInfo *)0x0), pMVar10 != (MVWorldObjectClient *)0x0 &&
        (this_00 = (pMVar10->fields).gameObject, this_00 != (GameObject *)0x0)))) {
      pMVar11 = (MVRigidBody *)
                UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_GetComponent_1
                          (this_00,
                           MVRigidBody_MethodInfo__UnityEngine__GameObject__GetComponent<MVRigidBody>__
                          );
      bVar2 = iRam_? != 0;
      (this->fields).rigidBody = pMVar11;
      if (bVar2) {
        uVar3 = (uint)((ulonglong)&(this->fields).rigidBody >> 0xc);
        lVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6) * 8;
        do {
          uVar5 = *(ulonglong *)(lVar4 + 0xADDR);
          puVar6 = (ulonglong *)(lVar4 + 0xADDR);
          LOCK();
          bVar2 = uVar5 == *puVar6;
          if (bVar2) {
            *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
          }
          UNLOCK();
        } while (!bVar2);
      }
      pMVar11 = (this->fields).rigidBody;
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
      if (pMVar11 == (MVRigidBody *)0x0) {
        bVar2 = false;
      }
      else {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        bVar2 = (pMVar11->fields)._._._._._.m_CachedPtr != (void *)0x0;
      }
      (this->fields).hasRigidBody = bVar2;
      if (bVar2 != false) {
        return;
      }
      (this->fields).insideVehicle = 0;
      return;
    }
  }
  FUN_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void UpdateUI() */

void Assembly-CSharp.dll::UGUI::Framework::Scripts::Shared::VehicleUI::VehicleUIController::
     VehicleUIController_UpdateUI(VehicleUIController *this,MethodInfo *method)

{
  pSVar1 = (this->fields).speedOMeter;
  if (pSVar1 != (SpeedOMeter *)0x0) {
    (*(pSVar1->klass->vtable).Initialize.methodPtr)
              (pSVar1,(ulonglong)(this->fields).insideVehicle,(this->fields).rigidBody,
               (pSVar1->klass->vtable).Initialize.method);
    pVVar2 = (this->fields).vehicleEnergyMeter;
    if (pVVar2 != (VehicleEnergyMeterText *)0x0) {
      (*(pVVar2->klass->vtable).Initialize.methodPtr)
                (pVVar2,(ulonglong)(this->fields).insideVehicle,(this->fields).rigidBody,
                 (pVVar2->klass->vtable).Initialize.method);
      if ((((this->fields).vehicleEnergyMeter != (VehicleEnergyMeterText *)0x0) &&
          (pSVar1 = (this->fields).speedOMeter, pSVar1 != (SpeedOMeter *)0x0)) &&
         (obj = (pSVar1->fields).speedGroup, obj != (CanvasGroup *)0x0)) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::CanvasGroup>_UnityEngine__CanvasGroup_
                       );
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        pvVar3 = (obj->fields)._._._.m_CachedPtr;
        if (pvVar3 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pcVar4 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
          uVar5 = func_?(&UNK_?);
          FUN_?(uVar5,0);
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pcRam_? = pcVar4;
        fVar6 = (float)(*pcRam_?)(pvVar3);
        this_00 = (this->fields).rectTransform;
        if (this_00 != (RectTransform *)0x0) {
          obj_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                             ((Component *)this_00,(MethodInfo *)0x0);
          bVar7 = (this->fields).insideVehicle != 0 || 0.0 < fVar6;
          if (obj_00 != (GameObject *)0x0) {
            if (cRam_? == '\0') {
              FUN_?(&
                            void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                            ,bVar7,0);
              LOCK();
              UNLOCK();
              cRam_? = '\x01';
            }
            if (obj_00 == (GameObject *)0x0) {
              FUN_?();
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pvVar3 = (obj_00->fields)._.m_CachedPtr;
            if (pvVar3 == (void *)0x0) {
              UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
              ThrowHelper_2_ThrowNullReferenceException((Object *)obj_00,(MethodInfo *)0x0);
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pcVar4 = pcRam_?;
            if ((pcRam_? == (code *)0x0) &&
               (pcVar4 = (code *)FUN_?(&UNK_?), pcVar4 == (code *)0x0)) {
              uVar5 = func_?(&UNK_?);
              FUN_?(uVar5,0);
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            pcRam_? = pcVar4;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*pcRam_?)(pvVar3,bVar7);
            return;
          }
        }
      }
      FUN_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
  }
  FUN_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void UpdateVisibility() */

void Assembly-CSharp.dll::UGUI::Framework::Scripts::Shared::VehicleUI::VehicleUIController::
     VehicleUIController_UpdateVisibility(VehicleUIController *this,MethodInfo *method)

{
  if ((((this->fields).vehicleEnergyMeter != (VehicleEnergyMeterText *)0x0) &&
      (pSVar1 = (this->fields).speedOMeter, pSVar1 != (SpeedOMeter *)0x0)) &&
     (obj = (pSVar1->fields).speedGroup, obj != (CanvasGroup *)0x0)) {
    if (cRam_? == '\0') {
      FUN_?(&
                    void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::CanvasGroup>_UnityEngine__CanvasGroup_
                   );
      LOCK();
      UNLOCK();
      cRam_? = '\x01';
    }
    pvVar2 = (obj->fields)._._._.m_CachedPtr;
    if (pvVar2 == (void *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
      ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pcVar3 = pcRam_?;
    if ((pcRam_? == (code *)0x0) &&
       (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
      uVar4 = func_?(&UNK_?);
      FUN_?(uVar4,0);
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pcRam_? = pcVar3;
    fVar5 = (float)(*pcRam_?)(pvVar2);
    this_00 = (this->fields).rectTransform;
    if (this_00 != (RectTransform *)0x0) {
      obj_00 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)this_00,(MethodInfo *)0x0);
      bVar6 = (this->fields).insideVehicle != 0 || 0.0 < fVar5;
      if (obj_00 != (GameObject *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&
                        void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::GameObject>_UnityEngine__GameObject_
                        ,bVar6,0,in_R9,unaff_RSI);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        if (obj_00 == (GameObject *)0x0) {
          FUN_?();
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pvVar2 = (obj_00->fields)._.m_CachedPtr;
        if (pvVar2 == (void *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
          ThrowHelper_2_ThrowNullReferenceException((Object *)obj_00,(MethodInfo *)0x0);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pcVar3 = pcRam_?;
        if ((pcRam_? == (code *)0x0) &&
           (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
          uVar4 = func_?(&UNK_?);
          FUN_?(uVar4,0);
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        pcRam_? = pcVar3;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*pcRam_?)(pvVar2,bVar6);
        return;
      }
    }
  }
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

