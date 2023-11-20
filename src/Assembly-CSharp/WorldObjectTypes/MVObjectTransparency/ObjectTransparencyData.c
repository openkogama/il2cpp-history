
/* ObjectTransparencyData() */

void Assembly-CSharp.dll::WorldObjectTypes::MVObjectTransparency::ObjectTransparencyData::
     ObjectTransparencyData__cctor(MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
                   );
    func_?(&
                    TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                   );
    func_?(&TypeInfo__WorldObjectTypes__MVObjectTransparency__ObjectTransparencyData__Keys)
    ;
    func_?(&TypeInfo__WorldObjectTypes__MVObjectTransparency__ObjectTransparencyData);
    func_?(&TypeInfo__System__Single);
    cRam_? = '\x01';
  }
  this = (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_ *)
         func_?(
                        TypeInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>
                        );
  mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,UnityEngine::UIElements::
  StyleComplexSelector+PseudoStateData]::
  Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData___ctor
            (this,
             MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Dictionary__
            );
  if ((TypeInfo__WorldObjectTypes__MVObjectTransparency__ObjectTransparencyData__Keys->_1).
      cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__WorldObjectTypes__MVObjectTransparency__ObjectTransparencyData__Keys);
  }
  pSVar1 = TypeInfo__WorldObjectTypes__MVObjectTransparency__ObjectTransparencyData__Keys->
           static_fields->ShowOutline;
  uStack_2 = 1;
  pOVar3 = (Object *)func_?(TypeInfo__System__Boolean,&uStack_2);
  if (this != (Dictionary_2_System_Object_UnityEngine_UIElements_StyleComplexSelector_PseudoStateData_
               *)0x0) {
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)this,(Object *)pSVar1,pOVar3,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    pSVar1 = TypeInfo__WorldObjectTypes__MVObjectTransparency__ObjectTransparencyData__Keys->
             static_fields->Alpha;
    uStack_4 = 0x3f666666;
    pOVar3 = (Object *)func_?(TypeInfo__System__Single,&uStack_4);
    mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
    Dictionary_2_System_Object_System_Object__Add
              ((Dictionary_2_System_Object_System_Object_ *)this,(Object *)pSVar1,pOVar3,
               MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__Add_System__Object__System__Object_
              );
    TypeInfo__WorldObjectTypes__MVObjectTransparency__ObjectTransparencyData->static_fields->
    DefaultValues = (Dictionary_2_System_Object_System_Object_ *)this;
    func_?(TypeInfo__WorldObjectTypes__MVObjectTransparency__ObjectTransparencyData->
                    static_fields,this);
    return;
  }
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

