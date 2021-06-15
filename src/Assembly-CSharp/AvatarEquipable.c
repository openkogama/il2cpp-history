
/* Boolean Equip(AvatarItemType, AvatarEquipableType, Dictionary`2[System.Object,System.Object],
   Int32, Boolean) */

bool Assembly-CSharp.dll::AvatarEquipable::AvatarEquipable_Equip
               (AvatarEquipable *this,AvatarItemType__Enum type,AvatarEquipableType__Enum equipType,
               Dictionary_2_System_Object_System_Object_ *itemData,int32_t variantID,
               bool holsterable,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (equipType == AvatarEquipableType__Enum_Modifier) {
    if ((this->fields).isAbleToCollectPickups == 0) {
      return 0;
    }
    if (type == AvatarItemType__Enum_MousePack) {
      pMVar1 = (this->fields).interactableLocal;
      if (pMVar1 != (MVInteractableBase *)0x0) {
        (*(code *)(pMVar1->klass->vtable).__unknown_1.method)
                  (pMVar1,0xc,0xffffffff,0,(pMVar1->klass->vtable).__unknown_2.methodPtr);
        return 1;
      }
    }
    else if (type == AvatarItemType__Enum_GrowthPack) {
      pMVar1 = (this->fields).interactableLocal;
      if (pMVar1 != (MVInteractableBase *)0x0) {
        (*(code *)(pMVar1->klass->vtable).__unknown_1.method)
                  (pMVar1,0xf,0xffffffff,0,(pMVar1->klass->vtable).__unknown_2.methodPtr);
        return 1;
      }
    }
    else if (type == AvatarItemType__Enum_Health) {
      pMVar1 = (this->fields).interactableLocal;
      if (pMVar1 != (MVInteractableBase *)0x0) {
        func_?(8,pMVar1,4,0xffffffff);
        pMVar1 = (this->fields).interactableLocal;
        if (pMVar1 != (MVInteractableBase *)0x0) {
          (*(code *)(pMVar1->klass->vtable).__unknown.method)(pMVar1,0xff800000,0,0);
          return 1;
        }
      }
    }
    else if (type == AvatarItemType__Enum_Mutant) {
      pMVar1 = (this->fields).interactableLocal;
      if (pMVar1 != (MVInteractableBase *)0x0) {
        func_?(8,pMVar1,0xb,0xffffffff);
        pMVar1 = (this->fields).interactableLocal;
        if (pMVar1 != (MVInteractableBase *)0x0) {
          func_?(6,pMVar1,2,0xffffffff);
          return 1;
        }
      }
    }
    else {
      if (type != AvatarItemType__Enum_NinjaRun) {
        equipType = type;
        arg1 = (Object *)func_?(TypeInfo__MV__Common__AvatarItemType,&equipType);
        if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__System__String->_1).cctor_started == 0)) {
          func_?(TypeInfo__System__String);
        }
        message = mscorlib.dll::System::String::String_Concat_1
                            ((Object *)StringLiteral_AvatarItemType_,arg1,
                             (Object *)StringLiteral__does_not_exist_in_the_switch_ca,
                             (MethodInfo *)0x0);
        if ((((uint)(TypeInfo__UnityEngine__Debug->vtable).Equals.methodPtr & 0x2000000) != 0) &&
           ((TypeInfo__UnityEngine__Debug->_1).cctor_started == 0)) {
          func_?();
        }
        UnityEngine.CoreModule.dll::UnityEngine::Debug::Debug_1_LogError
                  ((Object *)message,(MethodInfo *)0x0);
        return 0;
      }
      pMVar1 = (this->fields).interactableLocal;
      if (pMVar1 != (MVInteractableBase *)0x0) {
        func_?(8,pMVar1,2,0xffffffff);
        pMVar1 = (this->fields).interactableLocal;
        if (pMVar1 != (MVInteractableBase *)0x0) {
          func_?(8,pMVar1,0xb);
          pMVar1 = (this->fields).interactableLocal;
          if (pMVar1 != (MVInteractableBase *)0x0) {
            func_?(6,pMVar1,0xb,0xffffffff);
            return 1;
          }
        }
      }
    }
  }
  else {
    if ((this->fields).isAbleToEquipWeapons == 0) {
      this_00 = (List_1_UnityEngine_Color32_ *)(this->fields).nonWeaponPickups;
      if (this_00 == (List_1_UnityEngine_Color32_ *)0x0) goto code_?;
      item._4_4_ = 
      MethodInfo__System__Collections__Generic__List<MV::Common::AvatarItemType>__Contains_MV__Common__AvatarItemType_
      ;
      item.rgba = type;
      bVar2 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
              List_1_UnityEngine_Color32__Contains(this_00,item,unaff_ESI);
      if (bVar2 == 0) {
        return 0;
      }
    }
    pMVar1 = (this->fields).interactableLocal;
    if (pMVar1 != (MVInteractableBase *)0x0) {
      cVar3 = (*(code *)(pMVar1->klass->vtable).__unknown_4.method)
                        (pMVar1,8,(pMVar1->klass->vtable).__unknown_5.methodPtr);
      if (cVar3 == '\0') {
        pDVar4 = (Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                  *)func_?(
                                   TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                   );
        System.Core.dll::System::Collections::Generic::
        HashSet`1[AvatarModifierPackage+AvatarModifier]::
        HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
                  ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)pDVar4,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                  );
        equipType = type;
        pCVar5 = (CrossPlatformInputManager_VirtualButton *)
                 func_?(TypeInfo__System__Int32,&equipType);
        if (pDVar4 != (Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                       *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
          String,UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
          Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                    (pDVar4,StringLiteral_type,pCVar5,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                    );
          pCVar5 = (CrossPlatformInputManager_VirtualButton *)
                   func_?(TypeInfo__System__Int32);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
          String,UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
          Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                    (pDVar4,StringLiteral_variantId,pCVar5,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                    );
          pCVar5 = (CrossPlatformInputManager_VirtualButton *)
                   func_?(TypeInfo__System__Int32,&stack0xfffffff4);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
          String,UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
          Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                    (pDVar4,StringLiteral_updateItemState,pCVar5,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                    );
          if (itemData != (Dictionary_2_System_Object_System_Object_ *)0x0) {
            mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
            String,UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager+VirtualButton]
            ::
            Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                      (pDVar4,StringLiteral_itemData,
                       (CrossPlatformInputManager_VirtualButton *)itemData,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                      );
          }
          pMVar6 = (this->fields).currentItem;
          if (pMVar6 != (MVRuntimeDataVariable *)0x0) {
            MVRuntimeDataVariable::MVRuntimeDataVariable_set_Value
                      (pMVar6,(Object *)pDVar4,(MethodInfo *)0x0);
            return 1;
          }
        }
      }
      else {
        pMVar6 = (this->fields).currentItem;
        pDVar4 = (Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                  *)func_?(
                                   TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                   );
        System.Core.dll::System::Collections::Generic::
        HashSet`1[AvatarModifierPackage+AvatarModifier]::
        HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
                  ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)pDVar4,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                  );
        equipType = 5;
        pCVar5 = (CrossPlatformInputManager_VirtualButton *)
                 func_?(TypeInfo__System__Int32,&equipType);
        if (pDVar4 != (Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                       *)0x0) {
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
          String,UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
          Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                    (pDVar4,StringLiteral_type,pCVar5,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                    );
          pCVar5 = (CrossPlatformInputManager_VirtualButton *)
                   func_?(TypeInfo__System__Int32);
          mscorlib.dll::System::Collections::Generic::Dictionary`2[System::
          String,UnityStandardAssets::CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
          Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                    (pDVar4,StringLiteral_variantId,pCVar5,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                    );
          if (pMVar6 != (MVRuntimeDataVariable *)0x0) {
            MVRuntimeDataVariable::MVRuntimeDataVariable_set_Value
                      (pMVar6,(Object *)pDVar4,(MethodInfo *)0x0);
            return 0;
          }
        }
      }
    }
  }
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  bVar2 = (*pcVar7)();
  return bVar2;
}


/* Void EquipSlapGun(Object, EventArgs) */

void Assembly-CSharp.dll::AvatarEquipable::AvatarEquipable_EquipSlapGun
               (AvatarEquipable *this,Object *sender,EventArgs *e,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).currentItem;
  this_01 = (Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
             *)func_?(
                              TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                              );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_01,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
            );
  this = (AvatarEquipable *)0x41;
  value = (CrossPlatformInputManager_VirtualButton *)func_?(TypeInfo__System__Int32,&this);
  if (this_01 !=
      (Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
       *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
    CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
    Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
              (this_01,StringLiteral_type,value,
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
  sender = (Object *)0x0;
  this = (AvatarEquipable *)&UNK_?;
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).currentItem;
  if ((this_00 == (MVRuntimeDataVariable *)0x0) ||
     (pDVar1 = (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                *)MVRuntimeDataVariable::MVRuntimeDataVariable_get_Value(this_00,(MethodInfo *)0x0),
     unaff_EDI = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>,
     pDVar1 == (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
                *)0x0)) {
code_?:
    func_?(0);
    type = (AvatarItemType__Enum)unaff_EDI;
  }
  else {
    bVar2 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1)
            .naturalAligment;
    if (((pDVar1->klass->_1).naturalAligment < bVar2) ||
       ((Dictionary_2_System_Object_System_Object___Class *)
        (pDVar1->klass->_1).typeHierarchy[bVar2 - 1] !=
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
      bVar3 = false;
    }
    else {
      bVar3 = true;
    }
    this_01 = (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
               *)0x0;
    if (bVar3) {
      this_01 = pDVar1;
    }
    pDVar4 = TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>;
    if (this_01 ==
        (Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase_
         *)0x0) goto code_?;
    bVar5 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,MV::WorldObject
            ::KogamaSettings::KogamaSettingsCore::KogamaSettingTypes::KogamaSettingWrapperBase]::
            Dictionary_2_System_String_MV_WorldObject_KogamaSettings_KogamaSettingsCore_KogamaSettingTypes_KogamaSettingWrapperBase__ContainsKey
                      (this_01,StringLiteral_type,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__ContainsKey_System__Object_
                      );
    pMVar6 = 
    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
    ;
    if (bVar5 == 0) {
      return 0;
    }
    pPVar7 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Type,Pool]::
             Dictionary_2_System_Type_Pool__get_Item
                       ((Dictionary_2_System_Type_Pool_ *)this_01,(Type *)StringLiteral_type,
                        MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__get_Item_System__Object_
                       );
    unaff_EDI = (Dictionary_2_System_Object_System_Object___Class *)type;
    if (pPVar7 == (Pool *)0x0) goto code_?;
    if ((pPVar7->klass->_0).element_class ==
        (TypeInfo__MV__Common__AvatarItemType->_0).element_class) {
      piVar8 = (int *)func_?();
      if ((MethodInfo *)*piVar8 != pMVar6) {
        return 0;
      }
      return 1;
    }
  }
  func_?();
  pDVar1 = extraout_EDX;
  pDVar4 = (Dictionary_2_System_Object_System_Object___Class *)type;
code_?:
  func_?(pDVar1,pDVar4);
  pcVar9 = (code *)swi(3);
  bVar5 = (*pcVar9)();
  return bVar5;
}


/* Void Holster() */

void Assembly-CSharp.dll::AvatarEquipable::AvatarEquipable_Holster
               (AvatarEquipable *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
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
  pDVar4 = (Dictionary_2_System_String_Theme_ *)
           MVRuntimeDataVariable::MVRuntimeDataVariable_get_Value(pMVar2,(MethodInfo *)0x0);
  if (pDVar4 != (Dictionary_2_System_String_Theme_ *)0x0) {
    bVar5 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1)
            .naturalAligment;
    if (((pDVar4->klass->_1).naturalAligment < bVar5) ||
       ((Dictionary_2_System_Object_System_Object___Class *)
        (pDVar4->klass->_1).typeHierarchy[bVar5 - 1] !=
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    this_00 = (Dictionary_2_System_String_Theme_ *)0x0;
    if (bVar6) {
      this_00 = pDVar4;
    }
    if (this_00 != (Dictionary_2_System_String_Theme_ *)0x0) {
      this = (AvatarEquipable *)0x1;
      value = (Theme *)func_?(TypeInfo__System__Int32,&this);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,Theme]::
      Dictionary_2_System_String_Theme__set_Item
                (this_00,StringLiteral_updateItemState,value,
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).interactableLocal = interactableLocal;
  (this->fields).currentItem = currentItem;
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
  (*(code *)(this->klass->vtable).Equip.method)
            (this,5,0,0,0,1,(this->klass->vtable).Unequip.methodPtr);
  return;
}


/* Void Unholster() */

void Assembly-CSharp.dll::AvatarEquipable::AvatarEquipable_Unholster
               (AvatarEquipable *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
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
  pDVar4 = (Dictionary_2_System_String_Theme_ *)
           MVRuntimeDataVariable::MVRuntimeDataVariable_get_Value(pMVar2,(MethodInfo *)0x0);
  if (pDVar4 != (Dictionary_2_System_String_Theme_ *)0x0) {
    bVar5 = (TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1)
            .naturalAligment;
    if (((pDVar4->klass->_1).naturalAligment < bVar5) ||
       ((Dictionary_2_System_Object_System_Object___Class *)
        (pDVar4->klass->_1).typeHierarchy[bVar5 - 1] !=
        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    this_00 = (Dictionary_2_System_String_Theme_ *)0x0;
    if (bVar6) {
      this_00 = pDVar4;
    }
    if (this_00 != (Dictionary_2_System_String_Theme_ *)0x0) {
      this = (AvatarEquipable *)0x2;
      value = (Theme *)func_?(TypeInfo__System__Int32,&this);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,Theme]::
      Dictionary_2_System_String_Theme__set_Item
                (this_00,StringLiteral_updateItemState,value,
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).isAbleToCollectPickups = 1;
  (this->fields).isAbleToEquipWeapons = 1;
  this_00 = (List_1_UnityEngine_Vector4_ *)
            func_?(TypeInfo__System__Collections__Generic__List<MV::Common::AvatarItemType>
                           );
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (this_00,
             MethodInfo__System__Collections__Generic__List<MV::Common::AvatarItemType>__List__);
  if (this_00 != (List_1_UnityEngine_Vector4_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
              ((List_1_UIPushOption_ *)this_00,
               UIPushOption__Enum_InvisibleBlocker|UIPushOption__Enum_Blocking,
               MethodInfo__System__Collections__Generic__List<MV::Common::AvatarItemType>__Add_MV__Common__AvatarItemType_
              );
    mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
              ((List_1_UIPushOption_ *)this_00,0x3d,
               MethodInfo__System__Collections__Generic__List<MV::Common::AvatarItemType>__Add_MV__Common__AvatarItemType_
              );
    (this->fields).nonWeaponPickups = (List_1_MV_Common_AvatarItemType_ *)this_00;
    MVComponent::MVComponent__ctor((MVComponent *)this,(MethodInfo *)0x0);
    return;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

