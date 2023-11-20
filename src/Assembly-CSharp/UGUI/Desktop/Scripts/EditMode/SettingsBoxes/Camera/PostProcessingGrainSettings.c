
/* PostProcessingGrainSettings(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Camera::
     PostProcessingGrainSettings::PostProcessingGrainSettings__ctor
               (PostProcessingGrainSettings *this,Dictionary_2_System_Object_System_Object_ *data,
               MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Boolean);
    func_?(&
                    MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                   );
    func_?(&
                    int_MethodInfo__Extensions__GetValueOrDefault<int>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__int_
                   );
    func_?(&TypeInfo__Extensions);
    func_?(&StringLiteral_ppGrainLumCon);
    func_?(&StringLiteral_ppGrainOn);
    func_?(&StringLiteral_ppGrainInt);
    func_?(&StringLiteral_ppGrainSize);
    cRam_? = '\x01';
  }
  pOVar1 = (Object *)0x0;
  if (data != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__TryGetValue
                      (data,(Object *)StringLiteral_ppGrainOn,(Object **)&stack0xfffffff8,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                      );
    if (bVar2 == 0) {
      cVar3 = '\0';
code_?:
      this->grain = cVar3 != '\0';
      if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      IVar4 = Extensions::Extensions_GetValueOrDefault_2
                        (data,StringLiteral_ppGrainInt,0,
                         int_MethodInfo__Extensions__GetValueOrDefault<int>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__int_
                        );
      this->intensity = IVar4;
      IVar4 = Extensions::Extensions_GetValueOrDefault_2
                        (data,StringLiteral_ppGrainSize,10,
                         int_MethodInfo__Extensions__GetValueOrDefault<int>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__int_
                        );
      this->size = IVar4;
      IVar4 = Extensions::Extensions_GetValueOrDefault_2
                        (data,StringLiteral_ppGrainLumCon,8,
                         int_MethodInfo__Extensions__GetValueOrDefault<int>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__int_
                        );
      this->luminanceContribution = IVar4;
      return;
    }
    if (pOVar1 != (Object *)0x0) {
      if ((pOVar1->klass->_0).element_class == (TypeInfo__System__Boolean->_0).element_class) {
        pcVar5 = (char *)func_?();
        cVar3 = *pcVar5;
        goto code_?;
      }
      goto code_?;
    }
  }
  func_?();
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}

