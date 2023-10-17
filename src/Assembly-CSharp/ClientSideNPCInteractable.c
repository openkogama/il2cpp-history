
/* Void AddModifier(AvatarModifierPackageType, Int32, AvatarModifierPackage+AvatarModifier[]) */

void Assembly-CSharp.dll::ClientSideNPCInteractable::ClientSideNPCInteractable_AddModifier
               (ClientSideNPCInteractable *this,AvatarModifierPackageType__Enum type,int32_t id,
               AvatarModifierPackage_AvatarModifier__Array *additionalModifers,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    func_?();
    func_?();
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_float>__get_Item_AvatarModifierPackageType_
                   );
    func_?(&StringLiteral_Ignore_add_modifier);
    cRam_? = '\x01';
  }
  if ((TypeInfo__ClientSideNPCInteractable->_1).cctor_finished_or_no_cctor == 0) {
    func_?();
  }
  this_00 = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)
            TypeInfo__ClientSideNPCInteractable->static_fields->allowedModifiersDictionary;
  if (this_00 != (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            Object,GUILoginHandler+PlanetData]::
            Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                      (this_00,(Object *)type,
                       MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_float>__ContainsKey_AvatarModifierPackageType_
                      );
    if (bVar1 == 0) {
code_?:
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                ((Object *)StringLiteral_Ignore_add_modifier,(MethodInfo *)0x0);
      return;
    }
    pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar2 != (MVNetworkGame *)0x0) &&
       (pMVar3 = (pMVar2->fields).playerContainer, pMVar3 != (MVPlayerContainer *)0x0)) {
      pMVar4 = MVPlayerContainer::MVPlayerContainer_GetPlayerUnsafe(pMVar3,id,(MethodInfo *)0x0);
      if (pMVar4 == (MVPlayer *)0x0) goto code_?;
      if ((TypeInfo__ClientSideNPCInteractable->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      this_01 = TypeInfo__ClientSideNPCInteractable->static_fields->allowedModifiersDictionary;
      if (this_01 != (Dictionary_2_AvatarModifierPackageType_System_Single_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Single]::
        Dictionary_2_System_Int32Enum_System_Single__get_Item
                  ((Dictionary_2_System_Int32Enum_System_Single_ *)this_01,0,
                   MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_float>__get_Item_AvatarModifierPackageType_
                  );
        pMVar2 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if ((pMVar2 != (MVNetworkGame *)0x0) &&
           (pMVar3 = (pMVar2->fields).playerContainer, pMVar3 != (MVPlayerContainer *)0x0)) {
          MVPlayerContainer::MVPlayerContainer_GetPlayerUnsafe(pMVar3,id,(MethodInfo *)0x0);
          (**(code **)(*(int *)id + 0xe4))();
          return;
        }
      }
    }
  }
  uVar5 = func_?(&stack0xfffffff0);
  func_?(uVar5);
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void ClearModifiers() */

void Assembly-CSharp.dll::ClientSideNPCInteractable::ClientSideNPCInteractable_ClearModifiers
               (ClientSideNPCInteractable *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&StringLiteral__ignore_ClearModifiers);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
            ((Object *)StringLiteral__ignore_ClearModifiers,(MethodInfo *)0x0);
  return;
}


/* Void Init(Action`3[Single,MVPlayer,MV.Common.PlayerKilledByType]) */

