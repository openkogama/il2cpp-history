
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
  pDVar1 = TypeInfo__ClientSideNPCInteractable->static_fields->allowedModifiersDictionary;
  if (pDVar1 != (Dictionary_2_AvatarModifierPackageType_System_Single_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::
            Single]::Dictionary_2_System_Int32Enum_System_Single__ContainsKey
                      ((Dictionary_2_System_Int32Enum_System_Single_ *)pDVar1,type,
                       MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_float>__ContainsKey_AvatarModifierPackageType_
                      );
    if (bVar2 == 0) {
code_?:
      if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
                ((Object *)StringLiteral_Ignore_add_modifier,(MethodInfo *)0x0);
      return;
    }
    pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if ((pMVar3 != (MVNetworkGame *)0x0) &&
       (pMVar4 = (pMVar3->fields).playerContainer, pMVar4 != (MVPlayerContainer *)0x0)) {
      pMVar5 = MVPlayerContainer::MVPlayerContainer_GetPlayerUnsafe(pMVar4,id,(MethodInfo *)0x0);
      if (pMVar5 == (MVPlayer *)0x0) goto code_?;
      if ((TypeInfo__ClientSideNPCInteractable->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      pDVar1 = TypeInfo__ClientSideNPCInteractable->static_fields->allowedModifiersDictionary;
      if (pDVar1 != (Dictionary_2_AvatarModifierPackageType_System_Single_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Int32Enum,System::Single]::
        Dictionary_2_System_Int32Enum_System_Single__get_Item
                  ((Dictionary_2_System_Int32Enum_System_Single_ *)pDVar1,0,
                   MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_float>__get_Item_AvatarModifierPackageType_
                  );
        pMVar3 = MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
        if ((pMVar3 != (MVNetworkGame *)0x0) &&
           (pMVar4 = (pMVar3->fields).playerContainer, pMVar4 != (MVPlayerContainer *)0x0)) {
          MVPlayerContainer::MVPlayerContainer_GetPlayerUnsafe(pMVar4,id,(MethodInfo *)0x0);
          (**(code **)(*(int *)id + 0xe8))();
          return;
        }
      }
    }
  }
  uVar6 = func_?(&stack0xfffffff0);
  func_?(uVar6);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
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
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
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
    this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
              MVWorldObject.dll::MV::WorldObject::SharedWorldObjectValuesRepository::
              SharedWorldObjectValuesRepository_GetValues
                        ((WorldObjectType__Enum)unaff_EDI,(MethodInfo *)0x0);
    if (this_00 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)
    goto code_?;
    TVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      (this_00,(Object *)StringLiteral_RespawnInterval,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    uVar4 = CONCAT44(TypeInfo__System__Int32,TVar3.m_Index);
    if (TVar3.m_Index == 0) goto code_?;
    if (*(Il2CppClass **)(*(int *)TVar3.m_Index + 0x20) !=
        (TypeInfo__System__Int32->_0).element_class) goto code_?;
    piVar5 = (int32_t *)func_?();
    pMVar1 = (this->fields)._._.worldObjectParent;
    (this->fields).respawnInterval = *piVar5;
    if (pMVar1 == (MVWorldObjectClient *)0x0) goto code_?;
    hashtable = (Dictionary_2_System_Object_System_Object_ *)
                (*(code *)(pMVar1->klass->vtable).get_RunTimeData.method)
                          (pMVar1,(pMVar1->klass->vtable).set_RunTimeData.methodPtr);
    if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__Extensions);
    }
    unaff_EDI = Extensions::Extensions_GetObscuredType
                          (hashtable,StringLiteral_health,(MethodInfo *)0x0);
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    }
    if (unaff_EDI == (Object *)0x0) goto code_?;
    pOVar2 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat;
    if ((unaff_EDI->klass->_0).element_class ==
        (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_0).element_class) {
      pOVar6 = (ObscuredFloat *)func_?(unaff_EDI);
      fVar7 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
              ObscuredFloat_op_Implicit_1(*pOVar6,(MethodInfo *)0x0);
      (this->fields).maxHealth = fVar7;
      return;
    }
  }
  uVar4 = func_?(unaff_EDI,pOVar2);
