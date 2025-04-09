
/* Boolean Equip(AvatarItemType, AvatarEquipableType, Dictionary`2[System.Object,System.Object],
   Int32) */

bool Assembly-CSharp.dll::AvatarEquipable::AvatarEquipable_Equip
               (AvatarEquipable *this,AvatarItemType__Enum type,AvatarEquipableType__Enum equipType,
               Dictionary_2_System_Object_System_Object_ *itemData,int32_t variantID,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::Common::AvatarItemType>__Contains_MV__Common__AvatarItemType_
                   );
    cRam_? = '\x01';
  }
  if (equipType == AvatarEquipableType__Enum_Modifier) {
    bVar1 = AvatarEquipable_EquipModifier(this,type,(MethodInfo *)0x0);
    return bVar1;
  }
  if ((this->fields).isAbleToEquipWeapons == 0) {
    this_00 = (List_1_System_Int32Enum_ *)(this->fields).nonWeaponPickups;
    if (this_00 == (List_1_System_Int32Enum_ *)0x0) {
      func_?();
      pcVar2 = (code *)swi(3);
      bVar1 = (*pcVar2)();
      return bVar1;
    }
    bVar1 = mscorlib.dll::System::Collections::Generic::List`1[System::Int32Enum]::
            List_1_System_Int32Enum__Contains
                      (this_00,type,
                       MethodInfo__System__Collections__Generic__List<MV::Common::AvatarItemType>__Contains_MV__Common__AvatarItemType_
                      );
    if (bVar1 == 0) {
      return 0;
    }
  }
  bVar1 = AvatarEquipable_EquipPickup(this,type,itemData,variantID,(MethodInfo *)0x0);
  return bVar1;
}


/* Boolean EquipModifier(AvatarItemType) */

bool Assembly-CSharp.dll::AvatarEquipable::AvatarEquipable_EquipModifier
               (AvatarEquipable *this,AvatarItemType__Enum type,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__Common__AvatarItemType);
    func_?(&TypeInfo__UnityEngine__Debug);
    func_?(&StringLiteral_AvatarItemType_);
    func_?(&StringLiteral__does_not_exist_in_the_switch_ca);
    cRam_? = '\x01';
  }
  if ((this->fields).isAbleToCollectPickups != 0) {
    if ((int)type < 8) {
      if (type == AvatarItemType__Enum_Health) {
        pMVar1 = (this->fields).interactableLocal;
        if (pMVar1 != (MVInteractableBase *)0x0) {
          (*(code *)(pMVar1->klass->vtable).__unknown_6.method)
                    (pMVar1,4,0xffffffff,(pMVar1->klass->vtable).__unknown_7.methodPtr);
          pMVar1 = (this->fields).interactableLocal;
          if (pMVar1 != (MVInteractableBase *)0x0) {
            (*(code *)(pMVar1->klass->vtable).__unknown_2.method)
                      (pMVar1,0x7f800000,0,(pMVar1->klass->vtable).__unknown_3.methodPtr);
            return 1;
          }
        }
        goto code_?;
      }
      if (type == AvatarItemType__Enum_Mutant) {
        pMVar1 = (this->fields).interactableLocal;
        if (pMVar1 != (MVInteractableBase *)0x0) {
          (*(code *)(pMVar1->klass->vtable).__unknown_6.method)
                    (pMVar1,0xb,0xffffffff,(pMVar1->klass->vtable).__unknown_7.methodPtr);
          pMVar1 = (this->fields).interactableLocal;
          if (pMVar1 != (MVInteractableBase *)0x0) {
            (*(code *)(pMVar1->klass->vtable).__unknown_4.method)
                      (pMVar1,2,0xffffffff,0,(pMVar1->klass->vtable).__unknown_5.methodPtr);
            return 1;
          }
        }
        goto code_?;
      }
    }
    else {
      if (type == AvatarItemType__Enum_NinjaRun) {
        pMVar1 = (this->fields).interactableLocal;
        if (pMVar1 != (MVInteractableBase *)0x0) {
          (*(code *)(pMVar1->klass->vtable).__unknown_6.method)
                    (pMVar1,2,0xffffffff,(pMVar1->klass->vtable).__unknown_7.methodPtr);
          pMVar1 = (this->fields).interactableLocal;
          if (pMVar1 != (MVInteractableBase *)0x0) {
            (*(code *)(pMVar1->klass->vtable).__unknown_6.method)
                      (pMVar1,0xb,0xffffffff,(pMVar1->klass->vtable).__unknown_7.methodPtr);
            pMVar1 = (this->fields).interactableLocal;
            if (pMVar1 != (MVInteractableBase *)0x0) {
              (*(code *)(pMVar1->klass->vtable).__unknown_4.method)
                        (pMVar1,0xb,0xffffffff,0,(pMVar1->klass->vtable).__unknown_5.methodPtr);
              return 1;
            }
          }
        }
code_?:
        func_?();
        pcVar2 = (code *)swi(3);
        bVar3 = (*pcVar2)();
        return bVar3;
      }
      if (type == AvatarItemType__Enum_MousePack) {
        pMVar1 = (this->fields).interactableLocal;
        if (pMVar1 != (MVInteractableBase *)0x0) {
          (*(code *)(pMVar1->klass->vtable).__unknown_4.method)
                    (pMVar1,0xc,0xffffffff,0,(pMVar1->klass->vtable).__unknown_5.methodPtr);
          return 1;
        }
        goto code_?;
      }
      if (type == AvatarItemType__Enum_GrowthPack) {
        pMVar1 = (this->fields).interactableLocal;
        if (pMVar1 != (MVInteractableBase *)0x0) {
          func_?(9,pMVar1,0xf,0xffffffff,0);
          return 1;
        }
        goto code_?;
      }
    }
    EStack_4.klass = (Enum__Class *)TypeInfo__MV__Common__AvatarItemType;
    EStack_4.monitor = (MonitorData *)0xffffffff;
    puStack_5 = (undefined *)type;
    pSVar6 = mscorlib.dll::System::Enum::Enum_ToString(&EStack_4,(MethodInfo *)0x0);
    pSVar6 = mscorlib.dll::System::String::String_Concat_4
                       (StringLiteral_AvatarItemType_,pSVar6,
                        StringLiteral__does_not_exist_in_the_switch_ca,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_2_LogError
              ((Object *)pSVar6,(MethodInfo *)0x0);
  }
  return 0;
}


/* Boolean EquipPickup(AvatarItemType, Dictionary`2[System.Object,System.Object], Int32) */

