
/* PostProcessingLensDistortionSettings(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Camera::
     PostProcessingLensDistortionSettings::PostProcessingLensDistortionSettings__ctor
               (PostProcessingLensDistortionSettings *this,
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
    FUN_?(&StringLiteral_ppLensDistInt);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ppLensDistOn);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ppLensDistYmult);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ppLensDistXmult);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  cVar1 = '\0';
  pOStackX_10 = (Object *)0x0;
  if (data != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__TryGetValue
                      (data,(Object *)StringLiteral_ppLensDistOn,&pOStackX_10,
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
    this->lensDistortion = cVar1 != '\0';
    if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
      FUN_?();
    }
    IVar4 = Extensions::Extensions_GetValueOrDefault_2
                      (data,StringLiteral_ppLensDistInt,0,
                       int_MethodInfo__Extensions__GetValueOrDefault<int>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__int_
                      );
    this->intensity = IVar4;
    IVar4 = Extensions::Extensions_GetValueOrDefault_2
                      (data,StringLiteral_ppLensDistXmult,100,
                       int_MethodInfo__Extensions__GetValueOrDefault<int>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__int_
                      );
    this->xMultiplier = IVar4;
    IVar4 = Extensions::Extensions_GetValueOrDefault_2
                      (data,StringLiteral_ppLensDistYmult,100,
                       int_MethodInfo__Extensions__GetValueOrDefault<int>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__int_
                      );
    this->yMultiplier = IVar4;
    return;
  }
code_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

