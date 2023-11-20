
/* PostProcessingBloomSettings(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Camera::
     PostProcessingBloomSettings::PostProcessingBloomSettings__ctor
               (PostProcessingBloomSettings *this,Dictionary_2_System_Object_System_Object_ *data,
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
    func_?(&
                    float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                   );
    func_?(&TypeInfo__Extensions);
    func_?(&StringLiteral_ppBloomDiff);
    func_?(&StringLiteral_ppBloomColB);
    func_?(&StringLiteral_ppBloomColG);
    func_?(&StringLiteral_ppBloomColR);
    func_?(&StringLiteral_ppBloomSKnee);
    func_?(&StringLiteral_ppBloomOn);
    func_?(&StringLiteral_ppBloomInty);
    cRam_? = '\x01';
  }
  pOStack_1 = (Object *)0x0;
  if (data != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__TryGetValue
                      (data,(Object *)StringLiteral_ppBloomOn,&pOStack_1,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                      );
    if (bVar2 == 0) {
      cVar3 = '\0';
code_?:
      this->bloom = cVar3 != '\0';
      if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__Extensions);
      }
      IVar4 = Extensions::Extensions_GetValueOrDefault_2
                        (data,StringLiteral_ppBloomInty,0,
                         int_MethodInfo__Extensions__GetValueOrDefault<int>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__int_
                        );
      this->intensity = IVar4;
      IVar4 = Extensions::Extensions_GetValueOrDefault_2
                        (data,StringLiteral_ppBloomSKnee,5,
                         int_MethodInfo__Extensions__GetValueOrDefault<int>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__int_
                        );
      this->softKnee = IVar4;
      IVar4 = Extensions::Extensions_GetValueOrDefault_2
                        (data,StringLiteral_ppBloomDiff,7,
                         int_MethodInfo__Extensions__GetValueOrDefault<int>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__int_
                        );
      this->diffusion = IVar4;
      fVar5 = Extensions::Extensions_GetValueOrDefault_4
                        (data,StringLiteral_ppBloomColR,1.0,
                         float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                        );
      fVar6 = Extensions::Extensions_GetValueOrDefault_4
                        (data,StringLiteral_ppBloomColG,1.0,
                         float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                        );
      fVar7 = Extensions::Extensions_GetValueOrDefault_4
                         (data,StringLiteral_ppBloomColB,1.0,
                          float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                         );
      (this->color).r = fVar5;
      (this->color).g = fVar6;
      (this->color).b = fVar7;
      (this->color).a = 1.0;
      return;
    }
    if (pOStack_1 != (Object *)0x0) {
      pOVar8 = pOStack_1;
      pBVar9 = TypeInfo__System__Boolean;
      if ((pOStack_1->klass->_0).element_class == (TypeInfo__System__Boolean->_0).element_class) {
        pcVar10 = (char *)func_?(pOStack_1);
        cVar3 = *pcVar10;
        goto code_?;
      }
      goto code_?;
    }
  }
  func_?();
  pOVar8 = extraout_ECX;
  pBVar9 = extraout_EDX;
code_?:
  func_?(pOVar8,pBVar9);
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}