bool Assembly-CSharp.dll::AvatarEquipable::AvatarEquipable_EquipPickup
               (AvatarEquipable *this,AvatarItemType__Enum type,
               Dictionary_2_System_Object_System_Object_ *itemData,int32_t variantID,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&StringLiteral_updateItemState);
    func_?(&StringLiteral_variantId);
    func_?(&StringLiteral_itemData);
    func_?(&StringLiteral_type);
    cRam_? = '\x01';
  }
  pAVar1 = this;
  pMVar2 = (this->fields).interactableLocal;
  if (pMVar2 != (MVInteractableBase *)0x0) {
    cVar3 = (*(code *)(pMVar2->klass->vtable).__unknown_7.method)
                      (pMVar2,8,(pMVar2->klass->vtable).__unknown_8.methodPtr);
    if (cVar3 == '\0') {
      pDVar4 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                *)func_?(
                                 TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                 );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
      UIElements::StyleComplexSelector+PseudoStateData]::
      Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
                (pDVar4,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                );
      this = (AvatarEquipable *)type;
      pOVar5 = (Object *)func_?(TypeInfo__System__Int32,&this);
      if (pDVar4 != (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                     *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Add
                  ((Dictionary_2_System_Object_System_Object_ *)pDVar4,(Object *)StringLiteral_type,
                   pOVar5,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                  );
        iStack_6 = variantID;
        pOVar5 = (Object *)func_?(TypeInfo__System__Int32,&iStack_6);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Add
                  ((Dictionary_2_System_Object_System_Object_ *)pDVar4,
                   (Object *)StringLiteral_variantId,pOVar5,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                  );
        uStack_7 = 4;
        pOVar5 = (Object *)func_?(TypeInfo__System__Int32,&uStack_7);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Add
                  ((Dictionary_2_System_Object_System_Object_ *)pDVar4,
                   (Object *)StringLiteral_updateItemState,pOVar5,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                  );
        if (itemData != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__Add
                    ((Dictionary_2_System_Object_System_Object_ *)pDVar4,
                     (Object *)StringLiteral_itemData,(Object *)itemData,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                    );
        }
        pMVar8 = (pAVar1->fields).currentItem;
        if (pMVar8 != (MVRuntimeDataVariable *)0x0) {
          MVRuntimeDataVariable::MVRuntimeDataVariable_set_Value
                    (pMVar8,(Object *)pDVar4,(MethodInfo *)0x0);
          return 1;
        }
      }
    }
    else {
      pMVar8 = (pAVar1->fields).currentItem;
      pDVar4 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                *)func_?(
                                 TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                 );
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
      UIElements::StyleComplexSelector+PseudoStateData]::
      Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
                (pDVar4,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                );
      this = (AvatarEquipable *)0x5;
      pOVar5 = (Object *)func_?(TypeInfo__System__Int32,&this);
      if (pDVar4 != (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
                     *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Add
                  ((Dictionary_2_System_Object_System_Object_ *)pDVar4,(Object *)StringLiteral_type,
                   pOVar5,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                  );
        uStack_7 = 0;
        pOVar5 = (Object *)func_?(TypeInfo__System__Int32,&uStack_7);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Add
                  ((Dictionary_2_System_Object_System_Object_ *)pDVar4,
                   (Object *)StringLiteral_variantId,pOVar5,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                  );
        if (pMVar8 != (MVRuntimeDataVariable *)0x0) {
          MVRuntimeDataVariable::MVRuntimeDataVariable_set_Value
                    (pMVar8,(Object *)pDVar4,(MethodInfo *)0x0);
          return 0;
        }
      }
    }
  }
  func_?();
  pcVar9 = (code *)swi(3);
  bVar10 = (*pcVar9)();
  return bVar10;
}


