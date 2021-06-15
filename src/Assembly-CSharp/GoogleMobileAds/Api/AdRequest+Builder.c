
/* AdRequest+Builder AddExtra(String, String) */

AdRequest_Builder *
Assembly-CSharp.dll::GoogleMobileAds::Api::AdRequest+Builder::AdRequest_Builder_AddExtra
          (AdRequest_Builder *this,String *key,String *value,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._Extras_k__BackingField;
  if (this_00 != (Dictionary_2_System_String_System_String_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::String,UnityStandardAssets::
    CrossPlatformInput::CrossPlatformInputManager+VirtualButton]::
    Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton__Add
              ((Dictionary_2_System_String_UnityStandardAssets_CrossPlatformInput_CrossPlatformInputManager_VirtualButton_
                *)this_00,key,(CrossPlatformInputManager_VirtualButton *)value,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Add_System__String__System__String_
              );
    return this;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  pAVar2 = (AdRequest_Builder *)(*pcVar1)();
  return pAVar2;
}


/* AdRequest+Builder AddKeyword(String) */

AdRequest_Builder *
Assembly-CSharp.dll::GoogleMobileAds::Api::AdRequest+Builder::AdRequest_Builder_AddKeyword
          (AdRequest_Builder *this,String *keyword,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (HashSet_1_UnityEngine_Networking_UnityWebRequest_ *)
            (this->fields)._Keywords_k__BackingField;
  if (this_00 != (HashSet_1_UnityEngine_Networking_UnityWebRequest_ *)0x0) {
    System.Core.dll::System::Collections::Generic::HashSet`1[UnityEngine::Networking::
    UnityWebRequest]::HashSet_1_UnityEngine_Networking_UnityWebRequest__Add
              (this_00,(UnityWebRequest *)keyword,
               MethodInfo__System__Collections__Generic__HashSet<System::String>__Add_System__String_
              );
    return this;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  pAVar2 = (AdRequest_Builder *)(*pcVar1)();
  return pAVar2;
}


/* AdRequest+Builder AddMediationExtras(MediationExtras) */

AdRequest_Builder *
Assembly-CSharp.dll::GoogleMobileAds::Api::AdRequest+Builder::AdRequest_Builder_AddMediationExtras
          (AdRequest_Builder *this,MediationExtras *extras,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._MediationExtras_k__BackingField;
  if (this_00 != (List_1_GoogleMobileAds_Api_Mediation_MediationExtras_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
              ((List_1_UIPushOption_ *)this_00,(UIPushOption__Enum)extras,
               MethodInfo__System__Collections__Generic__List<GoogleMobileAds::Api::Mediation::MediationExtras>__Add_GoogleMobileAds__Api__Mediation__MediationExtras_
              );
    return this;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  pAVar2 = (AdRequest_Builder *)(*pcVar1)();
  return pAVar2;
}


/* AdRequest+Builder AddTestDevice(String) */

AdRequest_Builder *
Assembly-CSharp.dll::GoogleMobileAds::Api::AdRequest+Builder::AdRequest_Builder_AddTestDevice
          (AdRequest_Builder *this,String *deviceId,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (this->fields)._TestDevices_k__BackingField;
  if (this_00 != (List_1_System_String_ *)0x0) {
    mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::List_1_UIPushOption__Add
              ((List_1_UIPushOption_ *)this_00,(UIPushOption__Enum)deviceId,
               MethodInfo__System__Collections__Generic__List<System::String>__Add_System__String_);
    return this;
  }
  func_?(0);
  pcVar1 = (code *)swi(3);
  pAVar2 = (AdRequest_Builder *)(*pcVar1)();
  return pAVar2;
}


/* AdRequest Build() */

AdRequest *
Assembly-CSharp.dll::GoogleMobileAds::Api::AdRequest+Builder::AdRequest_Builder_Build
          (AdRequest_Builder *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pAVar1 = (AdRequest *)func_?(TypeInfo__GoogleMobileAds__Api__AdRequest);
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)pAVar1,0.0,unaff_EDI);
  if (this != (AdRequest_Builder *)0x0) {
    collection = (this->fields)._TestDevices_k__BackingField;
    this_00 = (List_1_VoxelHit_ *)
              func_?(TypeInfo__System__Collections__Generic__List<System::String>);
    mscorlib.dll::System::Collections::Generic::List`1[VoxelHit]::List_1_VoxelHit___ctor_1
              (this_00,(IEnumerable_1_VoxelHit_ *)collection,
               MethodInfo__System__Collections__Generic__List<System::String>__List_System__Collections__Generic__IEnumerable<System::String>_
              );
    (((MonoBehaviour__Fields *)&(pAVar1->fields)._TestDevices_k__BackingField)->_)._._.m_CachedPtr =
         this_00;
    capacity = (this->fields)._Keywords_k__BackingField;
    this_01 = (HashSet_1_System_String_ *)
              func_?(TypeInfo__System__Collections__Generic__HashSet<System::String>);
    System.dll::System::Collections::Generic::SortedList`2[System::Single,System::Object]::
    SortedList_2_System_Single_System_Object___ctor_1
              ((SortedList_2_System_Single_System_Object_ *)this_01,(int32_t)capacity,
               MethodInfo__System__Collections__Generic__HashSet<System::String>__HashSet_System__Collections__Generic__IEnumerable<System::String>_
              );
    (pAVar1->fields)._Keywords_k__BackingField = this_01;
    fVar2 = *(float *)((int)&(this->fields)._Birthday_k__BackingField.value.ticks._ticks + 4);
    fVar3 = (float)(this->fields)._Birthday_k__BackingField.value.kind;
    uVar4 = *(undefined4 *)&(this->fields)._Birthday_k__BackingField.value.field_0xc;
    bVar5 = (this->fields)._Birthday_k__BackingField.has_value;
    uVar6 = *(undefined7 *)&(this->fields)._Birthday_k__BackingField.field_0x11;
    *(float *)&(pAVar1->fields)._Birthday_k__BackingField.value.ticks._ticks =
         *(float *)&(this->fields)._Birthday_k__BackingField.value.ticks._ticks;
    *(float *)((int)&(pAVar1->fields)._Birthday_k__BackingField.value.ticks._ticks + 4) = fVar2;
    (pAVar1->fields)._Birthday_k__BackingField.value.kind = (int32_t)fVar3;
    *(undefined4 *)&(pAVar1->fields)._Birthday_k__BackingField.value.field_0xc = uVar4;
    (pAVar1->fields)._Birthday_k__BackingField.has_value = bVar5;
    *(undefined7 *)&(pAVar1->fields)._Birthday_k__BackingField.field_0x11 = uVar6;
    bVar5 = (this->fields)._Gender_k__BackingField.has_value;
    uVar7 = *(undefined3 *)&(this->fields)._Gender_k__BackingField.field_0x5;
    (pAVar1->fields)._Gender_k__BackingField.value = (this->fields)._Gender_k__BackingField.value;
    (pAVar1->fields)._Gender_k__BackingField.has_value = bVar5;
    *(undefined3 *)&(pAVar1->fields)._Gender_k__BackingField.field_0x5 = uVar7;
    (pAVar1->fields)._TagForChildDirectedTreatment_k__BackingField =
         (this->fields)._ChildDirectedTreatmentTag_k__BackingField;
    capacity_00 = (this->fields)._Extras_k__BackingField;
    this_02 = (Dictionary_2_System_String_System_String_ *)
              func_?(
                             TypeInfo__System__Collections__Generic__Dictionary<System::String,_System::String>
                             );
    System.dll::System::Collections::Generic::SortedList`2[System::Single,System::Object]::
    SortedList_2_System_Single_System_Object___ctor_1
              ((SortedList_2_System_Single_System_Object_ *)this_02,(int32_t)capacity_00,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Dictionary_System__Collections__Generic__IDictionary<System::String,_System::String>_
              );
    (pAVar1->fields)._Extras_k__BackingField = this_02;
    (pAVar1->fields)._MediationExtras_k__BackingField =
         (this->fields)._MediationExtras_k__BackingField;
    return pAVar1;
  }
  func_?(0);
  pcVar8 = (code *)swi(3);
  pAVar1 = (AdRequest *)(*pcVar8)();
  return pAVar1;
}


/* AdRequest+Builder SetBirthday(DateTime) */

AdRequest_Builder *
Assembly-CSharp.dll::GoogleMobileAds::Api::AdRequest+Builder::AdRequest_Builder_SetBirthday
          (AdRequest_Builder *this,DateTime birthday,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  uStack_2 = 0;
  uStack_3 = 0;
  iStack_4 = 0;
  uStack_5 = 0;
  func_?(&uStack_2,in_stack_6,(undefined4)birthday.ticks._ticks,
                  birthday.ticks._ticks._4_4_,birthday.kind,
                  MethodInfo__System__Nullable<System::DateTime>__Nullable_System__DateTime_);
  *(undefined4 *)&(this->fields)._Birthday_k__BackingField.value.ticks._ticks = uStack_2;
  *(undefined4 *)((int)&(this->fields)._Birthday_k__BackingField.value.ticks._ticks + 4) = uStack_3
  ;
  (this->fields)._Birthday_k__BackingField.value.kind = iStack_4;
  *(undefined4 *)&(this->fields)._Birthday_k__BackingField.value.field_0xc = uStack_5;
  *(undefined8 *)&(this->fields)._Birthday_k__BackingField.has_value = uStack_1;
  return this;
}


/* AdRequest+Builder SetGender(Gender) */

AdRequest_Builder *
Assembly-CSharp.dll::GoogleMobileAds::Api::AdRequest+Builder::AdRequest_Builder_SetGender
          (AdRequest_Builder *this,Gender__Enum gender,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  func_?(&uStack_1,gender,
                  MethodInfo__System__Nullable<GoogleMobileAds::Api::Gender>__Nullable_GoogleMobileAds__Api__Gender_
                 );
  (this->fields)._Gender_k__BackingField.value = (int32_t)uStack_1;
  *(undefined4 *)&(this->fields)._Gender_k__BackingField.has_value = uStack_1._4_4_;
  return this;
}


/* AdRequest+Builder TagForChildDirectedTreatment(Boolean) */

AdRequest_Builder *
Assembly-CSharp.dll::GoogleMobileAds::Api::AdRequest+Builder::
AdRequest_Builder_TagForChildDirectedTreatment
          (AdRequest_Builder *this,bool tagForChildDirectedTreatment,MethodInfo *method)

{
  uStack_1._2_2_ = (ushort)((uint)in_ECX >> 0x10);
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  uStack_1 = (uint)uStack_1._2_2_ << 0x10;
  func_?(&uStack_1,_tagForChildDirectedTreatment,
                  MethodInfo__System__Nullable<bool>__Nullable_bool_);
  (this->fields)._ChildDirectedTreatmentTag_k__BackingField = uStack_1._0_2_;
  return this;
}


/* AdRequest+Builder() */

void Assembly-CSharp.dll::GoogleMobileAds::Api::AdRequest+Builder::AdRequest_Builder__ctor
               (AdRequest_Builder *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_EDI);
  pLVar1 = (List_1_UnityEngine_Vector4_ *)
           func_?(TypeInfo__System__Collections__Generic__List<System::String>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (pLVar1,MethodInfo__System__Collections__Generic__List<System::String>__List__);
  (this->fields)._TestDevices_k__BackingField = (List_1_System_String_ *)pLVar1;
  this_00 = (HashSet_1_AvatarModifierPackage_AvatarModifier_ *)
            func_?(TypeInfo__System__Collections__Generic__HashSet<System::String>);
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            (this_00,MethodInfo__System__Collections__Generic__HashSet<System::String>__HashSet__);
  (this->fields)._Keywords_k__BackingField = (HashSet_1_System_String_ *)this_00;
  (this->fields)._Gender_k__BackingField.value = 0;
  *(undefined4 *)&(this->fields)._Gender_k__BackingField.has_value = 0;
  *(undefined4 *)&(this->fields)._Birthday_k__BackingField.value.ticks._ticks = 0;
  *(undefined4 *)((int)&(this->fields)._Birthday_k__BackingField.value.ticks._ticks + 4) = 0;
  (this->fields)._Birthday_k__BackingField.value.kind = 0;
  *(undefined4 *)&(this->fields)._Birthday_k__BackingField.value.field_0xc = 0;
  (this->fields)._ChildDirectedTreatmentTag_k__BackingField.value = 0;
  (this->fields)._ChildDirectedTreatmentTag_k__BackingField.has_value = 0;
  *(undefined8 *)&(this->fields)._Birthday_k__BackingField.has_value = 0;
  this_01 = (Dictionary_2_System_String_System_String_ *)
            func_?(
                           TypeInfo__System__Collections__Generic__Dictionary<System::String,_System::String>
                           );
  System.Core.dll::System::Collections::Generic::HashSet`1[AvatarModifierPackage+AvatarModifier]::
  HashSet_1_AvatarModifierPackage_AvatarModifier___ctor
            ((HashSet_1_AvatarModifierPackage_AvatarModifier_ *)this_01,
             MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Dictionary__
            );
  (this->fields)._Extras_k__BackingField = this_01;
  pLVar1 = (List_1_UnityEngine_Vector4_ *)
           func_?(
                          TypeInfo__System__Collections__Generic__List<GoogleMobileAds::Api::Mediation::MediationExtras>
                          );
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (pLVar1,
             MethodInfo__System__Collections__Generic__List<GoogleMobileAds::Api::Mediation::MediationExtras>__List__
            );
  (this->fields)._MediationExtras_k__BackingField =
       (List_1_GoogleMobileAds_Api_Mediation_MediationExtras_ *)pLVar1;
  return;
}


/* Nullable`1[DateTime] get_Birthday() */

Nullable_1_DateTime_ *
Assembly-CSharp.dll::GoogleMobileAds::Api::AdRequest+Builder::AdRequest_Builder_get_Birthday
          (Nullable_1_DateTime_ *__return_storage_ptr__,AdRequest_Builder *this,MethodInfo *method)

{
  uVar1 = *(undefined4 *)((int)&(this->fields)._Birthday_k__BackingField.value.ticks._ticks + 4);
  iVar2 = (this->fields)._Birthday_k__BackingField.value.kind;
  uVar3 = *(undefined4 *)&(this->fields)._Birthday_k__BackingField.value.field_0xc;
  *(int *)&(__return_storage_ptr__->value).ticks._ticks =
       (int)(this->fields)._Birthday_k__BackingField.value.ticks._ticks;
  *(undefined4 *)((int)&(__return_storage_ptr__->value).ticks._ticks + 4) = uVar1;
  (__return_storage_ptr__->value).kind = iVar2;
  *(undefined4 *)&(__return_storage_ptr__->value).field_0xc = uVar3;
  uVar4 = *(undefined7 *)&(this->fields)._Birthday_k__BackingField.field_0x11;
  __return_storage_ptr__->has_value = (this->fields)._Birthday_k__BackingField.has_value;
  *(undefined7 *)&__return_storage_ptr__->field_0x11 = uVar4;
  return __return_storage_ptr__;
}


/* Nullable`1[Boolean] get_ChildDirectedTreatmentTag() */

Nullable_1_Boolean_
Assembly-CSharp.dll::GoogleMobileAds::Api::AdRequest+Builder::
AdRequest_Builder_get_ChildDirectedTreatmentTag(AdRequest_Builder *this,MethodInfo *method)

{
  return (this->fields)._ChildDirectedTreatmentTag_k__BackingField;
}


/* Void set_Birthday(Nullable`1[DateTime]) */

void Assembly-CSharp.dll::GoogleMobileAds::Api::AdRequest+Builder::AdRequest_Builder_set_Birthday
               (AdRequest_Builder *this,Nullable_1_DateTime_ value,MethodInfo *method)

{
  *(undefined4 *)&(this->fields)._Birthday_k__BackingField.value.ticks._ticks = in_stack_1;
  *(undefined4 *)((int)&(this->fields)._Birthday_k__BackingField.value.ticks._ticks + 4) =
       (undefined4)value.value.ticks._ticks;
  (this->fields)._Birthday_k__BackingField.value.kind = value.value.ticks._ticks._4_4_;
  *(int32_t *)&(this->fields)._Birthday_k__BackingField.value.field_0xc = value.value.kind;
  (this->fields)._Birthday_k__BackingField.has_value = value.value._12_1_;
  *(undefined3 *)&(this->fields)._Birthday_k__BackingField.field_0x11 = value.value._13_3_;
  (this->fields)._Birthday_k__BackingField.field_0x14 = value.has_value;
  *(undefined3 *)&(this->fields)._Birthday_k__BackingField.field_0x15 = value._17_3_;
  return;
}


/* Void set_ChildDirectedTreatmentTag(Nullable`1[Boolean]) */

void Assembly-CSharp.dll::GoogleMobileAds::Api::AdRequest+Builder::
     AdRequest_Builder_set_ChildDirectedTreatmentTag
               (AdRequest_Builder *this,Nullable_1_Boolean_ value,MethodInfo *method)

{
  (this->fields)._ChildDirectedTreatmentTag_k__BackingField = value;
  return;
}

