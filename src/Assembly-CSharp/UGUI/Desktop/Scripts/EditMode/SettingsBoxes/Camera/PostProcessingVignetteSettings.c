
/* PostProcessingVignetteSettings(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Camera::
     PostProcessingVignetteSettings::PostProcessingVignetteSettings__ctor
               (PostProcessingVignetteSettings *this,Dictionary_2_System_Object_System_Object_ *data
               ,MethodInfo *method)

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
    func_?(&StringLiteral_ppVignColR);
    func_?(&StringLiteral_ppVignColG);
    func_?(&StringLiteral_ppVignSmooth);
    func_?(&StringLiteral_ppVignOn);
    func_?(&StringLiteral_ppVignInty);
    func_?(&StringLiteral_ppVignColB);
    func_?(&StringLiteral_ppVignRness);
    func_?(&StringLiteral_ppVignRnded);
    cRam_? = '\x01';
  }
  pOStack_1 = (Object *)0x0;
  pOStack_2 = (Object *)0x0;
  if (data != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__TryGetValue
                      (data,(Object *)StringLiteral_ppVignOn,&pOStack_1,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                      );
    if (bVar3 == 0) {
      cVar4 = '\0';
    }
    else {
      if (pOStack_1 == (Object *)0x0) goto code_?;
      pOVar5 = pOStack_1;
      pBVar6 = TypeInfo__System__Boolean;
      if ((pOStack_1->klass->_0).element_class != (TypeInfo__System__Boolean->_0).element_class)
      goto code_?;
      pcVar7 = (char *)func_?(pOStack_1);
      cVar4 = *pcVar7;
    }
    this->vignette = cVar4 != '\0';
    if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
      func_?(TypeInfo__Extensions);
    }
    iVar8 = Extensions::Extensions_GetValueOrDefault_1
                      (data,StringLiteral_ppVignInty,0,
                       int_MethodInfo__Extensions__GetValueOrDefault<int>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__int_
                      );
    this->intensity = iVar8;
    iVar8 = Extensions::Extensions_GetValueOrDefault_1
                      (data,StringLiteral_ppVignSmooth,2,
                       int_MethodInfo__Extensions__GetValueOrDefault<int>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__int_
                      );
    this->smoothness = iVar8;
    iVar8 = Extensions::Extensions_GetValueOrDefault_1
                      (data,StringLiteral_ppVignRness,100,
                       int_MethodInfo__Extensions__GetValueOrDefault<int>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__int_
                      );
    this->roundness = iVar8;
    fVar9 = Extensions::Extensions_GetValueOrDefault_4
                      (data,StringLiteral_ppVignColR,0.0,
                       float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                      );
    fVar10 = Extensions::Extensions_GetValueOrDefault_4
                      (data,StringLiteral_ppVignColG,0.0,
                       float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                      );
    fVar11 = Extensions::Extensions_GetValueOrDefault_4
                       (data,StringLiteral_ppVignColB,0.0,
                        float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                       );
    (this->color).r = fVar9;
    (this->color).g = fVar10;
    (this->color).b = fVar11;
    (this->color).a = 1.0;
    bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__TryGetValue
                      (data,(Object *)StringLiteral_ppVignRnded,&pOStack_2,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                      );
    if (bVar3 == 0) {
      this->rounded = 0;
      return;
    }
    if (pOStack_2 != (Object *)0x0) {
      pOVar5 = pOStack_2;
      pBVar6 = TypeInfo__System__Boolean;
      if ((pOStack_2->klass->_0).element_class == (TypeInfo__System__Boolean->_0).element_class) {
        pcVar7 = (char *)func_?(pOStack_2);
        this->rounded = *pcVar7 != '\0';
        return;
      }
      goto code_?;
    }
  }
code_?:
  func_?();
  pOVar5 = extraout_ECX;
  pBVar6 = extraout_EDX;
code_?:
  func_?(pOVar5,pBVar6);
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}

