
/* Boolean Equip(AvatarItemType, AvatarEquipableType, Dictionary`2[System.Object,System.Object],
   Int32, Boolean) */

bool Assembly-CSharp.dll::VehicleEquipable::VehicleEquipable_Equip
               (VehicleEquipable *this,AvatarItemType__Enum type,AvatarEquipableType__Enum equipType
               ,Dictionary_2_System_Object_System_Object_ *itemData,int32_t variantID,
               bool holsterable,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (equipType == AvatarEquipableType__Enum_Modifier) {
    if (type != AvatarItemType__Enum_Health) {
      return 0;
    }
    pMVar1 = (this->fields).interactableLocal;
    if (pMVar1 != (MVInteractableBase *)0x0) {
      (*(code *)(pMVar1->klass->vtable).__unknown.method)
                (pMVar1,0xff800000,0,0,(pMVar1->klass->vtable).__unknown_1.methodPtr);
      return 1;
    }
  }
  else {
    this_01 = (Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
               *)func_?(
                                TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                );
    System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
    HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
              ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_01,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
              );
    equipType = type;
    pCVar2 = (CrossPlatformInputManager_VirtualButton *)
             func_?(TypeInfo__System__Int32,&equipType);
    if (this_01 !=
        (Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
         *)0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
      CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
      Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                (this_01,StringLiteral_type,pCVar2,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
      iStack_3 = variantID;
      pCVar2 = (CrossPlatformInputManager_VirtualButton *)
               func_?(TypeInfo__System__Int32,&iStack_3);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
      CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
      Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                (this_01,StringLiteral_variantId,pCVar2,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
      uStack_4 = 4;
      pCVar2 = (CrossPlatformInputManager_VirtualButton *)
               func_?(TypeInfo__System__Int32,&uStack_4);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
      CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
      Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                (this_01,StringLiteral_updateItemState,pCVar2,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
      if (itemData != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets
        ::CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
        Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
                  (this_01,StringLiteral_itemData,
                   (CrossPlatformInputManager_VirtualButton *)itemData,
                   MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                  );
      }
      this_00 = (this->fields).currentItem;
      if (this_00 != (MVRuntimeDataVariable *)0x0) {
        MVRuntimeDataVariable::MVRuntimeDataVariable_set_Value
                  (this_00,(Object *)this_01,(MethodInfo *)0x0);
        return 1;
      }
    }
  }
  func_?(0);
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}


/* Void Holster() */

void Assembly-CSharp.dll::VehicleEquipable::VehicleEquipable_Holster
               (VehicleEquipable *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pVVar1 = this;
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
      this = (VehicleEquipable *)0x1;
      value = (Theme *)func_?(TypeInfo__System__Int32,&this);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,Theme]::
      Dictionary_2_System_String_Theme__set_Item
                (this_00,StringLiteral_updateItemState,value,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                );
      pMVar2 = (pVVar1->fields).currentItem;
      if (pMVar2 == (MVRuntimeDataVariable *)0x0) goto code_?;
      MVRuntimeDataVariable::MVRuntimeDataVariable_set_Value
                (pMVar2,(Object *)this_00,(MethodInfo *)0x0);
    }
  }
  return;
}


/* Void Init(MVInteractableBase, MVRuntimeDataVariable) */

void Assembly-CSharp.dll::VehicleEquipable::VehicleEquipable_Init
               (VehicleEquipable *this,MVInteractableBase *interactableLocal,
               MVRuntimeDataVariable *currentItem,MethodInfo *method)

{
  (this->fields).interactableLocal = interactableLocal;
  (this->fields).currentItem = currentItem;
  return;
}


/* Void Unequip() */

void Assembly-CSharp.dll::VehicleEquipable::VehicleEquipable_Unequip
               (VehicleEquipable *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields).currentItem;
  this_01 = (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            (this_01,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
            );
  if (this_00 != (MVRuntimeDataVariable *)0x0) {
    MVRuntimeDataVariable::MVRuntimeDataVariable_set_Value
              (this_00,(Object *)this_01,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void Unholster() */

void Assembly-CSharp.dll::VehicleEquipable::VehicleEquipable_Unholster
               (VehicleEquipable *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pVVar1 = this;
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
      this = (VehicleEquipable *)0x2;
      value = (Theme *)func_?(TypeInfo__System__Int32,&this);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,Theme]::
      Dictionary_2_System_String_Theme__set_Item
                (this_00,StringLiteral_updateItemState,value,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__set_Item_System__Object__System__Object_
                );
      pMVar2 = (pVVar1->fields).currentItem;
      if (pMVar2 == (MVRuntimeDataVariable *)0x0) goto code_?;
      MVRuntimeDataVariable::MVRuntimeDataVariable_set_Value
                (pMVar2,(Object *)this_00,(MethodInfo *)0x0);
    }
  }
  return;
}


/* VehicleEquipable() */

void Assembly-CSharp.dll::VehicleEquipable::VehicleEquipable__ctor
               (VehicleEquipable *this,MethodInfo *method)

{
  (this->fields)._._.findWorldObjectParent = 1;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}