/* Void EquipSlapGun(Object, EventArgs) */

void Assembly-CSharp.dll::AvatarEquipable::AvatarEquipable_EquipSlapGun
               (AvatarEquipable *this,Object *sender,EventArgs *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&StringLiteral_type);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).currentItem;
  this_01 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
             *)func_?(
                              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                              );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  StyleComplexSelector+PseudoStateData]::
  Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
            (this_01,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
            );
  this = (AvatarEquipable *)0x41;
  value = (Object *)func_?(TypeInfo__System__Int32,&this);
  if (this_01 !=
      (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)0x0
     ) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)this_01,(Object *)StringLiteral_type,
               value,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    if (this_00 != (MVRuntimeDataVariable *)0x0) {
      sender = (Object *)0x0;
      this = (AvatarEquipable *)this_01;
      MVRuntimeDataVariable::MVRuntimeDataVariable_set_Value
                (this_00,(Object *)this_01,(MethodInfo *)0x0);
      return;
    }
  }
  sender = (Object *)&UNK_?;
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Boolean GetIsEquipped(AvatarItemType) */

bool Assembly-CSharp.dll::AvatarEquipable::AvatarEquipable_GetIsEquipped
               (AvatarEquipable *this,AvatarItemType__Enum type,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__Common__AvatarItemType);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&StringLiteral_type);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).currentItem;
  if ((this_00 == (MVRuntimeDataVariable *)0x0) ||
     (this_01 = (Dictionary_2_System_Object_System_Object___Class *)
                MVRuntimeDataVariable::MVRuntimeDataVariable_get_Value(this_00,(MethodInfo *)0x0),
     unaff_ESI = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>,
     this_01 == (Dictionary_2_System_Object_System_Object___Class *)0x0)) {
code_?:
    func_?();
  }
  else {
    pIVar1 = (this_01->_0).image;
    bVar2 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1)
            .naturalAligment;
    unaff_ESI = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
    if ((*(byte *)&pIVar1[4].assembly < bVar2) ||
       (*(Dictionary_2_System_Object_System_Object___Class **)
         ((pIVar1[2].typeCount - 4) + (uint)bVar2 * 4) !=
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
    goto code_?;
    bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__ContainsKey
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)this_01,
                       (Object *)StringLiteral_type,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    pMVar4 = 
    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
    ;
    if (bVar3 == 0) {
      return 0;
    }
    TVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::
            UIElements::TextureId]::
            Dictionary_2_System_Object_UnityEngine_UIElements_TextureId__get_Item
                      ((Dictionary_2_System_Object_UnityEngine_UIElements_TextureId_ *)this_01,
                       (Object *)StringLiteral_type,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                      );
    unaff_ESI = this_01;
    if (TVar5.m_Index == 0) goto code_?;
    if (*(Il2CppClass **)(*(int *)TVar5.m_Index + 0x20) ==
        (TypeInfo__MV__Common__AvatarItemType->_0).element_class) {
      piVar6 = (int *)func_?();
      if ((MethodInfo *)*piVar6 != pMVar4) {
        return 0;
      }
      return 1;
    }
  }
  func_?();
  this_01 = extraout_EDX;
