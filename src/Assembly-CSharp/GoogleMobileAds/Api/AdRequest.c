
/* AdRequest(AdRequest+Builder) */

void Assembly-CSharp.dll::GoogleMobileAds::Api::AdRequest::AdRequest__ctor
               (AdRequest *this,AdRequest_Builder *builder,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_EDI);
  if (builder != (AdRequest_Builder *)0x0) {
    collection = (builder->fields)._TestDevices_k__BackingField;
    this_00 = (List_1_VoxelHit_ *)
              func_?(TypeInfo__System__Collections__Generic__List<System::String>);
    mscorlib.dll::System::Collections::Generic::List`1[VoxelHit]::List_1_VoxelHit___ctor_1
              (this_00,(IEnumerable_1_VoxelHit_ *)collection,
               MethodInfo__System__Collections__Generic__List<System::String>__List_System__Collections__Generic__IEnumerable<System::String>_
              );
    (this->fields)._TestDevices_k__BackingField = (List_1_System_String_ *)this_00;
    capacity = (builder->fields)._Keywords_k__BackingField;
    this_01 = (HashSet_1_System_String_ *)
              func_?(TypeInfo__System__Collections__Generic__HashSet<System::String>);
    System.dll::System::Collections::Generic::SortedList`2[System::Single,System::Object]::
    SortedList_2_System_Single_System_Object___ctor_1
              ((SortedList_2_System_Single_System_Object_ *)this_01,(int32_t)capacity,
               MethodInfo__System__Collections__Generic__HashSet<System::String>__HashSet_System__Collections__Generic__IEnumerable<System::String>_
              );
    (this->fields)._Keywords_k__BackingField = this_01;
    uVar1 = *(undefined4 *)
             ((int)&(builder->fields)._Birthday_k__BackingField.value.ticks._ticks + 4);
    iVar2 = (builder->fields)._Birthday_k__BackingField.value.kind;
    uVar3 = *(undefined4 *)&(builder->fields)._Birthday_k__BackingField.value.field_0xc;
    bVar4 = (builder->fields)._Birthday_k__BackingField.has_value;
    uVar5 = *(undefined7 *)&(builder->fields)._Birthday_k__BackingField.field_0x11;
    *(int *)&(this->fields)._Birthday_k__BackingField.value.ticks._ticks =
         (int)(builder->fields)._Birthday_k__BackingField.value.ticks._ticks;
    *(undefined4 *)((int)&(this->fields)._Birthday_k__BackingField.value.ticks._ticks + 4) = uVar1;
    (this->fields)._Birthday_k__BackingField.value.kind = iVar2;
    *(undefined4 *)&(this->fields)._Birthday_k__BackingField.value.field_0xc = uVar3;
    (this->fields)._Birthday_k__BackingField.has_value = bVar4;
    *(undefined7 *)&(this->fields)._Birthday_k__BackingField.field_0x11 = uVar5;
    bVar4 = (builder->fields)._Gender_k__BackingField.has_value;
    uVar6 = *(undefined3 *)&(builder->fields)._Gender_k__BackingField.field_0x5;
    (this->fields)._Gender_k__BackingField.value = (builder->fields)._Gender_k__BackingField.value;
    (this->fields)._Gender_k__BackingField.has_value = bVar4;
    *(undefined3 *)&(this->fields)._Gender_k__BackingField.field_0x5 = uVar6;
    (this->fields)._TagForChildDirectedTreatment_k__BackingField =
         (builder->fields)._ChildDirectedTreatmentTag_k__BackingField;
    capacity_00 = (builder->fields)._Extras_k__BackingField;
    this_02 = (Dictionary_2_System_String_System_String_ *)
              func_?(
                             TypeInfo__System__Collections__Generic__Dictionary<System::String,_System::String>
                             );
    System.dll::System::Collections::Generic::SortedList`2[System::Single,System::Object]::
    SortedList_2_System_Single_System_Object___ctor_1
              ((SortedList_2_System_Single_System_Object_ *)this_02,(int32_t)capacity_00,
               MethodInfo__System__Collections__Generic__Dictionary<System::String,_System::String>__Dictionary_System__Collections__Generic__IDictionary<System::String,_System::String>_
              );
    (this->fields)._Extras_k__BackingField = this_02;
    (this->fields)._MediationExtras_k__BackingField =
         (builder->fields)._MediationExtras_k__BackingField;
    return;
  }
  func_?(0);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}

