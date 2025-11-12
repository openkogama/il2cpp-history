
/* Object GetBluePrintData(Object) */

Object * Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Vehicles::
         VehicleBaseSettings::VehicleBaseSettings_GetBluePrintData
                   (VehicleBaseSettings *this,Object *key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
             *)(this->fields).bluePrintData;
  if (this_00 ==
      (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)0x0
     ) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    pOVar2 = (Object *)(*pcVar1)();
    return pOVar2;
  }
  uVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
          UIElements::StyleComplexSelector+PseudoStateData]::
          Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData__FindEntry
                    (this_00,key,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                     ->klass->rgctx_data[0x21].method);
  if ((int)uVar3 < 0) {
    mscorlib.dll::System::ThrowHelper::ThrowHelper_1_ThrowKeyNotFoundException
              (key,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    pOVar2 = (Object *)(*pcVar1)();
    return pOVar2;
  }
  pDVar4 = (this_00->fields)._entries;
  if (pDVar4 != (Dictionary_2_TKey_TValue_Entry_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___Array
                 *)0x0) {
    if (uVar3 < (uint)pDVar4->max_length) {
      return (Object *)pDVar4->vector[(int)uVar3].value;
    }
    FUN_?();
    pcVar1 = (code *)swi(3);
    pOVar2 = (Object *)(*pcVar1)();
    return pOVar2;
  }
  FUN_?();
  pcVar1 = (code *)swi(3);
  pOVar2 = (Object *)(*pcVar1)();
  return pOVar2;
}