code_?:
  func_?(this_01,unaff_ESI);
  pcVar7 = (code *)swi(3);
  bVar3 = (*pcVar7)();
  return bVar3;
}


/* Void Holster() */

void Assembly-CSharp.dll::AvatarEquipable::AvatarEquipable_Holster
               (AvatarEquipable *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&StringLiteral_updateItemState);
    cRam_? = '\x01';
  }
  pAVar1 = this;
  pMVar2 = (this->fields).currentItem;
  if (pMVar2 == (MVRuntimeDataVariable *)0x0) {
code_?:
    func_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  this_00 = (Dictionary_2_System_Object_System_Object_ *)
            MVRuntimeDataVariable::MVRuntimeDataVariable_get_Value(pMVar2,(MethodInfo *)0x0);
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    bVar4 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1)
            .naturalAligment;
    if ((bVar4 <= (this_00->klass->_1).naturalAligment) &&
       ((Dictionary_2_System_Object_System_Object___Class *)
        (this_00->klass->_1).typeHierarchy[bVar4 - 1] ==
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
      this = (AvatarEquipable *)0x1;
      value = (Object *)func_?(TypeInfo__System__Int32,&this);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__set_Item
                (this_00,(Object *)StringLiteral_updateItemState,value,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                );
      pMVar2 = (pAVar1->fields).currentItem;
      if (pMVar2 == (MVRuntimeDataVariable *)0x0) goto code_?;
      MVRuntimeDataVariable::MVRuntimeDataVariable_set_Value
                (pMVar2,(Object *)this_00,(MethodInfo *)0x0);
    }
  }
  return;
}


/* Void Init(MVInteractableBase, MVRuntimeDataVariable, WorldObjectSkillDataManager) */

void Assembly-CSharp.dll::AvatarEquipable::AvatarEquipable_Init
               (AvatarEquipable *this,MVInteractableBase *interactableLocal,
               MVRuntimeDataVariable *currentItem,WorldObjectSkillDataManager *skillsDataManager,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_UnableToCollectModifierPickups);
    func_?(&StringLiteral_UnableToEquipWeapons);
    cRam_? = '\x01';
  }
  ppMVar1 = &(this->fields).interactableLocal;
  *ppMVar1 = interactableLocal;
  func_?(ppMVar1,interactableLocal);
  ppMVar2 = &(this->fields).currentItem;
  *ppMVar2 = currentItem;
  func_?(ppMVar2,currentItem);
  if (skillsDataManager != (WorldObjectSkillDataManager *)0x0) {
    bVar3 = WorldObjectSkillDataManager::WorldObjectSkillDataManager_HasSkill
                      (skillsDataManager,StringLiteral_UnableToCollectModifierPickups,
                       (MethodInfo *)0x0);
    (this->fields).isAbleToCollectPickups = bVar3 == 0;
    bVar3 = WorldObjectSkillDataManager::WorldObjectSkillDataManager_HasSkill
                      (skillsDataManager,StringLiteral_UnableToEquipWeapons,(MethodInfo *)0x0);
    (this->fields).isAbleToEquipWeapons = bVar3 == 0;
    return;
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void Unequip() */

void Assembly-CSharp.dll::AvatarEquipable::AvatarEquipable_Unequip
               (AvatarEquipable *this,MethodInfo *method)

{
  (*(code *)(this->klass->vtable).Equip.method)
            (this,5,0,0,0,(this->klass->vtable).Unequip.methodPtr);
  return;
}


/* Void Unholster() */

void Assembly-CSharp.dll::AvatarEquipable::AvatarEquipable_Unholster
               (AvatarEquipable *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&TypeInfo__System__Int32);
    func_?(&StringLiteral_updateItemState);
    cRam_? = '\x01';
  }
  pAVar1 = this;
  pMVar2 = (this->fields).currentItem;
  if (pMVar2 == (MVRuntimeDataVariable *)0x0) {
code_?:
    func_?();
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  this_00 = (Dictionary_2_System_Object_System_Object_ *)
            MVRuntimeDataVariable::MVRuntimeDataVariable_get_Value(pMVar2,(MethodInfo *)0x0);
  if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    bVar4 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1)
            .naturalAligment;
    if ((bVar4 <= (this_00->klass->_1).naturalAligment) &&
       ((Dictionary_2_System_Object_System_Object___Class *)
        (this_00->klass->_1).typeHierarchy[bVar4 - 1] ==
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
      this = (AvatarEquipable *)0x2;
      value = (Object *)func_?(TypeInfo__System__Int32,&this);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__set_Item
                (this_00,(Object *)StringLiteral_updateItemState,value,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                );
      pMVar2 = (pAVar1->fields).currentItem;
      if (pMVar2 == (MVRuntimeDataVariable *)0x0) goto code_?;
      MVRuntimeDataVariable::MVRuntimeDataVariable_set_Value
                (pMVar2,(Object *)this_00,(MethodInfo *)0x0);
    }
  }
  return;
}


