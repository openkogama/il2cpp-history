
/* Boolean Equip(AvatarItemType, AvatarEquipableType, Dictionary`2[System.Object,System.Object],
   Int32, Boolean) */

bool Assembly-CSharp.dll::AvatarEquipable::AvatarEquipable_Equip
               (AvatarEquipable *this,AvatarItemType__Enum type,AvatarEquipableType__Enum equipType,
               Dictionary_2_System_Object_System_Object_ *itemData,int32_t variantID,
               bool holsterable,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__MV__Common__AvatarItemType);
    func_?(&TypeInfo__UnityEngine__Debug);
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
    func_?(&
                    MethodInfo__System__Collections__Generic__List<MV::Common::AvatarItemType>__Contains_MV__Common__AvatarItemType_
                   );
    func_?(&StringLiteral_AvatarItemType_);
    func_?(&StringLiteral_updateItemState);
    func_?(&StringLiteral_variantId);
    func_?(&StringLiteral_itemData);
    func_?(&StringLiteral__does_not_exist_in_the_switch_ca);
    func_?(&StringLiteral_type);
    cRam_? = '\x01';
  }
  if (equipType != AvatarEquipableType__Enum_Modifier) {
    if ((this->fields).isAbleToEquipWeapons == 0) {
      this_00 = (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                (this->fields).nonWeaponPickups;
      if (this_00 == (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0)
      goto code_?;
      bVar1 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions::
              RegexCharClass+SingleRange]::
              List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__Contains
                        (this_00,(RegexCharClass_SingleRange)type,
                         MethodInfo__System__Collections__Generic__List<MV::Common::AvatarItemType>__Contains_MV__Common__AvatarItemType_
                        );
      if (bVar1 == 0) {
        return 0;
      }
    }
    pMVar2 = (this->fields).interactableLocal;
    if (pMVar2 != (MVInteractableBase *)0x0) {
      cVar3 = (*(pMVar2->klass->vtable).__unknown_5.methodPtr)
                        (pMVar2,8,(pMVar2->klass->vtable).__unknown_5.method);
      if (cVar3 == '\0') {
        pDVar4 = (Dictionary_2_System_Object_System_Object_ *)
                 func_?(
                                TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                );
        if (pDVar4 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
          ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
                    ((ParameterOverride_1_System_Object_ *)pDVar4,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                    );
          pOVar5 = (Object *)func_?(TypeInfo__System__Int32);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__Add
                    (pDVar4,(Object *)StringLiteral_type,pOVar5,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                    );
          iStack_6 = variantID;
          pOVar5 = (Object *)func_?(TypeInfo__System__Int32,&iStack_6);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__Add
                    (pDVar4,(Object *)StringLiteral_variantId,pOVar5,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                    );
          pOVar5 = (Object *)func_?(TypeInfo__System__Int32,&stack0xfffffff4);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__Add
                    (pDVar4,(Object *)StringLiteral_updateItemState,pOVar5,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                    );
          if (itemData != (Dictionary_2_System_Object_System_Object_ *)0x0) {
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__Add
                      (pDVar4,(Object *)StringLiteral_itemData,(Object *)itemData,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                      );
          }
          pMVar7 = (this->fields).currentItem;
          if (pMVar7 != (MVRuntimeDataVariable *)0x0) {
            MVRuntimeDataVariable::MVRuntimeDataVariable_set_Value
                      (pMVar7,(Object *)pDVar4,(MethodInfo *)0x0);
            return 1;
          }
        }
      }
      else {
        pMVar7 = (this->fields).currentItem;
        pDVar4 = (Dictionary_2_System_Object_System_Object_ *)
                 func_?(
                                TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                );
        if (pDVar4 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
          Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
          ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
                    ((ParameterOverride_1_System_Object_ *)pDVar4,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                    );
          pOVar5 = (Object *)func_?(TypeInfo__System__Int32);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__Add
                    (pDVar4,(Object *)StringLiteral_type,pOVar5,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                    );
          iStack_6 = 0;
          pOVar5 = (Object *)func_?(TypeInfo__System__Int32,&iStack_6);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__Add
                    (pDVar4,(Object *)StringLiteral_variantId,pOVar5,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                    );
          if (pMVar7 != (MVRuntimeDataVariable *)0x0) {
            MVRuntimeDataVariable::MVRuntimeDataVariable_set_Value
                      (pMVar7,(Object *)pDVar4,(MethodInfo *)0x0);
            return 0;
          }
        }
      }
    }
    goto code_?;
  }
  if ((this->fields).isAbleToCollectPickups != 0) {
    if ((int)type < 8) {
      if (type == AvatarItemType__Enum_Health) {
        pMVar2 = (this->fields).interactableLocal;
        if (pMVar2 != (MVInteractableBase *)0x0) {
          (*(pMVar2->klass->vtable).__unknown_4.methodPtr)
                    (pMVar2,4,0xffffffff,(pMVar2->klass->vtable).__unknown_4.method);
          pMVar2 = (this->fields).interactableLocal;
          if (pMVar2 != (MVInteractableBase *)0x0) {
            (*(pMVar2->klass->vtable).__unknown.methodPtr)(pMVar2,0xff800000,0,0);
            return 1;
          }
        }
        goto code_?;
      }
      if (type == AvatarItemType__Enum_Mutant) {
        pMVar2 = (this->fields).interactableLocal;
        if (pMVar2 != (MVInteractableBase *)0x0) {
          func_?(9,pMVar2,0xb,0xffffffff);
          pMVar2 = (this->fields).interactableLocal;
          if (pMVar2 != (MVInteractableBase *)0x0) {
            func_?(7,pMVar2,2,0xffffffff);
            return 1;
          }
        }
        goto code_?;
      }
    }
    else {
      if (type == AvatarItemType__Enum_NinjaRun) {
        pMVar2 = (this->fields).interactableLocal;
        if (pMVar2 != (MVInteractableBase *)0x0) {
          (*(pMVar2->klass->vtable).__unknown_4.methodPtr)
                    (pMVar2,2,0xffffffff,(pMVar2->klass->vtable).__unknown_4.method);
          pMVar2 = (this->fields).interactableLocal;
          if (pMVar2 != (MVInteractableBase *)0x0) {
            (*(pMVar2->klass->vtable).__unknown_4.methodPtr)(pMVar2,0xb,0xffffffff);
            pMVar2 = (this->fields).interactableLocal;
            if (pMVar2 != (MVInteractableBase *)0x0) {
              (*(pMVar2->klass->vtable).__unknown_2.methodPtr)(pMVar2,0xb,0xffffffff,0);
              return 1;
            }
          }
        }
code_?:
        func_?();
        pcVar8 = (code *)swi(3);
        bVar1 = (*pcVar8)();
        return bVar1;
      }
      if (type == AvatarItemType__Enum_MousePack) {
        pMVar2 = (this->fields).interactableLocal;
        if (pMVar2 != (MVInteractableBase *)0x0) {
          func_?(7,pMVar2,0xc,0xffffffff,0);
          return 1;
        }
        goto code_?;
      }
      if (type == AvatarItemType__Enum_GrowthPack) {
        pMVar2 = (this->fields).interactableLocal;
        if (pMVar2 != (MVInteractableBase *)0x0) {
          func_?(7,pMVar2,0xf,0xffffffff,0);
          return 1;
        }
        goto code_?;
      }
    }
    pSVar9 = mscorlib.dll::System::Enum::Enum_ToString((Enum *)&stack0xffffffe8,(MethodInfo *)0x0);
    pSVar9 = mscorlib.dll::System::String::String_Concat_4
                       (StringLiteral_AvatarItemType_,pSVar9,
                        StringLiteral__does_not_exist_in_the_switch_ca,(MethodInfo *)0x0);
    if ((TypeInfo__UnityEngine__Debug->_1).cctor_finished_or_no_cctor == 0) {
      func_?();
    }
    UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
              ((Object *)pSVar9,(MethodInfo *)0x0);
  }
  return 0;
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
  this_01 = (Dictionary_2_System_Object_System_Object_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                           );
  if (this_01 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    Unity.Postprocessing.Runtime.dll::UnityEngine::Rendering::PostProcessing::
    ParameterOverride`1[System::Object]::ParameterOverride_1_System_Object___ctor
              ((ParameterOverride_1_System_Object_ *)this_01,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
              );
    this = (AvatarEquipable *)0x41;
    value = (Object *)func_?(TypeInfo__System__Int32,&this);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              (this_01,(Object *)StringLiteral_type,value,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    if (this_00 != (MVRuntimeDataVariable *)0x0) {
      MVRuntimeDataVariable::MVRuntimeDataVariable_set_Value
                (this_00,(Object *)this_01,(MethodInfo *)0x0);
      return;
    }
  }
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
  if (this_00 == (MVRuntimeDataVariable *)0x0) {
code_?:
    func_?();
    type = (AvatarItemType__Enum)unaff_ESI;
  }
  else {
    unaff_ESI = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)
                MVRuntimeDataVariable::MVRuntimeDataVariable_get_Value(this_00,(MethodInfo *)0x0);
    if (unaff_ESI == (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)0x0)
    goto code_?;
    pDVar1 = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
    if (((unaff_ESI->klass->_1).typeHierarchyDepth <
         (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
         typeHierarchyDepth) ||
       ((Dictionary_2_System_Object_System_Object___Class *)
        (unaff_ESI->klass->_1).typeHierarchy
        [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
         typeHierarchyDepth - 1] !=
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>))
    goto code_?;
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            Object,GUILoginHandler+PlanetData]::
            Dictionary_2_System_Object_GUILoginHandler_PlanetData__ContainsKey
                      (unaff_ESI,(Object *)StringLiteral_type,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    pMVar3 = 
    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
    ;
    if (bVar2 == 0) {
      return 0;
    }
    pOVar4 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
             ::Dictionary_2_System_Object_System_Object__get_Item
                       ((Dictionary_2_System_Object_System_Object_ *)unaff_ESI,
                        (Object *)StringLiteral_type,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    unaff_ESI = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)type;
    if (pOVar4 == (Object *)0x0) goto code_?;
    if ((pOVar4->klass->_0).element_class ==
        (TypeInfo__MV__Common__AvatarItemType->_0).element_class) {
      piVar5 = (int *)func_?();
      return (MethodInfo *)*piVar5 == pMVar3;
    }
  }
  func_?();
  pDVar1 = extraout_EDX;
  unaff_ESI = (Dictionary_2_System_Object_GUILoginHandler_PlanetData_ *)type;
code_?:
  func_?(unaff_ESI,pDVar1);
  pcVar6 = (code *)swi(3);
  bVar2 = (*pcVar6)();
  return bVar2;
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
  if (pMVar2 != (MVRuntimeDataVariable *)0x0) {
    this_00 = (Dictionary_2_System_Object_System_Object_ *)
              MVRuntimeDataVariable::MVRuntimeDataVariable_get_Value(pMVar2,(MethodInfo *)0x0);
    if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      if (((TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           typeHierarchyDepth <= (this_00->klass->_1).typeHierarchyDepth) &&
         ((Dictionary_2_System_Object_System_Object___Class *)
          (this_00->klass->_1).typeHierarchy
          [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           typeHierarchyDepth - 1] ==
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
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
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
  (this->fields).interactableLocal = interactableLocal;
  func_?(&(this->fields).interactableLocal,interactableLocal);
  (this->fields).currentItem = currentItem;
  func_?(&(this->fields).currentItem,currentItem);
  if (skillsDataManager != (WorldObjectSkillDataManager *)0x0) {
    bVar1 = WorldObjectSkillDataManager::WorldObjectSkillDataManager_HasSkill
                      (skillsDataManager,StringLiteral_UnableToCollectModifierPickups,
                       (MethodInfo *)0x0);
    (this->fields).isAbleToCollectPickups = bVar1 == 0;
    bVar1 = WorldObjectSkillDataManager::WorldObjectSkillDataManager_HasSkill
                      (skillsDataManager,StringLiteral_UnableToEquipWeapons,(MethodInfo *)0x0);
    (this->fields).isAbleToEquipWeapons = bVar1 == 0;
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void Unequip() */

void Assembly-CSharp.dll::AvatarEquipable::AvatarEquipable_Unequip
               (AvatarEquipable *this,MethodInfo *method)

{
  (*(this->klass->vtable).Equip.methodPtr)(this,5,0,0,0,1,(this->klass->vtable).Equip.method);
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
  if (pMVar2 != (MVRuntimeDataVariable *)0x0) {
    this_00 = (Dictionary_2_System_Object_System_Object_ *)
              MVRuntimeDataVariable::MVRuntimeDataVariable_get_Value(pMVar2,(MethodInfo *)0x0);
    if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      if (((TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           typeHierarchyDepth <= (this_00->klass->_1).typeHierarchyDepth) &&
         ((Dictionary_2_System_Object_System_Object___Class *)
          (this_00->klass->_1).typeHierarchy
          [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           typeHierarchyDepth - 1] ==
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
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
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
  this_00 = (List_1_MV_Common_AvatarItemType_ *)
            func_?(TypeInfo__System__Collections__Generic__List<MV::Common::AvatarItemType>
                           );
  if (this_00 != (List_1_MV_Common_AvatarItemType_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::LowLevelList`1[System::Object]::
    LowLevelList_1_System_Object___ctor
              ((LowLevelList_1_System_Object_ *)this_00,
               MethodInfo__System__Collections__Generic__List<MV::Common::AvatarItemType>__List__);
    func_?(this_00,5,
                    MethodInfo__System__Collections__Generic__List<MV::Common::AvatarItemType>__Add_MV__Common__AvatarItemType_
                   );
    func_?(this_00,0x3d,
                    MethodInfo__System__Collections__Generic__List<MV::Common::AvatarItemType>__Add_MV__Common__AvatarItemType_
                   );
    (this->fields).nonWeaponPickups = this_00;
    func_?(&(this->fields).nonWeaponPickups,this_00);
    MVInteractableBase::MVInteractableBase__ctor((MVInteractableBase *)this,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

