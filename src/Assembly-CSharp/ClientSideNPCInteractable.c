
/* Void AddModifier(AvatarModifierPackageType, Int32, AvatarModifierPackage+AvatarModifier[]) */

void Assembly-CSharp.dll::ClientSideNPCInteractable::ClientSideNPCInteractable_AddModifier
               (ClientSideNPCInteractable *this,AvatarModifierPackageType__Enum type,int32_t id,
               AvatarModifierPackage_AvatarModifier__Array *additionalModifers,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__ClientSideNPCInteractable->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__ClientSideNPCInteractable->_1).cctor_started == 0)) {
    func_?(TypeInfo__ClientSideNPCInteractable);
  }
  pDVar1 = TypeInfo__ClientSideNPCInteractable->static_fields->allowedModifiersDictionary;
  if (pDVar1 != (Dictionary_2_AvatarModifierPackageType_System_Single_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::
            Dictionary`2[AvatarModifierPackageType,System::Single]::
            Dictionary_2_AvatarModifierPackageType_System_Single__ContainsKey
                      (pDVar1,type,
                       MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_float>__ContainsKey_AvatarModifierPackageType_
                      );
    if (bVar2 == 0) {
code_?:
      if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
        func_?(TypeInfo__UnityEngine__Debug);
      }
      UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_Log
                ((Object *)StringLiteral_Ignore_add_modifier,(MethodInfo *)0x0);
      return;
    }
    if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
      this = (ClientSideNPCInteractable *)TypeInfo__MVGameControllerBase;
      func_?();
    }
    pMVar3 = (MVAvatar *)MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
    if (pMVar3 != (MVAvatar *)0x0) {
      pMVar4 = MVAvatar::MVAvatar_get_Shield(pMVar3,(MethodInfo *)0x0);
      if (pMVar4 != (MVRuntimeDataVariableClampedFloat *)0x0) {
        pMVar5 = MVPlayerContainer::MVPlayerContainer_GetPlayerUnsafe
                           ((MVPlayerContainer *)pMVar4,id,(MethodInfo *)0x0);
        if (pMVar5 == (MVPlayer *)0x0) goto code_?;
        if ((((uint)(TypeInfo__ClientSideNPCInteractable->vtable).Equals.methodPtr & 0x2000000) != 0
            ) && ((TypeInfo__ClientSideNPCInteractable->_1).cctor_started == 0)) {
          func_?(TypeInfo__ClientSideNPCInteractable);
        }
        pDVar1 = TypeInfo__ClientSideNPCInteractable->static_fields->allowedModifiersDictionary;
        if (pDVar1 != (Dictionary_2_AvatarModifierPackageType_System_Single_ *)0x0) {
          fVar6 = mscorlib.dll::System::Collections::Generic::
                  Dictionary`2[AvatarModifierPackageType,System::Single]::
                  Dictionary_2_AvatarModifierPackageType_System_Single__get_Item
                            (pDVar1,type,
                             MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_float>__get_Item_AvatarModifierPackageType_
                            );
          if ((((uint)(TypeInfo__MVGameControllerBase->vtable).Equals.methodPtr & 0x2000000) != 0)
             && ((TypeInfo__MVGameControllerBase->_1).cctor_started == 0)) {
            this = (ClientSideNPCInteractable *)TypeInfo__MVGameControllerBase;
            func_?();
          }
          pMVar3 = (MVAvatar *)
                   MVGameControllerBase::MVGameControllerBase_get_Game((MethodInfo *)0x0);
          if (pMVar3 != (MVAvatar *)0x0) {
            pMVar4 = MVAvatar::MVAvatar_get_Shield(pMVar3,(MethodInfo *)0x0);
            if (pMVar4 != (MVRuntimeDataVariableClampedFloat *)0x0) {
              pMVar5 = MVPlayerContainer::MVPlayerContainer_GetPlayerUnsafe
                                 ((MVPlayerContainer *)pMVar4,id,(MethodInfo *)0x0);
              (*(code *)(this->klass->vtable).TakeDamage.method)(this,fVar6,pMVar5);
              return;
            }
          }
        }
      }
    }
  }
  func_?(0);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void ClearModifiers() */