/* AvatarEquipable() */

void Assembly-CSharp.dll::AvatarEquipable::AvatarEquipable__ctor
               (AvatarEquipable *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::Common::AvatarItemType>__Add_MV__Common__AvatarItemType_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::Common::AvatarItemType>__List__
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<MV::Common::AvatarItemType>);
    cRam_? = '\x01';
  }
  (this->fields).isAbleToCollectPickups = 1;
  (this->fields).isAbleToEquipWeapons = 1;
  this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
            func_?(TypeInfo__System__Collections__Generic__List<MV::Common::AvatarItemType>
                           );
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<MV::Common::AvatarItemType>__List__);
  pMVar1 = 
  MethodInfo__System__Collections__Generic__List<MV::Common::AvatarItemType>__Add_MV__Common__AvatarItemType_
  ;
  if (this_00 != (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
    piVar2 = &(this_00->fields)._version;
    *piVar2 = *piVar2 + 1;
    pRVar3 = (this_00->fields)._items;
    if (pRVar3 != (RegexCharClass_SingleRange__Array *)0x0) {
      uVar4 = (this_00->fields)._size;
      if (uVar4 < pRVar3->max_length) {
        (this_00->fields)._size = uVar4 + 1;
        if (pRVar3->max_length <= uVar4) goto code_?;
        pRVar3->vector[uVar4].First = 5;
        pRVar3->vector[uVar4].Last = 0;
      }
      else {
        mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
        RegexCharClass+SingleRange]::
        List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__AddWithResize
                  (this_00,(RegexCharClass_SingleRange)0x5,pMVar1->klass->rgctx_data[0xe].method);
      }
      pMVar1 = 
      MethodInfo__System__Collections__Generic__List<MV::Common::AvatarItemType>__Add_MV__Common__AvatarItemType_
      ;
      piVar2 = &(this_00->fields)._version;
      *piVar2 = *piVar2 + 1;
      pRVar3 = (this_00->fields)._items;
      if (pRVar3 != (RegexCharClass_SingleRange__Array *)0x0) {
        uVar4 = (this_00->fields)._size;
        if (uVar4 < pRVar3->max_length) {
          (this_00->fields)._size = uVar4 + 1;
          if (pRVar3->max_length <= uVar4) goto code_?;
          pRVar3->vector[uVar4].First = 0x3d;
          pRVar3->vector[uVar4].Last = 0;
        }
        else {
          mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
          RegexCharClass+SingleRange]::
          List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__AddWithResize
                    (this_00,(RegexCharClass_SingleRange)0x3d,pMVar1->klass->rgctx_data[0xe].method)
          ;
        }
        pMVar1 = 
        MethodInfo__System__Collections__Generic__List<MV::Common::AvatarItemType>__Add_MV__Common__AvatarItemType_
        ;
        piVar2 = &(this_00->fields)._version;
        *piVar2 = *piVar2 + 1;
        pRVar3 = (this_00->fields)._items;
        if (pRVar3 != (RegexCharClass_SingleRange__Array *)0x0) {
          uVar4 = (this_00->fields)._size;
          if (pRVar3->max_length <= uVar4) {
            mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
            RegexCharClass+SingleRange]::
            List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__AddWithResize
                      (this_00,(RegexCharClass_SingleRange)0x3b,
                       pMVar1->klass->rgctx_data[0xe].method);
code_?:
            (this->fields).nonWeaponPickups = (List_1_MV_Common_AvatarItemType_ *)this_00;
            func_?();
            LobbyStatePlayModeController::LobbyStatePlayModeController__ctor
                      ((LobbyStatePlayModeController *)this,(MethodInfo *)0x0);
            return;
          }
          (this_00->fields)._size = uVar4 + 1;
          if (uVar4 < pRVar3->max_length) {
            pRVar3->vector[uVar4].First = 0x3b;
            pRVar3->vector[uVar4].Last = 0;
            goto code_?;
          }
          goto code_?;
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

