
/* Void AddObjectHrzMoveIgnoreTag(String) */

void Assembly-CSharp.dll::RTG::TerrainGizmoSettings::TerrainGizmoSettings_AddObjectHrzMoveIgnoreTag
               (TerrainGizmoSettings *this,String *tag,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_
                   );
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<System::String>__Contains_System__String_
                   );
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields)._objectHrzMoveIgnoreTags;
  if (pLVar1 != (List_1_System_String_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
            List_1_System_Object__Contains
                      ((List_1_System_Object_ *)pLVar1,(Object *)tag,
                       MethodInfo__System__Collections__Generic__List<System::String>__Contains_System__String_
                      );
    if (bVar2 == 0) {
      pLVar1 = (this->fields)._objectHrzMoveIgnoreTags;
      if (pLVar1 == (List_1_System_String_ *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
                ((List_1_System_Object_ *)pLVar1,(Object *)tag,
                 MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_
                );
    }
    return;
  }
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void AddObjectRotationIgnoreTag(String) */

void Assembly-CSharp.dll::RTG::TerrainGizmoSettings::TerrainGizmoSettings_AddObjectRotationIgnoreTag
               (TerrainGizmoSettings *this,String *tag,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_
                   );
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<System::String>__Contains_System__String_
                   );
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields)._objectRotationIgnoreTags;
  if (pLVar1 != (List_1_System_String_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
            List_1_System_Object__Contains
                      ((List_1_System_Object_ *)pLVar1,(Object *)tag,
                       MethodInfo__System__Collections__Generic__List<System::String>__Contains_System__String_
                      );
    if (bVar2 == 0) {
      pLVar1 = (this->fields)._objectRotationIgnoreTags;
      if (pLVar1 == (List_1_System_String_ *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
                ((List_1_System_Object_ *)pLVar1,(Object *)tag,
                 MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_
                );
    }
    return;
  }
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void AddObjectVertMoveIgnoreTag(String) */

void Assembly-CSharp.dll::RTG::TerrainGizmoSettings::TerrainGizmoSettings_AddObjectVertMoveIgnoreTag
               (TerrainGizmoSettings *this,String *tag,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_
                   );
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<System::String>__Contains_System__String_
                   );
    cRam_? = '\x01';
  }
  pLVar1 = (this->fields)._objectVertMoveIgnoreTags;
  if (pLVar1 != (List_1_System_String_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
            List_1_System_Object__Contains
                      ((List_1_System_Object_ *)pLVar1,(Object *)tag,
                       MethodInfo__System__Collections__Generic__List<System::String>__Contains_System__String_
                      );
    if (bVar2 == 0) {
      pLVar1 = (this->fields)._objectVertMoveIgnoreTags;
      if (pLVar1 == (List_1_System_String_ *)0x0) goto code_?;
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
                ((List_1_System_Object_ *)pLVar1,(Object *)tag,
                 MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_
                );
    }
    return;
  }
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Boolean IsTagIgnoredForHrzMove(String) */

bool Assembly-CSharp.dll::RTG::TerrainGizmoSettings::TerrainGizmoSettings_IsTagIgnoredForHrzMove
               (TerrainGizmoSettings *this,String *tag,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._objectHrzMoveIgnoreTags;
  if (this_00 != (List_1_System_String_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
            List_1_System_Object__Contains
                      ((List_1_System_Object_ *)this_00,(Object *)tag,
                       MethodInfo__System__Collections__Generic__List<System::String>__Contains_System__String_
                      );
    return bVar1;
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  bVar1 = (*pcVar3)();
  return bVar1;
}


/* Boolean IsTagIgnoredForRotation(String) */

bool Assembly-CSharp.dll::RTG::TerrainGizmoSettings::TerrainGizmoSettings_IsTagIgnoredForRotation
               (TerrainGizmoSettings *this,String *tag,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._objectRotationIgnoreTags;
  if (this_00 != (List_1_System_String_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
            List_1_System_Object__Contains
                      ((List_1_System_Object_ *)this_00,(Object *)tag,
                       MethodInfo__System__Collections__Generic__List<System::String>__Contains_System__String_
                      );
    return bVar1;
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  bVar1 = (*pcVar3)();
  return bVar1;
}


/* Boolean IsTagIgnoredForVertMove(String) */

bool Assembly-CSharp.dll::RTG::TerrainGizmoSettings::TerrainGizmoSettings_IsTagIgnoredForVertMove
               (TerrainGizmoSettings *this,String *tag,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._objectVertMoveIgnoreTags;
  if (this_00 != (List_1_System_String_ *)0x0) {
    bVar1 = mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
            List_1_System_Object__Contains
                      ((List_1_System_Object_ *)this_00,(Object *)tag,
                       MethodInfo__System__Collections__Generic__List<System::String>__Contains_System__String_
                      );
    return bVar1;
  }
  uVar2 = func_?(&stack0xfffffff0);
  func_?(uVar2);
  pcVar3 = (code *)swi(3);
  bVar1 = (*pcVar3)();
  return bVar1;
}


/* TerrainGizmoSettings() */

void Assembly-CSharp.dll::RTG::TerrainGizmoSettings::TerrainGizmoSettings__ctor
               (TerrainGizmoSettings *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<System::String>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<System::String>);
    cRam_? = '\x01';
  }
  (this->fields)._offsetSnapStep = 1.0;
  (this->fields)._radiusSnapStep = 1.0;
  (this->fields)._rotationSensitivity = 1.0;
  (this->fields)._objectHrzMoveLayerMask = -1;
  (this->fields)._objectVertMoveLayerMask = -1;
  (this->fields)._objectRotationLayerMask = -1;
  pLVar1 = (List_1_System_String_ *)
           func_?(TypeInfo__System__Collections__Generic__List<System::String>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar1,
             MethodInfo__System__Collections__Generic__List<System::String>__List__);
  (this->fields)._objectHrzMoveIgnoreTags = pLVar1;
  func_?(&(this->fields)._objectHrzMoveIgnoreTags,pLVar1);
  pLVar1 = (List_1_System_String_ *)
           func_?(TypeInfo__System__Collections__Generic__List<System::String>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar1,
             MethodInfo__System__Collections__Generic__List<System::String>__List__);
  (this->fields)._objectVertMoveIgnoreTags = pLVar1;
  func_?(&(this->fields)._objectVertMoveIgnoreTags,pLVar1);
  pLVar1 = (List_1_System_String_ *)
           func_?(TypeInfo__System__Collections__Generic__List<System::String>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)pLVar1,
             MethodInfo__System__Collections__Generic__List<System::String>__List__);
  method_00 = (MethodInfo *)&(this->fields)._objectRotationIgnoreTags;
  (this->fields)._objectRotationIgnoreTags = pLVar1;
  func_?(method_00,pLVar1);
  mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
            ((Object *)this,ExceptionArgument__Enum_obj,method_00);
  return;
}


/* Void set_OffsetSnapStep(Single) */

void Assembly-CSharp.dll::RTG::TerrainGizmoSettings::TerrainGizmoSettings_set_OffsetSnapStep
               (TerrainGizmoSettings *this,float value,MethodInfo *method)

{
  fVar1 = _UNK_?;
  if (_UNK_? <= value) {
    fVar1 = value;
  }
  (this->fields)._offsetSnapStep = fVar1;
  return;
}


/* Void set_RadiusSnapStep(Single) */

void Assembly-CSharp.dll::RTG::TerrainGizmoSettings::TerrainGizmoSettings_set_RadiusSnapStep
               (TerrainGizmoSettings *this,float value,MethodInfo *method)

{
  fVar1 = _UNK_?;
  if (_UNK_? <= value) {
    fVar1 = value;
  }
  (this->fields)._radiusSnapStep = fVar1;
  return;
}


/* Void set_RotationSensitivity(Single) */

void Assembly-CSharp.dll::RTG::TerrainGizmoSettings::TerrainGizmoSettings_set_RotationSensitivity
               (TerrainGizmoSettings *this,float value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Math);
    cRam_? = '\x01';
  }
  if ((TypeInfo__System__Math->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__System__Math);
  }
  fVar1 = mscorlib.dll::System::Math::Math_Max_7(0.0001,value,(MethodInfo *)0x0);
  (this->fields)._rotationSensitivity = fVar1;
  return;
}

