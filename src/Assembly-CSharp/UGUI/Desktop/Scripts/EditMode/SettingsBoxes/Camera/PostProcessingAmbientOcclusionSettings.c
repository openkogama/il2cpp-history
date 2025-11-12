
/* PostProcessingAmbientOcclusionSettings(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Camera::
     PostProcessingAmbientOcclusionSettings::PostProcessingAmbientOcclusionSettings__ctor
               (PostProcessingAmbientOcclusionSettings *this,
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
    FUN_?(&
                  float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                 );
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__Extensions);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ppAOOn);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ppAOThick);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ppAOInty);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ppAOColR);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ppAOColB);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ppAOColG);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  cVar1 = '\0';
  pOStackX_10 = (Object *)0x0;
  if (data != (Dictionary_2_System_Object_System_Object_ *)0x0) {
    bVar2 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]
            ::Dictionary_2_System_Object_System_Object__TryGetValue
                      (data,(Object *)StringLiteral_ppAOOn,&pOStackX_10,
                       MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                      );
    if (bVar2 != 0) {
      if (pOStackX_10 == (Object *)0x0) goto DAT_?;
      if ((pOStackX_10->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40))
      {
        FUN_?(pOStackX_10);
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      cVar1 = *(char *)&pOStackX_10[1].klass;
    }
    this->ambientOcclusion = cVar1 != '\0';
    if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
      FUN_?();
    }
    IVar4 = Extensions::Extensions_GetValueOrDefault_2
                      (data,StringLiteral_ppAOInty,0,
                       int_MethodInfo__Extensions__GetValueOrDefault<int>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__int_
                      );
    this->intensity = IVar4;
    IVar4 = Extensions::Extensions_GetValueOrDefault_2
                      (data,StringLiteral_ppAOThick,1,
                       int_MethodInfo__Extensions__GetValueOrDefault<int>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__int_
                      );
    this->thickness = IVar4;
    fVar5 = Extensions::Extensions_GetValueOrDefault_4
                      (data,StringLiteral_ppAOColR,0.0,
                       float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                      );
    fVar6 = Extensions::Extensions_GetValueOrDefault_4
                      (data,StringLiteral_ppAOColG,0.0,
                       float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                      );
    fVar7 = Extensions::Extensions_GetValueOrDefault_4
                      (data,StringLiteral_ppAOColB,0.0,
                       float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                      );
    (this->color).r = fVar5;
    (this->color).g = fVar6;
    (this->color).b = fVar7;
    (this->color).a = 1.0;
    return;
  }
DAT_?:
  FUN_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}

