
/* String Validate(String) */

String * Assembly-CSharp.dll::CloudyTheme::CloudyTheme_Validate
                   (CloudyTheme *this,String *str,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((str == (String *)0x0) ||
     (pIVar1 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
               Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)str,(MethodInfo *)0x0),
     StringLiteral____ == (String *)0x0)) goto code_?;
  pIVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
           Collection_1_VoxelHit__get_Items
                     ((Collection_1_VoxelHit_ *)StringLiteral____,(MethodInfo *)0x0);
  if ((int)pIVar1 < (int)pIVar2) {
code_?:
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?(TypeInfo__System__String);
    }
    str = mscorlib.dll::System::String::String_Concat_2(StringLiteral____,str,(MethodInfo *)0x0);
  }
  else {
    if (StringLiteral____ == (String *)0x0) goto code_?;
    pIVar1 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
             Collection_1_VoxelHit__get_Items
                       ((Collection_1_VoxelHit_ *)StringLiteral____,(MethodInfo *)0x0);
    pSVar3 = mscorlib.dll::System::String::String_Substring_1
                       (str,0,(int32_t)pIVar1,(MethodInfo *)0x0);
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?();
    }
    bVar4 = mscorlib.dll::System::String::String_op_Inequality
                      (pSVar3,StringLiteral____,(MethodInfo *)0x0);
    if (bVar4 != 0) goto code_?;
  }
  if (((Collection_1_VoxelHit_ *)str != (Collection_1_VoxelHit_ *)0x0) &&
     (pIVar1 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
               Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)str,(MethodInfo *)0x0),
     ::StringLiteral___ != (String *)0x0)) {
    pIVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
             Collection_1_VoxelHit__get_Items
                       ((Collection_1_VoxelHit_ *)::StringLiteral___,(MethodInfo *)0x0);
    if ((int)pIVar2 <= (int)pIVar1) {
      pIVar1 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
               Collection_1_VoxelHit__get_Items((Collection_1_VoxelHit_ *)str,(MethodInfo *)0x0);
      if ((::StringLiteral___ == (String *)0x0) ||
         (pIVar2 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
                   Collection_1_VoxelHit__get_Items
                             ((Collection_1_VoxelHit_ *)::StringLiteral___,(MethodInfo *)0x0),
         ::StringLiteral___ == (String *)0x0)) goto code_?;
      length = mscorlib.dll::System::Collections::ObjectModel::Collection`1[VoxelHit]::
               Collection_1_VoxelHit__get_Items
                         ((Collection_1_VoxelHit_ *)::StringLiteral___,(MethodInfo *)0x0);
      pSVar3 = mscorlib.dll::System::String::String_Substring_1
                         (str,(int)pIVar1 - (int)pIVar2,(int32_t)length,(MethodInfo *)0x0);
      if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__System__String->_1).cctor_started == 0)) {
        func_?();
      }
      bVar4 = mscorlib.dll::System::String::String_op_Inequality
                        (pSVar3,::StringLiteral___,(MethodInfo *)0x0);
      if (bVar4 == 0) {
        return (String *)(Collection_1_VoxelHit_ *)str;
      }
    }
    if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__System__String->_1).cctor_started == 0)) {
      func_?();
    }
    pSVar3 = mscorlib.dll::System::String::String_Concat_2(str,::StringLiteral___,(MethodInfo *)0x0)
    ;
    return pSVar3;
  }
code_?:
  func_?(0);
  pcVar5 = (code *)swi(3);
  pSVar3 = (String *)(*pcVar5)();
  return pSVar3;
}


/* CloudyTheme() */

void Assembly-CSharp.dll::CloudyTheme::CloudyTheme__ctor(CloudyTheme *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields).identifier = StringLiteral_UID;
  (this->fields).displayName = StringLiteral_No_name;
  (this->fields).description = StringLiteral_Description_missing_;
  if (cRam_? == '\0') {
    func_?(_UNK_?,unaff_EBP);
    cRam_? = '\x01';
  }
  this_00 = (List_1_UnityEngine_Vector4_ *)
            func_?(TypeInfo__System__Collections__Generic__List<ThemeComponent>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (this_00,MethodInfo__System__Collections__Generic__List<ThemeComponent>__List__);
  (this->fields)._._.components = (List_1_ThemeComponent_ *)this_00;
  uStack1 = 0;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?();
  }
  return;
}


/* String get_Description() */

String * Assembly-CSharp.dll::CloudyTheme::CloudyTheme_get_Description
                   (CloudyTheme *this,MethodInfo *method)

{
  return (this->fields).description;
}


/* String get_DisplayName() */

String * Assembly-CSharp.dll::CloudyTheme::CloudyTheme_get_DisplayName
                   (CloudyTheme *this,MethodInfo *method)

{
  return (this->fields).displayName;
}


/* String get_Identifier() */

String * Assembly-CSharp.dll::CloudyTheme::CloudyTheme_get_Identifier
                   (CloudyTheme *this,MethodInfo *method)

{
  return (this->fields).identifier;
}

