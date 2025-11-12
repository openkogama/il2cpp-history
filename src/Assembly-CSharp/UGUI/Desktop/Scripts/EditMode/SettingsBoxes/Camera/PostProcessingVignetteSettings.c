
/* PostProcessingVignetteSettings(Dictionary`2[System.Object,System.Object]) */

void Assembly-CSharp.dll::UGUI::Desktop::Scripts::EditMode::SettingsBoxes::Camera::
     PostProcessingVignetteSettings::PostProcessingVignetteSettings__ctor
               (PostProcessingVignetteSettings *this,Dictionary_2_System_Object_System_Object_ *data
               ,MethodInfo *method)

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
    FUN_?(&StringLiteral_ppVignColR);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ppVignColG);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ppVignSmooth);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ppVignOn);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ppVignInty);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ppVignColB);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ppVignRness);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral_ppVignRnded);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  cVar1 = '\0';
  pOStackX_10 = (Object *)0x0;
  pOStackX_20 = (Object *)0x0;
  if (data == (Dictionary_2_System_Object_System_Object_ *)0x0) {
code_?:
    FUN_?();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__TryGetValue
                    (data,(Object *)StringLiteral_ppVignOn,&pOStackX_10,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                    );
  cVar4 = '\0';
  if (bVar3 != 0) {
    if (pOStackX_10 == (Object *)0x0) goto code_?;
    if ((pOStackX_10->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
      FUN_?(pOStackX_10);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    cVar4 = *(char *)&pOStackX_10[1].klass;
  }
  this->vignette = cVar4 != '\0';
  if (*(int *)&(TypeInfo__Extensions->_1).field_0x1c == 0) {
    FUN_?();
  }
  IVar5 = Extensions::Extensions_GetValueOrDefault_2
                    (data,StringLiteral_ppVignInty,0,
                     int_MethodInfo__Extensions__GetValueOrDefault<int>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__int_
                    );
  this->intensity = IVar5;
  IVar5 = Extensions::Extensions_GetValueOrDefault_2
                    (data,StringLiteral_ppVignSmooth,2,
                     int_MethodInfo__Extensions__GetValueOrDefault<int>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__int_
                    );
  this->smoothness = IVar5;
  IVar5 = Extensions::Extensions_GetValueOrDefault_2
                    (data,StringLiteral_ppVignRness,100,
                     int_MethodInfo__Extensions__GetValueOrDefault<int>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__int_
                    );
  this->roundness = IVar5;
  fVar6 = Extensions::Extensions_GetValueOrDefault_4
                    (data,StringLiteral_ppVignColR,0.0,
                     float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                    );
  fVar7 = Extensions::Extensions_GetValueOrDefault_4
                    (data,StringLiteral_ppVignColG,0.0,
                     float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                    );
  fVar8 = Extensions::Extensions_GetValueOrDefault_4
                    (data,StringLiteral_ppVignColB,0.0,
                     float_MethodInfo__Extensions__GetValueOrDefault<float>_System__Collections__Generic__Dictionary<System::Object,_System::Object>__System__String__float_
                    );
  (this->color).r = fVar6;
  (this->color).g = fVar7;
  (this->color).b = fVar8;
  (this->color).a = 1.0;
  bVar3 = mscorlib.dll::System::Collections::Generic::Dictionary`2[System::Object,System::Object]::
          Dictionary_2_System_Object_System_Object__TryGetValue
                    (data,(Object *)StringLiteral_ppVignRnded,&pOStackX_20,
                     MethodInfo__System__Collections__Generic__Dictionary<System::Object,_System::Object>__TryGetValue_System__Object__System__Object__
                    );
  if (bVar3 != 0) {
    if (pOStackX_20 == (Object *)0x0) goto code_?;
    if ((pOStackX_20->klass->_0).element_class != *(Il2CppClass **)(lRam_? + 0x40)) {
      FUN_?(pOStackX_20);
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    cVar1 = *(char *)&pOStackX_20[1].klass;
  }
  this->rounded = cVar1 != '\0';
  return;
}