code_?:
  func_?(uVar4);
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
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
                (*(code *)(pMVar1->klass->vtable).get_RunTimeData.method)
                          (pMVar1,(pMVar1->klass->vtable).set_RunTimeData.methodPtr);
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
      if ((unaff_ESI->klass->_0).element_class ==
          (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_0).element_class) {
        pOVar4 = (ObscuredInt *)func_?(unaff_ESI);
        iVar5 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
                ObscuredInt_op_Implicit_1(*pOVar4,(MethodInfo *)0x0);
        iVar5 = WaitForTicks::WaitForTicks_Diff(iVar5,(MethodInfo *)0x0);
        return iVar5 < iVar2;
      }
      goto code_?;
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
  UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_Log
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
         (*(code *)(pMVar1->klass->vtable).get_RunTimeData.method)
                   (pMVar1,(pMVar1->klass->vtable).set_RunTimeData.methodPtr);
    unaff_ESI = (Dictionary_2_System_Object_System_Object_ *)
                ObscuredTypesConverter::ObscuredTypesConverter_CreateUnObscuredValue
                          (obscuredValue,(MethodInfo *)0x0);
    if ((unaff_ESI != (Dictionary_2_System_Object_System_Object_ *)0x0) &&
       ((pDVar2 = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
        , (unaff_ESI->klass->_1).naturalAligment <
          (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
          naturalAligment ||
        ((Dictionary_2_System_Object_System_Object___Class *)
         (unaff_ESI->klass->_1).typeHierarchy
         [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
          naturalAligment - 1] !=
         TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))))
    goto code_?;
    pMVar1 = (this->fields)._._.worldObjectParent;
    if (pMVar1 != (MVWorldObjectClient *)0x0) {
      worldObjectType = (pMVar1->fields)._.type;
      if ((TypeInfo__MV__WorldObject__RuntimeVariablesRepository->_1).cctor_finished_or_no_cctor ==
          0) {
        func_?(TypeInfo__MV__WorldObject__RuntimeVariablesRepository);
      }
      MVWorldObject.dll::MV::WorldObject::RuntimeVariablesRepository::
      RuntimeVariablesRepository_SetupRuntimeVariable(worldObjectType,unaff_ESI,(MethodInfo *)0x0);
      pMVar1 = (this->fields)._._.worldObjectParent;
      if (pMVar1 != (MVWorldObjectClient *)0x0) {
        (*(code *)(pMVar1->klass->vtable).set_RunTimeData.method)
                  (pMVar1,unaff_ESI,(pMVar1->klass->vtable).get_HasOutputConnector.methodPtr);
        pMVar1 = (this->fields)._._.worldObjectParent;
        if (pMVar1 != (MVWorldObjectClient *)0x0) {
          hashtable = (Dictionary_2_System_Object_System_Object_ *)
                      (*(code *)(pMVar1->klass->vtable).get_RunTimeData.method)
                                (pMVar1,(pMVar1->klass->vtable).set_RunTimeData.methodPtr);
          iVar3 = WaitForTicks::WaitForTicks_GetEnvironmentTick
                            (-(this->fields).respawnInterval,(MethodInfo *)0x0);
          if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).
              cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
          }
          pOVar4 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
                   ObscuredInt_op_Implicit((ObscuredInt *)&stack0xffffffec,iVar3,(MethodInfo *)0x0);
          puVar5 = (undefined *)pOVar4->currentCryptoKey;
          pEVar6 = (Extensions__Class *)pOVar4->hiddenValue;
          iVar3 = pOVar4->fakeValue;
          if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
            puVar5 = &UNK_?;
            pEVar6 = TypeInfo__Extensions;
            func_?();
          }
          value.hiddenValue = (int32_t)pEVar6;
          value.currentCryptoKey = (int32_t)puVar5;
          value.fakeValue = iVar3;
          value.inited = pOVar4->inited;
          value._13_3_ = *(undefined3 *)&pOVar4->field_0xd;
          Extensions::Extensions_SetObscuredType_2
                    (hashtable,StringLiteral_deathTime,value,
                     void_MethodInfo__Extensions__SetObscuredType<CodeStage::AntiCheat::ObscuredTypes::ObscuredInt>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt_
                    );
          return;
        }
      }
    }
  }
  func_?();
  pDVar2 = extraout_EDX;