void Assembly-CSharp.dll::ClientSideNPCInteractable::ClientSideNPCInteractable_Init
               (ClientSideNPCInteractable *this,
               Action_3_Single_MVPlayer_MV_Common_PlayerKilledByType_ *takeDamageCallback,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&TypeInfo__Extensions);
    func_?(&TypeInfo__System__Int32);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    func_?(&TypeInfo__MV__WorldObject__SharedWorldObjectValuesRepository);
    func_?(&StringLiteral_RespawnInterval);
    func_?(&StringLiteral_health);
    cRam_? = '\x01';
  }
  (this->fields).takeDamageCallback = takeDamageCallback;
  func_?(&(this->fields).takeDamageCallback,takeDamageCallback);
  pMVar1 = (this->fields)._._.worldObjectParent;
  if (pMVar1 == (MVWorldObjectClient *)0x0) {
code_?:
    func_?();
    pOVar2 = extraout_ECX;
  }
  else {
    unaff_EDI = (Object *)(pMVar1->fields)._.type;
    if ((TypeInfo__MV__WorldObject__SharedWorldObjectValuesRepository->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__MV__WorldObject__SharedWorldObjectValuesRepository);
    }
    pDVar3 = MVWorldObject.dll::MV::WorldObject::SharedWorldObjectValuesRepository::
             SharedWorldObjectValuesRepository_GetValues
                       ((WorldObjectType__Enum)unaff_EDI,(MethodInfo *)0x0);
    if (pDVar3 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
    pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       (pDVar3,(Object *)StringLiteral_RespawnInterval,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    uVar5 = CONCAT44(TypeInfo__System__Int32,pOVar4);
    if (pOVar4 == (Object *)0x0) goto code_?;
    if ((pOVar4->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
    goto code_?;
    piVar6 = (int32_t *)func_?();
    pMVar1 = (this->fields)._._.worldObjectParent;
    (this->fields).respawnInterval = *piVar6;
    if (pMVar1 == (MVWorldObjectClient *)0x0) goto code_?;
    pDVar3 = (Dictionary_2_System_Object_System_Object_ *)
             (*(pMVar1->klass->vtable).get_RunTimeData.methodPtr)
                       (pMVar1,(pMVar1->klass->vtable).get_RunTimeData.method);
    if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__Extensions);
    }
    unaff_EDI = Extensions::Extensions_GetObscuredType
                          (pDVar3,StringLiteral_health,(MethodInfo *)0x0);
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    }
    if (unaff_EDI == (Object *)0x0) goto code_?;
    pOVar2 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat;
    if ((unaff_EDI->klass->_0).element_class ==
        (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_0).element_class) {
      pOVar7 = (ObscuredFloat *)func_?(unaff_EDI);
      fVar8 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
              ObscuredFloat_op_Implicit_1(*pOVar7,(MethodInfo *)0x0);
      (this->fields).maxHealth = fVar8;
      return;
    }
  }
  uVar5 = func_?(unaff_EDI,pOVar2);
code_?:
  func_?(uVar5);
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Boolean IsDead() */

bool Assembly-CSharp.dll::ClientSideNPCInteractable::ClientSideNPCInteractable_IsDead
               (ClientSideNPCInteractable *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Extensions);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    func_?(&StringLiteral_deathTime);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._._.worldObjectParent;
  iVar2 = (this->fields).respawnInterval;
  if (pMVar1 != (MVWorldObjectClient *)0x0) {
    hashtable = (Dictionary_2_System_Object_System_Object_ *)
                (*(pMVar1->klass->vtable).get_RunTimeData.methodPtr)
                          (pMVar1,(pMVar1->klass->vtable).get_RunTimeData.method);
    if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__Extensions);
    }
    unaff_ESI = Extensions::Extensions_GetObscuredType
                          (hashtable,StringLiteral_deathTime,(MethodInfo *)0x0);
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_finished_or_no_cctor
        == 0) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    }
    if (unaff_ESI != (Object *)0x0) {
      pOVar3 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt;
      if ((unaff_ESI->klass->_0).element_class !=
          (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_0).element_class)
      goto code_?;
      pOVar4 = (ObscuredInt *)func_?(unaff_ESI);
      unaff_ESI = (Object *)
                  Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
                  ObscuredInt_op_Implicit_1(*pOVar4,(MethodInfo *)0x0);
      this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
      if (this_00 != (MVNetworkGame *)0x0) {
        iVar5 = MVNetworkGame::MVNetworkGame_get_ServerTimeInMilliSeconds(this_00,(MethodInfo *)0x0)
        ;
        return iVar5 - (int)unaff_ESI < iVar2;
      }
    }
  }
  func_?();
  pOVar3 = extraout_ECX;
code_?:
  func_?(unaff_ESI,pOVar3);
  pcVar6 = (code *)swi(3);
  bVar7 = (*pcVar6)();
  return bVar7;
}


/* Void RemoveModifier(AvatarModifierPackageType, Int32) */