void Assembly-CSharp.dll::ClientSideNPCInteractable::ClientSideNPCInteractable_ClearModifiers
               (ClientSideNPCInteractable *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).takeDamageCallback = takeDamageCallback;
  pMVar1 = (this->fields)._._.worldObjectParent;
  if (pMVar1 == (MVWorldObjectClient *)0x0) {
code_?:
    func_?(0);
    pOVar2 = extraout_ECX;
  }
  else {
    unaff_ESI = System.Core.dll::System::Linq::
                Enumerable+<CreateGroupByIterator>c__Iterator5`2[System::Object,System::Object]::
                Enumerable_CreateGroupByIterator_c_Iterator5_2_System_Object_System_Object__System_Collections_IEnumerator_get_Current
                          ((Enumerable_CreateGroupByIterator_c_Iterator5_2_System_Object_System_Object_
                            *)pMVar1,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__MV__WorldObject__SharedWorldObjectValuesRepository->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__MV__WorldObject__SharedWorldObjectValuesRepository->_1).cctor_started == 0)) {
      func_?(TypeInfo__MV__WorldObject__SharedWorldObjectValuesRepository);
    }
    pDVar3 = MVWorldObject.dll::MV::WorldObject::SharedWorldObjectValuesRepository::
             SharedWorldObjectValuesRepository_GetValues
                       ((WorldObjectType__Enum)unaff_ESI,(MethodInfo *)0x0);
    if (pDVar3 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
    pPVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
             Dictionary_2_System_Type_Pool__get_Item
                       ((Dictionary_2_System_Type_Pool_ *)pDVar3,
                        (Type *)StringLiteral_RespawnInterval,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    uVar5 = CONCAT44(TypeInfo__System__Int32,pPVar4);
    if (pPVar4 == (Pool *)0x0) goto code_?;
    if ((pPVar4->klass->_0).element_class != (TypeInfo__System__Int32->_0).element_class)
    goto code_?;
    piVar6 = (int32_t *)func_?(pPVar4);
    pMVar1 = (this->fields)._._.worldObjectParent;
    (this->fields).respawnInterval = *piVar6;
    if (pMVar1 == (MVWorldObjectClient *)0x0) goto code_?;
    pDVar3 = (Dictionary_2_System_Object_System_Object_ *)
             (*(code *)(pMVar1->klass->vtable).get_RunTimeData.method)
                       (pMVar1,(pMVar1->klass->vtable).set_RunTimeData.methodPtr);
    if ((((uint)(TypeInfo__Extensions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__Extensions->_1).cctor_started == 0)) {
      func_?(TypeInfo__Extensions);
    }
    unaff_ESI = Extensions::Extensions_GetObscuredType
                          (pDVar3,StringLiteral_health,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_started == 0)) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    }
    if (unaff_ESI == (Object *)0x0) goto code_?;
    pOVar2 = TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat;
    if ((unaff_ESI->klass->_0).element_class ==
        (TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_0).element_class) {
      pOVar7 = (ObscuredFloat *)func_?(unaff_ESI);
      fVar8 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
              ObscuredFloat_op_Implicit_1(*pOVar7,(MethodInfo *)0x0);
      (this->fields).maxHealth = fVar8;
      return;
    }
  }
  uVar5 = func_?(unaff_ESI,pOVar2);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._._.worldObjectParent;
  iVar2 = (this->fields).respawnInterval;
  if (pMVar1 != (MVWorldObjectClient *)0x0) {
    hashtable = (Dictionary_2_System_Object_System_Object_ *)
                (*(code *)(pMVar1->klass->vtable).get_RunTimeData.method)
                          (pMVar1,(pMVar1->klass->vtable).set_RunTimeData.methodPtr);
    if ((((uint)(TypeInfo__Extensions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__Extensions->_1).cctor_started == 0)) {
      func_?(TypeInfo__Extensions);
    }
    unaff_ESI = Extensions::Extensions_GetObscuredType
                          (hashtable,StringLiteral_deathTime,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_started == 0)) {
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
  func_?(0);
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields)._._.worldObjectParent;
  if (pMVar1 != (MVWorldObjectClient *)0x0) {
    obscuredValue =
         (Object *)
         (*(code *)(pMVar1->klass->vtable).get_RunTimeData.method)
                   (pMVar1,(pMVar1->klass->vtable).set_RunTimeData.methodPtr);
    pDVar2 = (Dictionary_2_System_Object_System_Object_ *)
             ObscuredTypesConverter::ObscuredTypesConverter_CreateUnObscuredValue
                       (obscuredValue,(MethodInfo *)0x0);
    unaff_EBX = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
    if (pDVar2 == (Dictionary_2_System_Object_System_Object_ *)0x0) {
      targetRuntimeVariables = (Dictionary_2_System_Object_System_Object_ *)0x0;
    }
    else {
      bVar3 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->
              _1).naturalAligment;
      if (((pDVar2->klass->_1).naturalAligment < bVar3) ||
         ((Dictionary_2_System_Object_System_Object___Class *)
          (pDVar2->klass->_1).typeHierarchy[bVar3 - 1] !=
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
        bVar4 = false;
      }
      else {
        bVar4 = true;
      }
      targetRuntimeVariables = (Dictionary_2_System_Object_System_Object_ *)0x0;
      if (bVar4) {
        targetRuntimeVariables = pDVar2;
      }
      if (targetRuntimeVariables == (Dictionary_2_System_Object_System_Object_ *)0x0)
      goto code_?;
    }
    pMVar1 = (this->fields)._._.worldObjectParent;
    if (pMVar1 != (MVWorldObjectClient *)0x0) {
      unaff_EBX = (Dictionary_2_System_Object_System_Object___Class *)
                  System.Core.dll::System::Linq::
                  Enumerable+<CreateGroupByIterator>c__Iterator5`2[System::Object,System::Object]::
                  Enumerable_CreateGroupByIterator_c_Iterator5_2_System_Object_System_Object__System_Collections_IEnumerator_get_Current
                            ((Enumerable_CreateGroupByIterator_c_Iterator5_2_System_Object_System_Object_
                              *)pMVar1,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__MV__WorldObject__RuntimeVariablesRepository->vtable).Equals.methodPtr &
           0x2000000) != 0) &&
         ((TypeInfo__MV__WorldObject__RuntimeVariablesRepository->_1).cctor_started == 0)) {
        func_?(TypeInfo__MV__WorldObject__RuntimeVariablesRepository);
      }
      MVWorldObject.dll::MV::WorldObject::RuntimeVariablesRepository::
      RuntimeVariablesRepository_SetupRuntimeVariable
                ((WorldObjectType__Enum)unaff_EBX,targetRuntimeVariables,(MethodInfo *)0x0);
      pMVar1 = (this->fields)._._.worldObjectParent;
      if (pMVar1 != (MVWorldObjectClient *)0x0) {
        (*(code *)(pMVar1->klass->vtable).set_RunTimeData.method)
                  (pMVar1,targetRuntimeVariables,
                   (pMVar1->klass->vtable).get_HasOutputConnector.methodPtr);
        pMVar1 = (this->fields)._._.worldObjectParent;
        if (pMVar1 != (MVWorldObjectClient *)0x0) {
          pDVar2 = (Dictionary_2_System_Object_System_Object_ *)
                   (*(code *)(pMVar1->klass->vtable).get_RunTimeData.method)
                             (pMVar1,(pMVar1->klass->vtable).set_RunTimeData.methodPtr);
          iVar5 = WaitForTicks::WaitForTicks_GetEnvironmentTick
                            (-(this->fields).respawnInterval,(MethodInfo *)0x0);
          if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->vtable).Equals.
                      methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_started == 0))
          {
            func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
          }
          pOVar6 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
                   ObscuredInt_op_Implicit((ObscuredInt *)&stack0xffffffec,iVar5,(MethodInfo *)0x0);
          puVar7 = (undefined *)pOVar6->currentCryptoKey;
          pEVar8 = (Extensions__Class *)pOVar6->hiddenValue;
          iVar5 = pOVar6->fakeValue;
          if ((((uint)(TypeInfo__Extensions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__Extensions->_1).cctor_started == 0)) {
            puVar7 = &UNK_?;
            pEVar8 = TypeInfo__Extensions;
            func_?();
          }
          value.hiddenValue = (int32_t)pEVar8;
          value.currentCryptoKey = (int32_t)puVar7;
          value.fakeValue = iVar5;
          value.inited = pOVar6->inited;
          value._13_3_ = *(undefined3 *)&pOVar6->field_0xd;
          Extensions::Extensions_SetObscuredType_2
                    (pDVar2,StringLiteral_deathTime,value,
                     void_MethodInfo__Extensions__SetObscuredType<CodeStage::AntiCheat::ObscuredTypes::ObscuredInt>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt_
                    );
          return;
        }
      }
    }
  }
  func_?(0);
  pDVar2 = extraout_EDX;
