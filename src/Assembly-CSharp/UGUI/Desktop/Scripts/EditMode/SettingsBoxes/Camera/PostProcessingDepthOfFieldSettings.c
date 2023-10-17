
/* KernelSize KernelSize() */

KernelSize__Enum
Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Camera::
PostProcessingDepthOfFieldSettings::PostProcessingDepthOfFieldSettings_KernelSize
          (PostProcessingDepthOfFieldSettings *this,MethodInfo *method)

{
  switch(this->maxBlurSize) {
  case 1:
    return KernelSize__Enum_Small;
  default:
    return KernelSize__Enum_Medium;
  case 3:
    return KernelSize__Enum_Large;
  case 4:
    return KernelSize__Enum_VeryLarge;
  }
}


/* PostProcessingDepthOfFieldSettings(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Camera::
     PostProcessingDepthOfFieldSettings::PostProcessingDepthOfFieldSettings__ctor
               (PostProcessingDepthOfFieldSettings *this,
               Dictionary_2_System_Object_System_Object_ *data,MethodInfo *method)

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
    func_?(&StringLiteral_ppDofMBlur);
    func_?(&StringLiteral_ppDofOn);
    func_?(&StringLiteral_ppDofApert);
    func_?(&StringLiteral_ppDofFLen);
    func_?(&StringLiteral_ppDofPFDist);
    cRam_? = '\x01';
  }
  pOVar1 = (Object *)0x0;
  if (data != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__TryGetValue
                      (data,(Object *)StringLiteral_ppDofOn,(Object **)&stack0xfffffff8,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                      );
    if (bVar2 == 0) {
      cVar3 = '\0';
code_?:
      this->depthOfField = cVar3 != '\0';
      if ((TypeInfo__Extensions->_1).cctor_finished_or_no_cctor == 0) {
        func_?();
      }
      iVar4 = Extensions::Extensions_GetValueOrDefault_1
                        (data,StringLiteral_ppDofPFDist,10,
                         int_MethodInfo__Extensions__GetValueOrDefault<int>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__int_
                        );
      this->focusDistance = iVar4;
      iVar4 = Extensions::Extensions_GetValueOrDefault_1
                        (data,StringLiteral_ppDofApert,0x38,
                         int_MethodInfo__Extensions__GetValueOrDefault<int>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__int_
                        );
      this->aperture = iVar4;
      iVar4 = Extensions::Extensions_GetValueOrDefault_1
                        (data,StringLiteral_ppDofFLen,0x32,
                         int_MethodInfo__Extensions__GetValueOrDefault<int>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__int_
                        );
      this->focalLength = iVar4;
      iVar4 = Extensions::Extensions_GetValueOrDefault_1
                        (data,StringLiteral_ppDofMBlur,2,
                         int_MethodInfo__Extensions__GetValueOrDefault<int>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__int_
                        );
      this->maxBlurSize = iVar4;
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