void Assembly-CSharp.dll::ClientSideNPCInteractable::ClientSideNPCInteractable_RemoveModifier
               (ClientSideNPCInteractable *this,AvatarModifierPackageType__Enum type,int32_t id,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&StringLiteral_Ignore_remove_modifier);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Debug);
  }
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
            ((Object *)StringLiteral_Ignore_remove_modifier,(MethodInfo *)0x0);
  return;
}


/* Void Reset() */

void Assembly-CSharp.dll::ClientSideNPCInteractable::ClientSideNPCInteractable_Reset
               (ClientSideNPCInteractable *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&
                    void_MethodInfo__Extensions__SetObscuredType<CodeStage::AntiCheat::ObscuredTypes::ObscuredInt>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt_
                   );
    func_?(&TypeInfo__Extensions);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    func_?(&TypeInfo__MV__WorldObject__RuntimeVariablesRepository);
    func_?(&StringLiteral_deathTime);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._._.worldObjectParent;
  if (pMVar1 != (MVWorldObjectClient *)0x0) {
    obscuredValue =
         (Object *)
         (*(pMVar1->klass->vtable).get_RunTimeData.methodPtr)
                   (pMVar1,(pMVar1->klass->vtable).get_RunTimeData.method);
    unaff_EBX = (Dictionary_2_System_Object_System_Object_ *)
                ObscuredTypesConverter::ObscuredTypesConverter_CreateUnObscuredValue
                          (obscuredValue,(MethodInfo *)0x0);
    if (unaff_EBX == (Dictionary_2_System_Object_System_Object_ *)0x0) {
      targetRuntimeVariables = (Dictionary_2_System_Object_System_Object_ *)0x0;
    }
    else {
      pDVar2 = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
      if (((unaff_EBX->klass->_1).typeHierarchyDepth <
           (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           typeHierarchyDepth) ||
         (targetRuntimeVariables = unaff_EBX,
         (Dictionary_2_System_Object_System_Object___Class *)
         (unaff_EBX->klass->_1).typeHierarchy
         [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
          typeHierarchyDepth - 1] !=
         TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
      goto code_?;
    }
    pMVar1 = (this->fields)._._.worldObjectParent;
    if (pMVar1 != (MVWorldObjectClient *)0x0) {
      unaff_EBX = (Dictionary_2_System_Object_System_Object_ *)(pMVar1->fields)._.type;
      if ((TypeInfo__MV__WorldObject__RuntimeVariablesRepository->_1).cctor_finished_or_no_cctor ==
          0) {
        func_?(TypeInfo__MV__WorldObject__RuntimeVariablesRepository);
      }
      MVWorldObject.dll::MV::WorldObject::RuntimeVariablesRepository::
      RuntimeVariablesRepository_SetupRuntimeVariable
                ((WorldObjectType__Enum)unaff_EBX,targetRuntimeVariables,(MethodInfo *)0x0);
      pMVar1 = (this->fields)._._.worldObjectParent;
      if (pMVar1 != (MVWorldObjectClient *)0x0) {
        (*(pMVar1->klass->vtable).set_RunTimeData.methodPtr)
                  (pMVar1,targetRuntimeVariables,(pMVar1->klass->vtable).set_RunTimeData.method);
        pMVar1 = (this->fields)._._.worldObjectParent;
        if (pMVar1 != (MVWorldObjectClient *)0x0) {
          unaff_EBX = (Dictionary_2_System_Object_System_Object_ *)
                      (*(pMVar1->klass->vtable).get_RunTimeData.methodPtr)
                                (pMVar1,(pMVar1->klass->vtable).get_RunTimeData.method);
          iVar3 = (this->fields).respawnInterval;
          this_00 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if (this_00 != (MVNetworkGame *)0x0) {
            iVar4 = MVNetworkGame::MVNetworkGame_get_ServerTimeInMilliSeconds
                              (this_00,(MethodInfo *)0x0);
            if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).
                cctor_finished_or_no_cctor == 0) {
              func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
            }
            pOVar5 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt
                     ::ObscuredInt_op_Implicit
                               ((ObscuredInt *)&stack0xffffffec,iVar4 - iVar3,(MethodInfo *)0x0);
            puVar6 = (undefined *)pOVar5->currentCryptoKey;
            pEVar7 = (Extensions__Class *)pOVar5->hiddenValue;
            iVar4 = pOVar5->fakeValue;
            if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
              puVar6 = &UNK_?;
              pEVar7 = TypeInfo__Extensions;
              func_?();
            }
            value.hiddenValue = (int32_t)pEVar7;
            value.currentCryptoKey = (int32_t)puVar6;
            value.fakeValue = iVar4;
            value.inited = pOVar5->inited;
            value._13_3_ = *(undefined3 *)&pOVar5->field_0xd;
            Extensions::Extensions_SetObscuredType_3
                      (unaff_EBX,StringLiteral_deathTime,value,
                       void_MethodInfo__Extensions__SetObscuredType<CodeStage::AntiCheat::ObscuredTypes::ObscuredInt>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt_
                      );
            return;
          }
        }
      }
    }
  }
  func_?();
  pDVar2 = extraout_EDX;
