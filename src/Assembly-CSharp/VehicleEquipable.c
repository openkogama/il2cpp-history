
/* Boolean Equip(AvatarItemType, AvatarEquipableType, Dictionary`2[System.Object,System.Object],
   Int32) */

bool Assembly-CSharp.dll::VehicleEquipable::VehicleEquipable_Equip
               (VehicleEquipable *this,AvatarItemType__Enum type,AvatarEquipableType__Enum equipType
               ,Dictionary_2_System_Object_System_Object_ *itemData,int32_t variantID,
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
    this_01 = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
               *)func_?(
                                TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                                );
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements
    ::StyleComplexSelector+PseudoStateData]::
    Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
              (this_01,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
              );
    equipType = type;
    pOVar2 = (Object *)func_?(TypeInfo__System__Int32,&equipType);
    if (this_01 !=
        (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)
        0x0) {
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                ((Dictionary_2_System_Object_System_Object_ *)this_01,(Object *)StringLiteral_type,
                 pOVar2,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
      iStack_3 = variantID;
      pOVar2 = (Object *)func_?(TypeInfo__System__Int32,&iStack_3);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                ((Dictionary_2_System_Object_System_Object_ *)this_01,
                 (Object *)StringLiteral_variantId,pOVar2,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
      uStack_4 = 4;
      pOVar2 = (Object *)func_?(TypeInfo__System__Int32,&uStack_4);
      mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
      Dictionary_2_System_Object_System_Object__Add
                ((Dictionary_2_System_Object_System_Object_ *)this_01,
                 (Object *)StringLiteral_updateItemState,pOVar2,
                 MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                );
      if (itemData != (Dictionary_2_System_Object_System_Object_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__Add
                  ((Dictionary_2_System_Object_System_Object_ *)this_01,
                   (Object *)StringLiteral_itemData,(Object *)itemData,
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
  func_?();
  pcVar5 = (code *)swi(3);
  bVar6 = (*pcVar5)();
  return bVar6;
}


/* Void Holster() */

void Assembly-CSharp.dll::VehicleEquipable::VehicleEquipable_Holster
               (VehicleEquipable *this,MethodInfo *method)

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
  pVVar1 = this;
  pMVar2 = (this->fields).currentItem;
  if (pMVar2 != (MVRuntimeDataVariable *)0x0) {
    this_00 = (Dictionary_2_System_Object_System_Object_ *)
              MVRuntimeDataVariable::MVRuntimeDataVariable_get_Value(pMVar2,(MethodInfo *)0x0);
    if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      if (((TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           naturalAligment <= (this_00->klass->_1).naturalAligment) &&
         ((Dictionary_2_System_Object_System_Object___Class *)
          (this_00->klass->_1).typeHierarchy
          [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           naturalAligment - 1] ==
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
        this = (VehicleEquipable *)0x1;
        value = (Object *)func_?(TypeInfo__System__Int32,&this);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__set_Item
                  (this_00,(Object *)StringLiteral_updateItemState,value,
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
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void Unequip() */

void Assembly-CSharp.dll::VehicleEquipable::VehicleEquipable_Unequip
               (VehicleEquipable *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
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
  pVVar1 = this;
  pMVar2 = (this->fields).currentItem;
  if (pMVar2 != (MVRuntimeDataVariable *)0x0) {
    this_00 = (Dictionary_2_System_Object_System_Object_ *)
              MVRuntimeDataVariable::MVRuntimeDataVariable_get_Value(pMVar2,(MethodInfo *)0x0);
    if (this_00 != (Dictionary_2_System_Object_System_Object_ *)0x0) {
      if (((TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           naturalAligment <= (this_00->klass->_1).naturalAligment) &&
         ((Dictionary_2_System_Object_System_Object___Class *)
          (this_00->klass->_1).typeHierarchy
          [(TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>->_1).
           naturalAligment - 1] ==
          TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>)) {
        this = (VehicleEquipable *)0x2;
        value = (Object *)func_?(TypeInfo__System__Int32,&this);
        mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
        Dictionary_2_System_Object_System_Object__set_Item
                  (this_00,(Object *)StringLiteral_updateItemState,value,
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
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* VehicleEquipable() */

void Assembly-CSharp.dll::VehicleEquipable::VehicleEquipable__ctor
               (VehicleEquipable *this,MethodInfo *method)

{
  (this->fields)._._.findWorldObjectParent = 1;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}

