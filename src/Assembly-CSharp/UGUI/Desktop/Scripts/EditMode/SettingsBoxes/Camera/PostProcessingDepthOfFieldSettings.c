
/* PostProcessingDepthOfFieldSettings(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Camera::
     PostProcessingDepthOfFieldSettings::PostProcessingDepthOfFieldSettings__ctor
               (PostProcessingDepthOfFieldSettings *this,
               Dictionary_2_System_Object_System_Object_ *data,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&
                  MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                 );
    LOCK();
    UNLOCK();
    FUN_?(&
                  int_MethodInfo__Extensions__GetValueOrDefault<int>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__int_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Extensions);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ppDofMBlur);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ppDofOn);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ppDofApert);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ppDofFLen);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ppDofPFDist);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  cVar1 = '\0';
  pOStackX_10 = (Object *)0x0;
  if (data != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__TryGetValue
                      (data,(Object *)StringLiteral_ppDofOn,&pOStackX_10,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                      );
    if (bVar2 != 0) {
      if (pOStackX_10 == (Object *)0x0) goto code_?;
      if ((pOStackX_10->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40))
      {
        FUN_?(pOStackX_10);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      cVar1 = *(char *)&pOStackX_10[1].klass;
    }
    this->depthOfField = cVar1 != '\0';
    if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
      FUN_?();
    }
    IVar4 = Extensions::Extensions_GetValueOrDefault_2
                      (data,StringLiteral_ppDofPFDist,10,
                       int_MethodInfo__Extensions__GetValueOrDefault<int>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__int_
                      );
    this->focusDistance = IVar4;
    IVar4 = Extensions::Extensions_GetValueOrDefault_2
                      (data,StringLiteral_ppDofApert,0x38,
                       int_MethodInfo__Extensions__GetValueOrDefault<int>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__int_
                      );
    this->aperture = IVar4;
    IVar4 = Extensions::Extensions_GetValueOrDefault_2
                      (data,StringLiteral_ppDofFLen,0x32,
                       int_MethodInfo__Extensions__GetValueOrDefault<int>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__int_
                      );
    this->focalLength = IVar4;
    IVar4 = Extensions::Extensions_GetValueOrDefault_2
                      (data,StringLiteral_ppDofMBlur,2,
                       int_MethodInfo__Extensions__GetValueOrDefault<int>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__int_
                      );
    this->maxBlurSize = IVar4;
    return;
  }
code_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

