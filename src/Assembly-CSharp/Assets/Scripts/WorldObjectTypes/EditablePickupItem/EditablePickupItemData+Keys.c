
/* List`1[System.String] GetKeys() */

List_1_System_String_ *
Assembly-CSharp.dll::Assets::Scripts::WorldObjectTypes::EditablePickupItem::
EditablePickupItemData+Keys::EditablePickupItemData_Keys_GetKeys(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_
                   );
    func_?(&MethodInfo__System__Collections__Generic__List<System::String>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<System::String>);
    func_?(&StringLiteral_Damage);
    func_?(&StringLiteral_ImpulseStrength);
    func_?(&StringLiteral_Radius);
    func_?(&StringLiteral_Name);
    func_?(&StringLiteral_AttackAnimationTime);
    func_?(&StringLiteral_AttackCooldown);
    func_?(&StringLiteral_HitSoundEffect);
    func_?(&StringLiteral_FireSoundEffectVolume);
    func_?(&StringLiteral_RecoilStrength);
    func_?(&StringLiteral_MaxAmmo);
    func_?(&StringLiteral_HitSoundEffectVolume);
    func_?(&StringLiteral_FireSoundEffect);
    func_?(&StringLiteral_Range);
    cRam_? = '\x01';
  }
  pLVar1 = (List_1_System_String_ *)
           func_?(TypeInfo__System__Collections__Generic__List<System::String>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar1,
             MethodInfo__System__Collections__Generic__List<System::String>__List__);
  if (pLVar1 != (List_1_System_String_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
              ((List_1_System_Object_ *)pLVar1,(Object *)StringLiteral_Name,
               MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_);
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
              ((List_1_System_Object_ *)pLVar1,(Object *)StringLiteral_Damage,
               MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_);
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
              ((List_1_System_Object_ *)pLVar1,(Object *)StringLiteral_MaxAmmo,
               MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_);
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
              ((List_1_System_Object_ *)pLVar1,(Object *)StringLiteral_ImpulseStrength,
               MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_);
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
              ((List_1_System_Object_ *)pLVar1,(Object *)StringLiteral_RecoilStrength,
               MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_);
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
              ((List_1_System_Object_ *)pLVar1,(Object *)StringLiteral_AttackAnimationTime,
               MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_);
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
              ((List_1_System_Object_ *)pLVar1,(Object *)StringLiteral_AttackCooldown,
               MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_);
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
              ((List_1_System_Object_ *)pLVar1,(Object *)StringLiteral_Range,
               MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_);
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
              ((List_1_System_Object_ *)pLVar1,(Object *)StringLiteral_Radius,
               MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_);
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
              ((List_1_System_Object_ *)pLVar1,(Object *)StringLiteral_FireSoundEffect,
               MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_);
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
              ((List_1_System_Object_ *)pLVar1,(Object *)StringLiteral_FireSoundEffectVolume,
               MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_);
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
              ((List_1_System_Object_ *)pLVar1,(Object *)StringLiteral_HitSoundEffect,
               MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_);
    mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
              ((List_1_System_Object_ *)pLVar1,(Object *)StringLiteral_HitSoundEffectVolume,
               MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_);
    return pLVar1;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  pLVar1 = (List_1_System_String_ *)(*pcVar2)();
  return pLVar1;
}