code_?:
  func_?(unaff_EBX,pDVar2);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
  return;
}


/* Void TakeDamage(Single, MVPlayer, PlayerKilledByType) */

void Assembly-CSharp.dll::ClientSideNPCInteractable::ClientSideNPCInteractable_TakeDamage
               (ClientSideNPCInteractable *this,float amount,MVPlayer *damageDealer,
               PlayerKilledByType__Enum damageType,MethodInfo *method)

{
  pCVar1 = this;
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&
                    void_MethodInfo__Extensions__SetObscuredType<CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat_
                   );
    func_?(&
                    void_MethodInfo__Extensions__SetObscuredType<CodeStage::AntiCheat::ObscuredTypes::ObscuredInt>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt_
                   );
    func_?(&TypeInfo__Extensions);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    func_?(&TypeInfo__MV__WorldObject__RuntimeVariablesRepository);
    func_?(&TypeInfo__System__Single);
    func_?(&StringLiteral_health);
    func_?(&StringLiteral_deathTime);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__Extensions);
    func_?(&TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    func_?(&StringLiteral_deathTime);
    cRam_? = '\x01';
  }
  pMVar2 = (this->fields)._._.worldObjectParent;
  iVar3 = (this->fields).respawnInterval;
  if (pMVar2 == (MVWorldObjectClient *)0x0) {
code_?:
    uVar4 = func_?();
  }
  else {
    pDVar5 = (Dictionary_2_System_Object_System_Object_ *)
             (*(pMVar2->klass->vtable).get_RunTimeData.methodPtr)
                       (pMVar2,(pMVar2->klass->vtable).get_RunTimeData.method);
    if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__Extensions);
    }
    unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)
                Extensions::Extensions_GetObscuredType
                          (pDVar5,StringLiteral_deathTime,(MethodInfo *)0x0);
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_finished_or_no_cctor
        == 0) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
    }
    if (unaff_EDI == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
    pOVar6 = (ObscuredFloat__Class *)TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt;
    if ((unaff_EDI->klass->_0).element_class !=
        (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_0).element_class)
    goto code_?;
    pOVar7 = (ObscuredInt *)func_?(unaff_EDI);
    unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)
                Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
                ObscuredInt_op_Implicit_1(*pOVar7,(MethodInfo *)0x0);
    pMVar8 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar8 == (MVNetworkGame *)0x0) goto code_?;
    iVar9 = MVNetworkGame::MVNetworkGame_get_ServerTimeInMilliSeconds(pMVar8,(MethodInfo *)0x0);
    if (iVar9 - (int)unaff_EDI < iVar3) {
      return;
    }
    pMVar2 = (this->fields)._._.worldObjectParent;
    if (pMVar2 == (MVWorldObjectClient *)0x0) goto code_?;
    pDVar5 = (Dictionary_2_System_Object_System_Object_ *)
             (*(pMVar2->klass->vtable).get_RunTimeData.methodPtr)
                       (pMVar2,(pMVar2->klass->vtable).get_RunTimeData.method);
    if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__Extensions);
    }
    unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)
                Extensions::Extensions_GetObscuredType
                          (pDVar5,StringLiteral_health,(MethodInfo *)0x0);
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    }
    if (unaff_EDI == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
    pOVar6 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat;
    if ((unaff_EDI->klass->_0).element_class !=
        (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_0).element_class)
    goto code_?;
    pOVar10 = (ObscuredFloat *)func_?(unaff_EDI);
    fVar11 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
             ObscuredFloat_op_Implicit_1(*pOVar10,(MethodInfo *)0x0);
    value_02 = (ClientSideNPCInteractable *)(this->fields).maxHealth;
    if (fVar11 - amount <= (float)value_02) {
      value_02 = (ClientSideNPCInteractable *)(fVar11 - amount);
    }
    pMVar2 = (this->fields)._._.worldObjectParent;
    if (pMVar2 == (MVWorldObjectClient *)0x0) goto code_?;
    unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)
                (*(pMVar2->klass->vtable).get_RunTimeData.methodPtr)
                          (pMVar2,(pMVar2->klass->vtable).get_RunTimeData.method);
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    }
    pOVar10 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
              ObscuredFloat_op_Implicit(&OStack_12,(float)value_02,(MethodInfo *)0x0);
    auStack_13._0_4_ = pOVar10->currentCryptoKey;
    auStack_13._4_4_ = pOVar10->hiddenValue;
    auStack_13._8_4_ = pOVar10->hiddenValueOld;
    auStack_13._12_4_ = pOVar10->fakeValue;
    if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__Extensions);
    }
    value.hiddenValue.b1 = auStack_13[4];
    value.hiddenValue.b2 = auStack_13[5];
    value.hiddenValue.b3 = auStack_13[6];
    value.hiddenValue.b4 = auStack_13[7];
    value.currentCryptoKey = auStack_13._0_4_;
    value.hiddenValueOld = (Byte__Array *)auStack_13._8_4_;
    value.fakeValue = (float)auStack_13._12_4_;
    value.inited = pOVar10->inited;
    value._17_3_ = *(undefined3 *)&pOVar10->field_0x11;
    Extensions::Extensions_SetObscuredType_2
              (unaff_EDI,StringLiteral_health,value,
               void_MethodInfo__Extensions__SetObscuredType<CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat_
              );
    if (0.0 < (float)value_02) {
code_?:
      this = value_02;
      pAVar14 = (pCVar1->fields).takeDamageCallback;
      if (pAVar14 != (Action_3_Single_MVPlayer_MV_Common_PlayerKilledByType_ *)0x0) {
        (*(pAVar14->fields)._._.invoke_impl)
                  ((pAVar14->fields)._._.method_code,amount,damageDealer,damageType,
                   (pAVar14->fields)._._.method);
        pMVar2 = (pCVar1->fields)._._.worldObjectParent;
        if (pMVar2 != (MVWorldObjectClient *)0x0) {
          pDVar5 = (Dictionary_2_System_Object_System_Object_ *)
                   (*(pMVar2->klass->vtable).get_RunTimeData.methodPtr)
                             (pMVar2,(pMVar2->klass->vtable).get_RunTimeData.method);
          if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).
              cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
          }
          pOVar10 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::
                    ObscuredFloat::ObscuredFloat_op_Implicit
                              (&OStack_12,(float)this,(MethodInfo *)0x0);
          auStack_13._0_4_ = pOVar10->currentCryptoKey;
          auStack_13._4_4_ = pOVar10->hiddenValue;
          auStack_13._8_4_ = pOVar10->hiddenValueOld;
          auStack_13._12_4_ = pOVar10->fakeValue;
          if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__Extensions);
          }
          value_01.hiddenValue.b1 = auStack_13[4];
          value_01.hiddenValue.b2 = auStack_13[5];
          value_01.hiddenValue.b3 = auStack_13[6];
          value_01.hiddenValue.b4 = auStack_13[7];
          value_01.currentCryptoKey = auStack_13._0_4_;
          value_01.hiddenValueOld = (Byte__Array *)auStack_13._8_4_;
          value_01.fakeValue = (float)auStack_13._12_4_;
          value_01.inited = pOVar10->inited;
          value_01._17_3_ = *(undefined3 *)&pOVar10->field_0x11;
          Extensions::Extensions_SetObscuredType_2
                    (pDVar5,StringLiteral_health,value_01,
                     void_MethodInfo__Extensions__SetObscuredType<CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat_
                    );
          return;
        }
      }
      goto code_?;
    }
    pMVar2 = (this->fields)._._.worldObjectParent;
    if (pMVar2 == (MVWorldObjectClient *)0x0) goto code_?;
    unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)(pMVar2->fields)._.type;
    if ((TypeInfo__MV__WorldObject__RuntimeVariablesRepository->_1).cctor_finished_or_no_cctor == 0)
    {
      func_?(TypeInfo__MV__WorldObject__RuntimeVariablesRepository);
    }
    pDVar5 = MVWorldObject.dll::MV::WorldObject::RuntimeVariablesRepository::
             RuntimeVariablesRepository_GetRuntimeVariables
                       ((WorldObjectType__Enum)unaff_EDI,(MethodInfo *)0x0);
    if (pDVar5 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
    pOVar15 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::
              Object]::Dictionary_2_System_Object_System_Object__get_Item
                        (pDVar5,(Object *)StringLiteral_health,
                         MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                        );
    uVar4 = CONCAT44(TypeInfo__System__Single,pOVar15);
    if (pOVar15 == (Object *)0x0) goto code_?;
    if ((pOVar15->klass->_0).element_class == (TypeInfo__System__Single->_0).element_class) {
      puVar16 = (undefined4 *)func_?(pOVar15);
      pMVar2 = (this->fields)._._.worldObjectParent;
      value_02 = (ClientSideNPCInteractable *)*puVar16;
      if (pMVar2 != (MVWorldObjectClient *)0x0) {
        pDVar5 = (Dictionary_2_System_Object_System_Object_ *)
                 (*(pMVar2->klass->vtable).get_RunTimeData.methodPtr)
                           (pMVar2,(pMVar2->klass->vtable).get_RunTimeData.method);
        pMVar8 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if (pMVar8 != (MVNetworkGame *)0x0) {
          unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)
                      MVNetworkGame::MVNetworkGame_get_ServerTimeInMilliSeconds
                                (pMVar8,(MethodInfo *)0x0);
          if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).
              cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
          }
          pOVar7 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
                   ObscuredInt_op_Implicit
                             ((ObscuredInt *)auStack_13,(int32_t)unaff_EDI,(MethodInfo *)0x0);
          auStack_13._0_4_ = pOVar7->currentCryptoKey;
          auStack_13._4_4_ = pOVar7->hiddenValue;
          auStack_13._8_4_ = pOVar7->fakeValue;
          auStack_13._12_4_ = *(undefined4 *)&pOVar7->inited;
          if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__Extensions);
          }
          value_00.hiddenValue = auStack_13._4_4_;
          value_00.currentCryptoKey = auStack_13._0_4_;
          value_00.fakeValue = auStack_13._8_4_;
          value_00._12_4_ = auStack_13._12_4_;
          Extensions::Extensions_SetObscuredType_3
                    (pDVar5,StringLiteral_deathTime,value_00,
                     void_MethodInfo__Extensions__SetObscuredType<CodeStage::AntiCheat::ObscuredTypes::ObscuredInt>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt_
                    );
          goto code_?;
        }
      }
      goto code_?;
    }
  }
  func_?(uVar4);
  pOVar6 = extraout_ECX;