code_?:
  func_?(unaff_ESI,pDVar2);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
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
             (*(code *)(pMVar2->klass->vtable).get_RunTimeData.method)
                       (pMVar2,(pMVar2->klass->vtable).set_RunTimeData.methodPtr);
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
    iVar8 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
            ObscuredInt_op_Implicit_1(*pOVar7,(MethodInfo *)0x0);
    iVar8 = WaitForTicks::WaitForTicks_Diff(iVar8,(MethodInfo *)0x0);
    if (iVar8 < iVar3) {
      return;
    }
    pMVar2 = (this->fields)._._.worldObjectParent;
    if (pMVar2 == (MVWorldObjectClient *)0x0) goto code_?;
    pDVar5 = (Dictionary_2_System_Object_System_Object_ *)
             (*(code *)(pMVar2->klass->vtable).get_RunTimeData.method)
                       (pMVar2,(pMVar2->klass->vtable).set_RunTimeData.methodPtr);
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
    pOVar9 = (ObscuredFloat *)func_?(unaff_EDI);
    fVar10 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
             ObscuredFloat_op_Implicit_1(*pOVar9,(MethodInfo *)0x0);
    value_02 = (ClientSideNPCInteractable *)(this->fields).maxHealth;
    if (fVar10 - amount <= (float)value_02) {
      value_02 = (ClientSideNPCInteractable *)(fVar10 - amount);
    }
    pMVar2 = (this->fields)._._.worldObjectParent;
    if (pMVar2 == (MVWorldObjectClient *)0x0) goto code_?;
    unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)
                (*(code *)(pMVar2->klass->vtable).get_RunTimeData.method)
                          (pMVar2,(pMVar2->klass->vtable).set_RunTimeData.methodPtr);
    if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).
        cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    }
    pOVar9 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
             ObscuredFloat_op_Implicit(&OStack_11,(float)value_02,(MethodInfo *)0x0);
    auStack_12._0_4_ = pOVar9->currentCryptoKey;
    auStack_12._4_4_ = pOVar9->hiddenValue;
    auStack_12._8_4_ = pOVar9->hiddenValueOld;
    auStack_12._12_4_ = pOVar9->fakeValue;
    if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__Extensions);
    }
    value.hiddenValue.b1 = auStack_12[4];
    value.hiddenValue.b2 = auStack_12[5];
    value.hiddenValue.b3 = auStack_12[6];
    value.hiddenValue.b4 = auStack_12[7];
    value.currentCryptoKey = auStack_12._0_4_;
    value.hiddenValueOld = (Byte__Array *)auStack_12._8_4_;
    value.fakeValue = (float)auStack_12._12_4_;
    value.inited = pOVar9->inited;
    value._17_3_ = *(undefined3 *)&pOVar9->field_0x11;
    Extensions::Extensions_SetObscuredType_1
              (unaff_EDI,StringLiteral_health,value,
               void_MethodInfo__Extensions__SetObscuredType<CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat_
              );
    if (0.0 < (float)value_02) {
code_?:
      this = value_02;
      pAVar13 = (pCVar1->fields).takeDamageCallback;
      if (pAVar13 != (Action_3_Single_MVPlayer_MV_Common_PlayerKilledByType_ *)0x0) {
        (*(pAVar13->fields)._._.invoke_impl)
                  ((pAVar13->fields)._._.method_code,amount,damageDealer,damageType,
                   (pAVar13->fields)._._.method);
        pMVar2 = (pCVar1->fields)._._.worldObjectParent;
        if (pMVar2 != (MVWorldObjectClient *)0x0) {
          pDVar5 = (Dictionary_2_System_Object_System_Object_ *)
                   (*(code *)(pMVar2->klass->vtable).get_RunTimeData.method)
                             (pMVar2,(pMVar2->klass->vtable).set_RunTimeData.methodPtr);
          if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).
              cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
          }
          pOVar9 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat
                   ::ObscuredFloat_op_Implicit(&OStack_11,(float)this,(MethodInfo *)0x0);
          auStack_12._0_4_ = pOVar9->currentCryptoKey;
          auStack_12._4_4_ = pOVar9->hiddenValue;
          auStack_12._8_4_ = pOVar9->hiddenValueOld;
          auStack_12._12_4_ = pOVar9->fakeValue;
          if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
            func_?(TypeInfo__Extensions);
          }
          value_01.hiddenValue.b1 = auStack_12[4];
          value_01.hiddenValue.b2 = auStack_12[5];
          value_01.hiddenValue.b3 = auStack_12[6];
          value_01.hiddenValue.b4 = auStack_12[7];
          value_01.currentCryptoKey = auStack_12._0_4_;
          value_01.hiddenValueOld = (Byte__Array *)auStack_12._8_4_;
          value_01.fakeValue = (float)auStack_12._12_4_;
          value_01.inited = pOVar9->inited;
          value_01._17_3_ = *(undefined3 *)&pOVar9->field_0x11;
          Extensions::Extensions_SetObscuredType_1
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
    this_00 = (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)
              MVWorldObject.dll::MV::WorldObject::RuntimeVariablesRepository::
              RuntimeVariablesRepository_GetRuntimeVariables
                        ((WorldObjectType__Enum)unaff_EDI,(MethodInfo *)0x0);
    if (this_00 == (Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)0x0)
    goto code_?;
    TVar14 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
             UIElements::TextureId]::
             Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                       (this_00,(Object *)StringLiteral_health,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    uVar4 = CONCAT44(TypeInfo__System__Single,TVar14.m_Index);
    if (TVar14.m_Index == 0) goto code_?;
    if (*(Il2CppClass **)(*(int *)TVar14.m_Index + 0x20) ==
        (TypeInfo__System__Single->_0).element_class) {
      puVar15 = (undefined4 *)func_?(TVar14.m_Index);
      pMVar2 = (this->fields)._._.worldObjectParent;
      value_02 = (ClientSideNPCInteractable *)*puVar15;
      if (pMVar2 != (MVWorldObjectClient *)0x0) {
        pDVar5 = (Dictionary_2_System_Object_System_Object_ *)
                 (*(code *)(pMVar2->klass->vtable).get_RunTimeData.method)
                           (pMVar2,(pMVar2->klass->vtable).set_RunTimeData.methodPtr);
        unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)
                    WaitForTicks::WaitForTicks_GetEnvironmentTick(0,(MethodInfo *)0x0);
        if ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).
            cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
        }
        pOVar7 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
                 ObscuredInt_op_Implicit
                           ((ObscuredInt *)auStack_12,(int32_t)unaff_EDI,(MethodInfo *)0x0);
        auStack_12._0_4_ = pOVar7->currentCryptoKey;
        auStack_12._4_4_ = pOVar7->hiddenValue;
        auStack_12._8_4_ = pOVar7->fakeValue;
        auStack_12._12_4_ = *(undefined4 *)&pOVar7->inited;
        if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
          func_?(TypeInfo__Extensions);
        }
        value_00.hiddenValue = auStack_12._4_4_;
        value_00.currentCryptoKey = auStack_12._0_4_;
        value_00.fakeValue = auStack_12._8_4_;
        value_00._12_4_ = auStack_12._12_4_;
        Extensions::Extensions_SetObscuredType_2
                  (pDVar5,StringLiteral_deathTime,value_00,
                   void_MethodInfo__Extensions__SetObscuredType<CodeStage::AntiCheat::ObscuredTypes::ObscuredInt>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt_
                  );
        goto code_?;
      }
      goto code_?;
    }
  }
  func_?(uVar4);
  pOVar6 = extraout_ECX;
code_?:
  func_?(unaff_EDI,pOVar6);
  pcVar16 = (code *)swi(3);
  (*pcVar16)();
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
  this = (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)
         func_?(
                        TypeInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_float>
                        );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
  Int32Enum,GamePassesHighScoreList+HighScoreListData]::
  Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData___ctor
            (this,
             MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_float>__Dictionary__
            );
  if (this != (Dictionary_2_System_Int32Enum_GamePassesHighScoreList_HighScoreListData_ *)0x0) {
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
    TypeInfo__ClientSideNPCInteractable->static_fields->allowedModifiersDictionary =
         (Dictionary_2_AvatarModifierPackageType_System_Single_ *)this;
    func_?();
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