/* Void Initialize(Int32, GameObject) */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Vehicles::
     VehicleBaseSettings::VehicleBaseSettings_Initialize
               (VehicleBaseSettings *this,int32_t woID,GameObject *root,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVVehicleBase);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__MVWorldObjectSpawnerVehicle);
    LOCK();
    UNLOCK();
    FUN_?();
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  apDStack_1[0] = (Dictionary_2_System_Object_System_Object_ *)0x0;
  pMVar2 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
  if (pMVar2 != (MVWorldObjectClientManager *)0x0) {
    pMVar3 = (MVWorldObjectSpawnerVehicle *)
             MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                       (pMVar2,woID,(MethodInfo *)0x0);
    if (pMVar3 == (MVWorldObjectSpawnerVehicle *)0x0) {
      (this->fields).spawnerVehicle = (MVWorldObjectSpawnerVehicle *)0x0;
    }
    else {
      bVar4 = (TypeInfo__MVWorldObjectSpawnerVehicle->_1).naturalAligment;
      if (((pMVar3->klass->_1).naturalAligment < bVar4) ||
         ((MVWorldObjectSpawnerVehicle__Class *)
          (pMVar3->klass->_1).typeHierarchy[(ulonglong)bVar4 - 1] !=
          TypeInfo__MVWorldObjectSpawnerVehicle)) {
        FUN_?(pMVar3);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      (this->fields).spawnerVehicle = pMVar3;
      bVar4 = (TypeInfo__MVWorldObjectSpawnerVehicle->_1).naturalAligment;
      if (((pMVar3->klass->_1).naturalAligment < bVar4) ||
         ((MVWorldObjectSpawnerVehicle__Class *)
          (pMVar3->klass->_1).typeHierarchy[(ulonglong)bVar4 - 1] !=
          TypeInfo__MVWorldObjectSpawnerVehicle)) {
        FUN_?(pMVar3);
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    if (iRam_? != 0) {
      uVar6 = (uint)((ulonglong)&(this->fields).spawnerVehicle >> 0xc);
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
    pMVar3 = (this->fields).spawnerVehicle;
    if (pMVar3 != (MVWorldObjectSpawnerVehicle *)0x0) {
      (this->fields).vehicleWoID = (pMVar3->fields)._.spawnWorldObjectID;
      pMVar2 = MVGameControllerBase::MVGameControllerBase_get_WOCM((MethodInfo *)0x0);
      if (pMVar2 != (MVWorldObjectClientManager *)0x0) {
        pMVar11 = (MVVehicleBase *)
                  MVWorldObjectClientManager::MVWorldObjectClientManager_GetWorldObjectClient
                            (pMVar2,(this->fields).vehicleWoID,(MethodInfo *)0x0);
        if (pMVar11 == (MVVehicleBase *)0x0) {
          (this->fields).vehicleBase = (MVVehicleBase *)0x0;
        }
        else {
          bVar4 = (TypeInfo__MVVehicleBase->_1).naturalAligment;
          if (((pMVar11->klass->_1).naturalAligment < bVar4) ||
             ((MVVehicleBase__Class *)(pMVar11->klass->_1).typeHierarchy[(ulonglong)bVar4 - 1] !=
              TypeInfo__MVVehicleBase)) {
            FUN_?(pMVar11);
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          (this->fields).vehicleBase = pMVar11;
          bVar4 = (TypeInfo__MVVehicleBase->_1).naturalAligment;
          if (((pMVar11->klass->_1).naturalAligment < bVar4) ||
             ((MVVehicleBase__Class *)(pMVar11->klass->_1).typeHierarchy[(ulonglong)bVar4 - 1] !=
              TypeInfo__MVVehicleBase)) {
            FUN_?(pMVar11);
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
        }
        if (iRam_? != 0) {
          uVar6 = (uint)((ulonglong)&(this->fields).vehicleBase >> 0xc);
          lVar7 = (ulonglong)((uVar6 & 0x1fffff) >> 6) * 8;
          do {
            uVar8 = *(ulonglong *)(lVar7 + 0xADDR);
            puVar9 = (ulonglong *)(lVar7 + 0xADDR);
            LOCK();
            bVar10 = uVar8 == *puVar9;
            if (bVar10) {
              *puVar9 = uVar8 | 1L << (ulonglong)(uVar6 & 0x3f);
            }
            UNLOCK();
          } while (!bVar10);
        }
        pMVar3 = (this->fields).spawnerVehicle;
        this_00 = (this->fields).settingsBase;
        if (pMVar3 != (MVWorldObjectSpawnerVehicle *)0x0) {
          pMVar11 = (this->fields).vehicleBase;
          woID_00 = (pMVar3->fields)._.spawnWorldObjectID;
          if ((pMVar11 != (MVVehicleBase *)0x0) &&
             (documentationType =
                   (*(pMVar11->klass->vtable).get_DocumentationType.methodPtr)
                             (pMVar11,(pMVar11->klass->vtable).get_DocumentationType.method),
             this_00 != (SettingsBase *)0x0)) {
            SettingsBase::SettingsBase_Initialize
                      (this_00,woID_00,root,documentationType,(MethodInfo *)0x0);
            bVar10 = iRam_? != 0;
            (this->fields).bluePrintData = (Dictionary_2_System_Object_System_Object_ *)0x0;
            if (bVar10) {
              uVar6 = (uint)((ulonglong)&(this->fields).bluePrintData >> 0xc);
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
            pMVar3 = (this->fields).spawnerVehicle;
            if (pMVar3 != (MVWorldObjectSpawnerVehicle *)0x0) {
              if ((pMVar3->fields)._.spawnWorldObjectID == -1) {
                pDVar12 = (Dictionary_2_System_Object_System_Object_ *)
                          (*(this->klass->vtable).__unknown_1.methodPtr)
                                    (this,(this->klass->vtable).__unknown_1.method);
                bVar10 = iRam_? != 0;
                (this->fields).bluePrintData = pDVar12;
                if (bVar10) {
                  uVar6 = (uint)((ulonglong)&(this->fields).bluePrintData >> 0xc);
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
              }
              else {
                pMVar11 = (this->fields).vehicleBase;
                if ((pMVar11 == (MVVehicleBase *)0x0) ||
                   (pDVar12 = (pMVar11->fields)._._._._.data,
                   pDVar12 == (Dictionary_2_System_Object_System_Object_ *)0x0))
                goto code_?;
                bVar13 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                        Object,System::Object]::
                        Dictionary_2_System_Object_System_Object__TryGetValue
                                  (pDVar12,(Object *)StringLiteral_BlueprintData,
                                   (Object **)apDStack_1,
                                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                                  );
                if ((bVar13 != 0) &&
                   (apDStack_1[0] != (Dictionary_2_System_Object_System_Object_ *)0x0)) {
                  bVar4 = (
                          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                          ->_1).naturalAligment;
                  if ((bVar4 <= (apDStack_1[0]->klass->_1).naturalAligment) &&
                     (((Dictionary_2_System_Object_System_Object___Class *)
                       (apDStack_1[0]->klass->_1).typeHierarchy[(ulonglong)bVar4 - 1] ==
                       TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                      && (apDStack_1[0] != (Dictionary_2_System_Object_System_Object_ *)0x0)))) {
                    (this->fields).bluePrintData = apDStack_1[0];
                    func_?(&(this->fields).bluePrintData);
                  }
                }
                if ((this->fields).bluePrintData == (Dictionary_2_System_Object_System_Object_ *)0x0
                   ) {
                  this_01 = (Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial_
                             *)FUN_?(
                                            TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                            );
                  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
                  Object,UnityEngine::UIElements::UIR::UIRenderDevice+DisableForceGammaMaterial]::
                  Dictionary_2_System_Object_UnityEngine_UIElements_UIR_UIRenderDevice_DisableForceGammaMaterial___ctor
                            (this_01,
                             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                            );
                  bVar10 = iRam_? != 0;
                  (this->fields).bluePrintData =
                       (Dictionary_2_System_Object_System_Object_ *)this_01;
                  if (bVar10) {
                    uVar6 = (uint)((ulonglong)&(this->fields).bluePrintData >> 0xc);
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
                }
                (*(this->klass->vtable).__unknown_2.methodPtr)
                          (this,(this->klass->vtable).__unknown_2.method);
              }
              (*(this->klass->vtable).__unknown.methodPtr)
                        (this,root,(this->klass->vtable).__unknown.method);
              pAVar14 = (this->fields).OnInitialized;
              if (pAVar14 != (Action *)0x0) {
                (*(pAVar14->fields)._._.invoke_impl)
                          ((pAVar14->fields)._._.method_code,(pAVar14->fields)._._.method);
              }
              return;
            }
          }
        }
      }
    }
  }
code_?:
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnVehicleEnergySettingsOpen() */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Vehicles::
     VehicleBaseSettings::VehicleBaseSettings_OnVehicleEnergySettingsOpen
               (VehicleBaseSettings *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  TypeInfo__UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__VehicleEnergyForVehicleSettings
                 );
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  this_00 = (this->fields).vehicleEnergyForVehicleSettings;
  if ((this_00 != (VehicleEnergyForVehicleSettings *)0x0) &&
     (this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                          ((Component *)this_00,(MethodInfo *)0x0), this_01 != (GameObject *)0x0)) {
    UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
              (this_01,1,(MethodInfo *)0x0);
    if (*(int *)&(
                 TypeInfo__UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__VehicleEnergyForVehicleSettings
                 ->_1).field_0x1c == 0) {
      FUN_?(
                   TypeInfo__UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__VehicleEnergyForVehicleSettings
                   );
    }
    obj = (this->fields).canvas;
    if (obj != (RectTransform *)0x0) {
      auStack_1[0] =
           CONCAT44((TypeInfo__UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__VehicleEnergyForVehicleSettings
                     ->static_fields->VehicleEnergyEditingCanvasSize).y,
                    (TypeInfo__UGUI__Desktop__Scripts__EditMode__SettingsBoxes__Vehicles__VehicleEnergyForVehicleSettings
                     ->static_fields->VehicleEnergyEditingCanvasSize).x);
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::RectTransform>_UnityEngine__RectTransform_
                      ,auStack_1[0],0);
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      if (obj == (RectTransform *)0x0) {
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pvVar3 = (obj->fields)._._._.m_CachedPtr;
      if (pvVar3 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pcVar2 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
        uVar4 = func_?(&UNK_?);
        FUN_?(uVar4,0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pcRam_? = pcVar2;
      (*pcRam_?)(pvVar3,auStack_1);
      return;
    }
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void ResetCanvasSize() */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Vehicles::
     VehicleBaseSettings::VehicleBaseSettings_ResetCanvasSize
               (VehicleBaseSettings *this,MethodInfo *method)

{
  obj = (this->fields).canvas;
  auStack_1[0] =
       (*(this->klass->vtable).get_DefaultCanvasSize.methodPtr)
                 (this,(this->klass->vtable).get_DefaultCanvasSize.method);
  if (obj == (RectTransform *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::RectTransform>_UnityEngine__RectTransform_
                  ,auStack_1[0],0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (obj == (RectTransform *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pvVar3 = (obj->fields)._._._.m_CachedPtr;
  if (pvVar3 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcVar2 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
    uVar4 = func_?(&UNK_?);
    FUN_?(uVar4,0);
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  pcRam_? = pcVar2;
  (*pcRam_?)(pvVar3,auStack_1);
  return;
}


/* Void SetCanvasSize(Vector2) */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Vehicles::
     VehicleBaseSettings::VehicleBaseSettings_SetCanvasSize
               (VehicleBaseSettings *this,Vector2 size,MethodInfo *method)

{
  obj = (this->fields).canvas;
  if (obj == (RectTransform *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  aVStack_2[0] = size;
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::RectTransform>_UnityEngine__RectTransform_
                  ,size,0);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (obj == (RectTransform *)0x0) {
    FUN_?();
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pvVar3 = (obj->fields)._._._.m_CachedPtr;
  if (pvVar3 == (void *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
    ThrowHelper_2_ThrowNullReferenceException((Object *)obj,(MethodInfo *)0x0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcVar1 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar1 = (code *)FUN_?(&UNK_?), pcVar1 == (code *)0x0)) {
    uVar4 = func_?(&UNK_?);
    FUN_?(uVar4,0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  pcRam_? = pcVar1;
  (*pcRam_?)(pvVar3,aVStack_2);
  return;
}


/* String SettingsKey(String) */

String * Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Vehicles::
         VehicleBaseSettings::VehicleBaseSettings_SettingsKey(String *key,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&StringLiteral_BlueprintData_);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = StringLiteral_BlueprintData_;
  if ((StringLiteral_BlueprintData_ == (String *)0x0) ||
     ((StringLiteral_BlueprintData_->fields)._stringLength == 0)) {
    if ((key != (String *)0x0) && ((key->fields)._stringLength != 0)) {
      return key;
    }
    return (String *)**(undefined8 **)(lRam_? + 0xb8);
  }
  if ((key == (String *)0x0) || ((key->fields)._stringLength == 0)) {
    return StringLiteral_BlueprintData_;
  }
  iVar2 = (StringLiteral_BlueprintData_->fields)._stringLength;
  pSVar3 = (String *)FUN_?((key->fields)._stringLength + iVar2,key,0);
  if (pSVar3 == (String *)0x0) {
    FUN_?();
    pcVar4 = (code *)swi(3);
    pSVar1 = (String *)(*pcVar4)();
    return pSVar1;
  }
  if ((pSVar1->fields)._stringLength <= (pSVar3->fields)._stringLength) {
    puVar5 = &(pSVar3->fields)._firstChar;
    puVar6 = &(pSVar1->fields)._firstChar;
    uVar7 = (pSVar1->fields)._stringLength * 2;
    if (((ulonglong)((longlong)puVar5 - (longlong)puVar6) < (ulonglong)uVar7) ||
       ((ulonglong)((longlong)puVar6 - (longlong)puVar5) < (ulonglong)uVar7)) {
      FUN_?();
    }
    else {
      mscorlib.dll::System::Buffer::Buffer_Memcpy_1
                ((uint8_t *)puVar5,(uint8_t *)puVar6,uVar7,(MethodInfo *)0x0);
    }
    if ((key->fields)._stringLength <= (pSVar3->fields)._stringLength - iVar2) {
      puVar6 = &(pSVar3->fields)._firstChar + iVar2;
      puVar5 = &(key->fields)._firstChar;
      uVar7 = (key->fields)._stringLength * 2;
      if (((ulonglong)((longlong)puVar6 - (longlong)puVar5) < (ulonglong)uVar7) ||
         ((ulonglong)((longlong)puVar5 - (longlong)puVar6) < (ulonglong)uVar7)) {
        FUN_?();
      }
      else {
        mscorlib.dll::System::Buffer::Buffer_Memcpy_1
                  ((uint8_t *)puVar6,(uint8_t *)puVar5,uVar7,(MethodInfo *)0x0);
      }
      return pSVar3;
    }
    uVar8 = func_?(&TypeInfo__System__IndexOutOfRangeException);
    pIVar9 = (IndexOutOfRangeException *)func_?(uVar8);
    mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor
              (pIVar9,(MethodInfo *)0x0);
    uVar8 = func_?(&
                                MethodInfo__System__String__FillStringChecked_MethodInfo__System__String__int__MethodInfo__System__String_
                               );
    FUN_?(pIVar9,uVar8);
    pcVar4 = (code *)swi(3);
    pSVar1 = (String *)(*pcVar4)();
    return pSVar1;
  }
  uVar8 = func_?(&TypeInfo__System__IndexOutOfRangeException);
  pIVar9 = (IndexOutOfRangeException *)func_?(uVar8);
  mscorlib.dll::System::IndexOutOfRangeException::IndexOutOfRangeException__ctor
            (pIVar9,(MethodInfo *)0x0);
  uVar8 = func_?(&
                              MethodInfo__System__String__FillStringChecked_MethodInfo__System__String__int__MethodInfo__System__String_
                             );
  FUN_?(pIVar9,uVar8);
  pcVar4 = (code *)swi(3);
  pSVar1 = (String *)(*pcVar4)();
  return pSVar1;
}


/* Vector2 get_DefaultCanvasSize() */

Vector2 Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Vehicles::
        VehicleBaseSettings::VehicleBaseSettings_get_DefaultCanvasSize
                  (VehicleBaseSettings *this,MethodInfo *method)

{
  VVar1.y = _UNK_?;
  VVar1.x = _UNK_?;
  return VVar1;
}