code_?:
  func_?(pDVar2,unaff_EBX);
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void TakeDamage(Single, MVPlayer, PlayerKilledByType) */

void Assembly-CSharp.dll::ClientSideNPCInteractable::ClientSideNPCInteractable_TakeDamage
               (ClientSideNPCInteractable *this,float amount,MVPlayer *damageDealer,
               PlayerKilledByType__Enum damageType,MethodInfo *method)

{
  pCVar1 = this;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pMVar2 = (this->fields)._._.worldObjectParent;
  iVar3 = (this->fields).respawnInterval;
  if (pMVar2 == (MVWorldObjectClient *)0x0) {
code_?:
    uVar4 = func_?(0);
  }
  else {
    pDVar5 = (Dictionary_2_System_Object_System_Object_ *)
             (*(code *)(pMVar2->klass->vtable).get_RunTimeData.method)
                       (pMVar2,(pMVar2->klass->vtable).set_RunTimeData.methodPtr);
    if ((((uint)(TypeInfo__Extensions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__Extensions->_1).cctor_started == 0)) {
      func_?(TypeInfo__Extensions);
    }
    unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)
                Extensions::Extensions_GetObscuredType
                          (pDVar5,StringLiteral_deathTime,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_started == 0)) {
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
    if ((((uint)(TypeInfo__Extensions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__Extensions->_1).cctor_started == 0)) {
      func_?(TypeInfo__Extensions);
    }
    unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)
                Extensions::Extensions_GetObscuredType
                          (pDVar5,StringLiteral_health,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_started == 0)) {
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
    if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->vtable).Equals.
                methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_started == 0)) {
      func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat);
    }
    pOVar9 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat::
             ObscuredFloat_op_Implicit
                       ((ObscuredFloat *)&stack0xffffffd8,(float)value_02,(MethodInfo *)0x0);
    auStack_11._0_4_ = pOVar9->currentCryptoKey;
    auStack_11._4_4_ = pOVar9->hiddenValue;
    auStack_11._8_4_ = pOVar9->hiddenValueOld;
    auStack_11._12_4_ = pOVar9->fakeValue;
    if ((((uint)(TypeInfo__Extensions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__Extensions->_1).cctor_started == 0)) {
      func_?(TypeInfo__Extensions);
    }
    value.hiddenValue.b1 = auStack_11[4];
    value.hiddenValue.b2 = auStack_11[5];
    value.hiddenValue.b3 = auStack_11[6];
    value.hiddenValue.b4 = auStack_11[7];
    value.currentCryptoKey = auStack_11._0_4_;
    value.hiddenValueOld = (Byte__Array *)auStack_11._8_4_;
    value.fakeValue = (float)auStack_11._12_4_;
    value.inited = pOVar9->inited;
    value._17_3_ = *(undefined3 *)&pOVar9->field_0x11;
    Extensions::Extensions_SetObscuredType_1
              (unaff_EDI,StringLiteral_health,value,
               void_MethodInfo__Extensions__SetObscuredType<CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat_
              );
    if (0.0 < (float)value_02) {
code_?:
      this = value_02;
      this_00 = (Action_3_Single_Object_MV_Common_PlayerKilledByType_ *)
                (pCVar1->fields).takeDamageCallback;
      if (this_00 != (Action_3_Single_Object_MV_Common_PlayerKilledByType_ *)0x0) {
        System.Core.dll::System::Action`3[Single,Object,MV::Common::PlayerKilledByType]::
        Action_3_Single_Object_MV_Common_PlayerKilledByType__Invoke
                  (this_00,amount,(Object *)damageDealer,damageType,
                   MethodInfo__System__Action<float,_MVPlayer,_MV::Common::PlayerKilledByType>__Invoke_float__MVPlayer__MV__Common__PlayerKilledByType_
                  );
        pMVar2 = (pCVar1->fields)._._.worldObjectParent;
        if (pMVar2 != (MVWorldObjectClient *)0x0) {
          pDVar5 = (Dictionary_2_System_Object_System_Object_ *)
                   (*(code *)(pMVar2->klass->vtable).get_RunTimeData.method)();
          if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->vtable).Equals.
                      methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredFloat->_1).cctor_started == 0)
             ) {
            func_?();
          }
          pOVar9 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredFloat
                   ::ObscuredFloat_op_Implicit
                             ((ObscuredFloat *)&stack0xffffffd8,(float)this,(MethodInfo *)0x0);
          auStack_11._0_4_ = pOVar9->currentCryptoKey;
          auStack_11._4_4_ = pOVar9->hiddenValue;
          auStack_11._8_4_ = pOVar9->hiddenValueOld;
          auStack_11._12_4_ = pOVar9->fakeValue;
          if ((((uint)(TypeInfo__Extensions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__Extensions->_1).cctor_started == 0)) {
            func_?();
          }
          value_01.hiddenValue.b1 = auStack_11[4];
          value_01.hiddenValue.b2 = auStack_11[5];
          value_01.hiddenValue.b3 = auStack_11[6];
          value_01.hiddenValue.b4 = auStack_11[7];
          value_01.currentCryptoKey = auStack_11._0_4_;
          value_01.hiddenValueOld = (Byte__Array *)auStack_11._8_4_;
          value_01.fakeValue = (float)auStack_11._12_4_;
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
    unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)
                System.Core.dll::System::Linq::
                Enumerable+<CreateGroupByIterator>c__Iterator5`2[System::Object,System::Object]::
                Enumerable_CreateGroupByIterator_c_Iterator5_2_System_Object_System_Object__System_Collections_IEnumerator_get_Current
                          ((Enumerable_CreateGroupByIterator_c_Iterator5_2_System_Object_System_Object_
                            *)pMVar2,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__MV__WorldObject__RuntimeVariablesRepository->vtable).Equals.methodPtr &
         0x2000000) != 0) &&
       ((TypeInfo__MV__WorldObject__RuntimeVariablesRepository->_1).cctor_started == 0)) {
      func_?(TypeInfo__MV__WorldObject__RuntimeVariablesRepository);
    }
    pDVar5 = MVWorldObject.dll::MV::WorldObject::RuntimeVariablesRepository::
             RuntimeVariablesRepository_GetRuntimeVariables
                       ((WorldObjectType__Enum)unaff_EDI,(MethodInfo *)0x0);
    if (pDVar5 == (Dictionary_2_System_Object_System_Object_ *)0x0) goto code_?;
    pPVar12 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
             Dictionary_2_System_Type_Pool__get_Item
                       ((Dictionary_2_System_Type_Pool_ *)pDVar5,(Type *)StringLiteral_health,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    uVar4 = CONCAT44(TypeInfo__System__Single,pPVar12);
    if (pPVar12 == (Pool *)0x0) goto code_?;
    if ((pPVar12->klass->_0).element_class == (TypeInfo__System__Single->_0).element_class) {
      puVar13 = (undefined4 *)func_?(pPVar12);
      pMVar2 = (this->fields)._._.worldObjectParent;
      value_02 = (ClientSideNPCInteractable *)*puVar13;
      if (pMVar2 != (MVWorldObjectClient *)0x0) {
        pDVar5 = (Dictionary_2_System_Object_System_Object_ *)
                 (*(code *)(pMVar2->klass->vtable).get_RunTimeData.method)
                           (pMVar2,(pMVar2->klass->vtable).set_RunTimeData.methodPtr);
        unaff_EDI = (Dictionary_2_System_Object_System_Object_ *)
                    WaitForTicks::WaitForTicks_GetEnvironmentTick(0,(MethodInfo *)0x0);
        if ((((uint)(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->vtable).Equals.
                    methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt->_1).cctor_started == 0)) {
          func_?(TypeInfo__CodeStage__AntiCheat__ObscuredTypes__ObscuredInt);
        }
        pOVar7 = Assembly-CSharp-firstpass.dll::CodeStage::AntiCheat::ObscuredTypes::ObscuredInt::
                 ObscuredInt_op_Implicit
                           ((ObscuredInt *)auStack_11,(int32_t)unaff_EDI,(MethodInfo *)0x0);
        auStack_11._0_4_ = pOVar7->currentCryptoKey;
        auStack_11._4_4_ = pOVar7->hiddenValue;
        auStack_11._8_4_ = pOVar7->fakeValue;
        auStack_11._12_4_ = *(undefined4 *)&pOVar7->inited;
        if ((((uint)(TypeInfo__Extensions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__Extensions->_1).cctor_started == 0)) {
          func_?(TypeInfo__Extensions);
        }
        value_00.hiddenValue = auStack_11._4_4_;
        value_00.currentCryptoKey = auStack_11._0_4_;
        value_00.fakeValue = auStack_11._8_4_;
        value_00._12_4_ = auStack_11._12_4_;
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
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* ClientSideNPCInteractable() */

void Assembly-CSharp.dll::ClientSideNPCInteractable::ClientSideNPCInteractable__cctor
               (MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this = (Dictionary_2_AvatarModifierPackageType_System_Single_ *)
         func_?(
                        TypeInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_float>
                        );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this,
             MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_float>__Dictionary__
            );
  if (this != (Dictionary_2_AvatarModifierPackageType_System_Single_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[AvatarModifierPackageType,System::
    Single]::Dictionary_2_AvatarModifierPackageType_System_Single__Add
              (this,AvatarModifierPackageType__Enum_RayHeal,-1.0,
               MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_float>__Add_AvatarModifierPackageType__float_
              );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[AvatarModifierPackageType,System::
    Single]::Dictionary_2_AvatarModifierPackageType_System_Single__Add
              (this,AvatarModifierPackageType__Enum_FlamerBurn,1.8,
               MethodInfo__System__Collections__Generic__Dictionary<AvatarModifierPackageType,_float>__Add_AvatarModifierPackageType__float_
              );
    TypeInfo__ClientSideNPCInteractable->static_fields->allowedModifiersDictionary = this;
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