code_?:
  func_?(unaff_EDI,pOVar6);
  pcVar17 = (code *)swi(3);
  (*pcVar17)();
  return;
}


/* ClientSideNPCInteractable() */

void Assembly-CSharp.dll::ClientSideNPCInteractable::ClientSideNPCInteractable__cctor
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__ClientSideNPCInteractable);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_float>__Add_AvatarModifierPackageType__float_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_float>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_float>
                   );
    cRam_? = '\x01';
  }
  this = (Dictionary_2_AvatarModifierPackageType_System_Single_ *)
         func_?(
                        TypeInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_float>
                        );
  if (this != (Dictionary_2_AvatarModifierPackageType_System_Single_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this,
               MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_float>__Dictionary__
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Single]::
    Dictionary_2_System_Int32Enum_System_Single__Add
              ((Dictionary_2_System_Int32Enum_System_Single_ *)this,0x12,-1.0,
               MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_float>__Add_AvatarModifierPackageType__float_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Single]::
    Dictionary_2_System_Int32Enum_System_Single__Add
              ((Dictionary_2_System_Int32Enum_System_Single_ *)this,8,1.8,
               MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_float>__Add_AvatarModifierPackageType__float_
              );
    TypeInfo__ClientSideNPCInteractable->static_fields->allowedModifiersDictionary = this;
    func_?();
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

