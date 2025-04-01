
/* Void InitializeAttributes() */

void Assembly-CSharp.dll::CloudyThemeBase::CloudyThemeBase_InitializeAttributes
               (CloudyThemeBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__System__Action<bool>);
    func_?(&TypeInfo__System__Action<float>);
    func_?(&TypeInfo__System__Action<UnityEngine::Color>);
    func_?(&TypeInfo__System__Action<int>);
    func_?(&MethodInfo__CloudyThemeBase__ToggleDayNightCycleUseServerTime_bool_);
    func_?(&MethodInfo__CloudyThemeBase__ToggleDayNightCycle_bool_);
    func_?(&MethodInfo__CloudyThemeBase__ToggleFog_bool_);
    func_?(&MethodInfo__CloudyThemeBase___InitializeAttributes_b__44_0_int_);
    func_?(&MethodInfo__CloudyThemeBase___InitializeAttributes_b__44_10_float_);
    func_?(&MethodInfo__CloudyThemeBase___InitializeAttributes_b__44_11_float_);
    func_?(&MethodInfo__CloudyThemeBase___InitializeAttributes_b__44_12_float_);
    func_?(&MethodInfo__CloudyThemeBase___InitializeAttributes_b__44_13_float_);
    func_?(&MethodInfo__CloudyThemeBase___InitializeAttributes_b__44_14_float_);
    func_?(&MethodInfo__CloudyThemeBase___InitializeAttributes_b__44_15_float_);
    func_?(&MethodInfo__CloudyThemeBase___InitializeAttributes_b__44_16_float_);
    func_?(&MethodInfo__CloudyThemeBase___InitializeAttributes_b__44_17_UnityEngine__Color_
                   );
    func_?(&MethodInfo__CloudyThemeBase___InitializeAttributes_b__44_18_float_);
    func_?(&MethodInfo__CloudyThemeBase___InitializeAttributes_b__44_19_float_);
    func_?(&MethodInfo__CloudyThemeBase___InitializeAttributes_b__44_1_float_);
    func_?(&MethodInfo__CloudyThemeBase___InitializeAttributes_b__44_20_float_);
    func_?(&MethodInfo__CloudyThemeBase___InitializeAttributes_b__44_21_float_);
    func_?(&MethodInfo__CloudyThemeBase___InitializeAttributes_b__44_22_float_);
    func_?(&MethodInfo__CloudyThemeBase___InitializeAttributes_b__44_23_float_);
    func_?(&MethodInfo__CloudyThemeBase___InitializeAttributes_b__44_24_float_);
    func_?(&MethodInfo__CloudyThemeBase___InitializeAttributes_b__44_25_float_);
    func_?(&MethodInfo__CloudyThemeBase___InitializeAttributes_b__44_26_float_);
    func_?(&MethodInfo__CloudyThemeBase___InitializeAttributes_b__44_27_float_);
    func_?(&MethodInfo__CloudyThemeBase___InitializeAttributes_b__44_28_float_);
    func_?(&MethodInfo__CloudyThemeBase___InitializeAttributes_b__44_29_float_);
    func_?(&MethodInfo__CloudyThemeBase___InitializeAttributes_b__44_2_float_);
    func_?(&MethodInfo__CloudyThemeBase___InitializeAttributes_b__44_30_float_);
    func_?(&MethodInfo__CloudyThemeBase___InitializeAttributes_b__44_3_UnityEngine__Color_)
    ;
    func_?(&MethodInfo__CloudyThemeBase___InitializeAttributes_b__44_4_UnityEngine__Color_)
    ;
    func_?(&MethodInfo__CloudyThemeBase___InitializeAttributes_b__44_5_UnityEngine__Color_)
    ;
    func_?(&MethodInfo__CloudyThemeBase___InitializeAttributes_b__44_6_float_);
    func_?(&MethodInfo__CloudyThemeBase___InitializeAttributes_b__44_7_float_);
    func_?(&MethodInfo__CloudyThemeBase___InitializeAttributes_b__44_8_UnityEngine__Color_)
    ;
    func_?(&MethodInfo__CloudyThemeBase___InitializeAttributes_b__44_9_float_);
    func_?(&StringLiteral_starsTwinklingSpeed);
    func_?(&StringLiteral_sunFlareBrightness);
    func_?(&StringLiteral_sunLightIntensity);
    func_?(&StringLiteral_useFog);
    func_?(&StringLiteral_gameStartTime);
    func_?(&StringLiteral_useDayNightCycle);
    func_?(&StringLiteral_sunSize);
    func_?(&StringLiteral_moonTint);
    func_?(&StringLiteral_moonFlareBrightness);
    func_?(&StringLiteral_cloudsHeight);
    func_?(&StringLiteral_sunHeight);
    func_?(&StringLiteral_cloudsOffset);
    func_?(&StringLiteral_exposure);
    func_?(&StringLiteral_sunTint);
    func_?(&StringLiteral_moonAxis);
    func_?(&StringLiteral_moonAltitude);
    func_?(&StringLiteral_colorPresetIndex);
    func_?(&StringLiteral_sunAxis);
    func_?(&StringLiteral_fogDensity);
    func_?(&StringLiteral_moonHeight);
    func_?(&StringLiteral_moonLightIntensity);
    func_?(&StringLiteral_topColor);
    func_?(&StringLiteral_sunAltitude);
    func_?(&StringLiteral_sunLongitude);
    func_?(&StringLiteral_moonLightContrast);
    func_?(&StringLiteral_sunLightContrast);
    func_?(&StringLiteral_useServerTime);
    func_?(&StringLiteral_moonSize);
    func_?(&StringLiteral_bottomColor);
    func_?(&StringLiteral_cycleLength);
    func_?(&StringLiteral_cloudsRotationSpeed);
    func_?(&StringLiteral_starsTint);
    func_?(&StringLiteral_moonLongitude);
    func_?(&StringLiteral_starsExtinction);
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields)._._Settings_k__BackingField;
  pBVar2 = (this->fields).useDayNightCycle;
  pUVar3 = (UnityAction_1_System_Int32Enum_ *)func_?(TypeInfo__System__Action<bool>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
  UnityAction_1_System_Int32Enum___ctor
            (pUVar3,(Object *)this,MethodInfo__CloudyThemeBase__ToggleDayNightCycle_bool_,
             (MethodInfo *)0x0);
  if (pBVar2 != (BoolAttribute *)0x0) {
    (*(code *)(pBVar2->klass->vtable).Initialize_1.method)
              (pBVar2,pSVar1,StringLiteral_useDayNightCycle,0,pUVar3,
               (pBVar2->klass->vtable).OnSettingsChanged.methodPtr);
    pSVar1 = (this->fields)._._Settings_k__BackingField;
    pBVar2 = (this->fields).useServerTime;
    pUVar3 = (UnityAction_1_System_Int32Enum_ *)func_?(TypeInfo__System__Action<bool>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
    UnityAction_1_System_Int32Enum___ctor
              (pUVar3,(Object *)this,
               MethodInfo__CloudyThemeBase__ToggleDayNightCycleUseServerTime_bool_,(MethodInfo *)0x0
              );
    if (pBVar2 != (BoolAttribute *)0x0) {
      (*(code *)(pBVar2->klass->vtable).Initialize_1.method)
                (pBVar2,pSVar1,StringLiteral_useServerTime,1,pUVar3,
                 (pBVar2->klass->vtable).OnSettingsChanged.methodPtr);
      pSVar1 = (this->fields)._._Settings_k__BackingField;
      pIVar4 = (this->fields).colorPreset;
      pUVar3 = (UnityAction_1_System_Int32Enum_ *)func_?(TypeInfo__System__Action<int>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Int32Enum]::
      UnityAction_1_System_Int32Enum___ctor
                (pUVar3,(Object *)this,
                 MethodInfo__CloudyThemeBase___InitializeAttributes_b__44_0_int_,(MethodInfo *)0x0);
      if (pIVar4 != (IntAttribute *)0x0) {
        (*(code *)(pIVar4->klass->vtable).Initialize_1.method)
                  (pIVar4,pSVar1,StringLiteral_colorPresetIndex,1,pUVar3,
                   (pIVar4->klass->vtable).OnSettingsChanged.methodPtr);
        pSVar1 = (this->fields)._._Settings_k__BackingField;
        pFVar5 = (this->fields).gameStartTime;
        pUVar6 = (UnityAction_1_System_Single_ *)func_?(TypeInfo__System__Action<float>);
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Single]::
        UnityAction_1_System_Single___ctor
                  (pUVar6,(Object *)this,
                   MethodInfo__CloudyThemeBase___InitializeAttributes_b__44_1_float_,
                   (MethodInfo *)0x0);
        if (pFVar5 != (FloatAttribute *)0x0) {
          (*(code *)(pFVar5->klass->vtable).Initialize_1.method)
                    (pFVar5,pSVar1,StringLiteral_gameStartTime,9,pUVar6,
                     (pFVar5->klass->vtable).OnSettingsChanged.methodPtr);
          pSVar1 = (this->fields)._._Settings_k__BackingField;
          pFVar5 = (this->fields).cycleLength;
          pUVar6 = (UnityAction_1_System_Single_ *)func_?(TypeInfo__System__Action<float>);
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Single]::
          UnityAction_1_System_Single___ctor
                    (pUVar6,(Object *)this,
                     MethodInfo__CloudyThemeBase___InitializeAttributes_b__44_2_float_,
                     (MethodInfo *)0x0);
          if (pFVar5 != (FloatAttribute *)0x0) {
            (*(code *)(pFVar5->klass->vtable).Initialize_1.method)
                      (pFVar5,pSVar1,StringLiteral_cycleLength,9,pUVar6,
                       (pFVar5->klass->vtable).OnSettingsChanged.methodPtr);
            pSVar1 = (this->fields)._._Settings_k__BackingField;
            pCVar7 = (this->fields).topColor;
            pUVar8 = (UnityAction_1_UnityEngine_Color_ *)
                     func_?(TypeInfo__System__Action<UnityEngine::Color>);
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[UnityEngine::Color]::
            UnityAction_1_UnityEngine_Color___ctor
                      (pUVar8,(Object *)this,
                       MethodInfo__CloudyThemeBase___InitializeAttributes_b__44_3_UnityEngine__Color_
                       ,(MethodInfo *)0x0);
            if (pCVar7 != (ColorAttribute *)0x0) {
              (*(code *)(pCVar7->klass->vtable).Initialize_1.method)
                        (pCVar7,pSVar1,StringLiteral_topColor,2,pUVar8,
                         (pCVar7->klass->vtable).OnSettingsChanged.methodPtr);
              pSVar1 = (this->fields)._._Settings_k__BackingField;
              pCVar7 = (this->fields).bottomColor;
              pUVar8 = (UnityAction_1_UnityEngine_Color_ *)
                       func_?(TypeInfo__System__Action<UnityEngine::Color>);
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[UnityEngine::Color]::
              UnityAction_1_UnityEngine_Color___ctor
                        (pUVar8,(Object *)this,
                         MethodInfo__CloudyThemeBase___InitializeAttributes_b__44_4_UnityEngine__Color_
                         ,(MethodInfo *)0x0);
              if (pCVar7 != (ColorAttribute *)0x0) {
                (*(code *)(pCVar7->klass->vtable).Initialize_1.method)
                          (pCVar7,pSVar1,StringLiteral_bottomColor,2,pUVar8,
                           (pCVar7->klass->vtable).OnSettingsChanged.methodPtr);
                pSVar1 = (this->fields)._._Settings_k__BackingField;
                pCVar7 = (this->fields).starsTint;
                pUVar8 = (UnityAction_1_UnityEngine_Color_ *)
                         func_?(TypeInfo__System__Action<UnityEngine::Color>);
                UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[UnityEngine::Color]::
                UnityAction_1_UnityEngine_Color___ctor
                          (pUVar8,(Object *)this,
                           MethodInfo__CloudyThemeBase___InitializeAttributes_b__44_5_UnityEngine__Color_
                           ,(MethodInfo *)0x0);
                if (pCVar7 != (ColorAttribute *)0x0) {
                  (*(code *)(pCVar7->klass->vtable).Initialize_1.method)
                            (pCVar7,pSVar1,StringLiteral_starsTint,2,pUVar8,
                             (pCVar7->klass->vtable).OnSettingsChanged.methodPtr);
                  pSVar1 = (this->fields)._._Settings_k__BackingField;
                  pFVar5 = (this->fields).starsExtinction;
                  pUVar6 = (UnityAction_1_System_Single_ *)
                           func_?(TypeInfo__System__Action<float>);
                  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Single]::
                  UnityAction_1_System_Single___ctor
                            (pUVar6,(Object *)this,
                             MethodInfo__CloudyThemeBase___InitializeAttributes_b__44_6_float_,
                             (MethodInfo *)0x0);
                  if (pFVar5 != (FloatAttribute *)0x0) {
                    (*(code *)(pFVar5->klass->vtable).Initialize_1.method)
                              (pFVar5,pSVar1,StringLiteral_starsExtinction,0,pUVar6,
                               (pFVar5->klass->vtable).OnSettingsChanged.methodPtr);
                    pSVar1 = (this->fields)._._Settings_k__BackingField;
                    pFVar5 = (this->fields).starsTwinkilingSpeed;
                    pUVar6 = (UnityAction_1_System_Single_ *)
                             func_?(TypeInfo__System__Action<float>);
                    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::Single]::
                    UnityAction_1_System_Single___ctor
                              (pUVar6,(Object *)this,
                               MethodInfo__CloudyThemeBase___InitializeAttributes_b__44_7_float_,
                               (MethodInfo *)0x0);
                    if (pFVar5 != (FloatAttribute *)0x0) {
                      (*(code *)(pFVar5->klass->vtable).Initialize_1.method)
                                (pFVar5,pSVar1,StringLiteral_starsTwinklingSpeed,0,pUVar6,
                                 (pFVar5->klass->vtable).OnSettingsChanged.methodPtr);
                      pSVar1 = (this->fields)._._Settings_k__BackingField;
                      pCVar7 = (this->fields).sunTint;
                      pUVar8 = (UnityAction_1_UnityEngine_Color_ *)
                               func_?(TypeInfo__System__Action<UnityEngine::Color>);
                      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[UnityEngine::
                      Color]::UnityAction_1_UnityEngine_Color___ctor
                                (pUVar8,(Object *)this,
                                 MethodInfo__CloudyThemeBase___InitializeAttributes_b__44_8_UnityEngine__Color_
                                 ,(MethodInfo *)0x0);
                      if (pCVar7 != (ColorAttribute *)0x0) {
                        (*(code *)(pCVar7->klass->vtable).Initialize_1.method)
                                  (pCVar7,pSVar1,StringLiteral_sunTint,2,pUVar8,
                                   (pCVar7->klass->vtable).OnSettingsChanged.methodPtr);
                        pSVar1 = (this->fields)._._Settings_k__BackingField;
                        pFVar5 = (this->fields).sunSize;
                        pUVar6 = (UnityAction_1_System_Single_ *)
                                 func_?(TypeInfo__System__Action<float>);
                        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::
                        Single]::UnityAction_1_System_Single___ctor
                                  (pUVar6,(Object *)this,
                                   MethodInfo__CloudyThemeBase___InitializeAttributes_b__44_9_float_
                                   ,(MethodInfo *)0x0);
                        if (pFVar5 != (FloatAttribute *)0x0) {
                          (*(code *)(pFVar5->klass->vtable).Initialize_1.method)
                                    (pFVar5,pSVar1,StringLiteral_sunSize,0,pUVar6,
                                     (pFVar5->klass->vtable).OnSettingsChanged.methodPtr);
                          pSVar1 = (this->fields)._._Settings_k__BackingField;
                          pFVar5 = (this->fields).sunHeight;
                          pUVar6 = (UnityAction_1_System_Single_ *)
                                   func_?(TypeInfo__System__Action<float>);
                          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::
                          Single]::UnityAction_1_System_Single___ctor
                                    (pUVar6,(Object *)this,
                                     MethodInfo__CloudyThemeBase___InitializeAttributes_b__44_10_float_
                                     ,(MethodInfo *)0x0);
                          if (pFVar5 != (FloatAttribute *)0x0) {
                            (*(code *)(pFVar5->klass->vtable).Initialize_1.method)
                                      (pFVar5,pSVar1,StringLiteral_sunHeight,2,pUVar6,
                                       (pFVar5->klass->vtable).OnSettingsChanged.methodPtr);
                            pSVar1 = (this->fields)._._Settings_k__BackingField;
                            pFVar5 = (this->fields).sunAxis;
                            pUVar6 = (UnityAction_1_System_Single_ *)
                                     func_?(TypeInfo__System__Action<float>);
                            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System::
                            Single]::UnityAction_1_System_Single___ctor
                                      (pUVar6,(Object *)this,
                                       MethodInfo__CloudyThemeBase___InitializeAttributes_b__44_11_float_
                                       ,(MethodInfo *)0x0);
                            if (pFVar5 != (FloatAttribute *)0x0) {
                              (*(code *)(pFVar5->klass->vtable).Initialize_1.method)
                                        (pFVar5,pSVar1,StringLiteral_sunAxis,2,pUVar6,
                                         (pFVar5->klass->vtable).OnSettingsChanged.methodPtr);
                              pSVar1 = (this->fields)._._Settings_k__BackingField;
                              pFVar5 = (this->fields).sunAltitude;
                              pUVar6 = (UnityAction_1_System_Single_ *)
                                       func_?(TypeInfo__System__Action<float>);
                              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`1[System
                              ::Single]::UnityAction_1_System_Single___ctor
                                        (pUVar6,(Object *)this,
                                         MethodInfo__CloudyThemeBase___InitializeAttributes_b__44_12_float_
                                         ,(MethodInfo *)0x0);
                              if (pFVar5 != (FloatAttribute *)0x0) {
                                (*(code *)(pFVar5->klass->vtable).Initialize_1.method)
                                          (pFVar5,pSVar1,StringLiteral_sunAltitude,1,pUVar6,
                                           (pFVar5->klass->vtable).OnSettingsChanged.methodPtr);
                                pSVar1 = (this->fields)._._Settings_k__BackingField;
                                pFVar5 = (this->fields).sunLongitude;
                                pUVar6 = (UnityAction_1_System_Single_ *)
                                         func_?(TypeInfo__System__Action<float>);
                                UnityEngine.CoreModule.dll::UnityEngine::Events::
                                UnityAction`1[System::Single]::UnityAction_1_System_Single___ctor
                                          (pUVar6,(Object *)this,
                                           MethodInfo__CloudyThemeBase___InitializeAttributes_b__44_13_float_
                                           ,(MethodInfo *)0x0);
                                if (pFVar5 != (FloatAttribute *)0x0) {
                                  (*(code *)(pFVar5->klass->vtable).Initialize_1.method)
                                            (pFVar5,pSVar1,StringLiteral_sunLongitude,1,pUVar6,
                                             (pFVar5->klass->vtable).OnSettingsChanged.methodPtr);
                                  pSVar1 = (this->fields)._._Settings_k__BackingField;
                                  pFVar5 = (this->fields).sunLightContrast;
                                  pUVar6 = (UnityAction_1_System_Single_ *)
                                           func_?(TypeInfo__System__Action<float>);
                                  UnityEngine.CoreModule.dll::UnityEngine::Events::
                                  UnityAction`1[System::Single]::UnityAction_1_System_Single___ctor
                                            (pUVar6,(Object *)this,
                                             MethodInfo__CloudyThemeBase___InitializeAttributes_b__44_14_float_
                                             ,(MethodInfo *)0x0);
                                  if (pFVar5 != (FloatAttribute *)0x0) {
                                    (*(code *)(pFVar5->klass->vtable).Initialize_1.method)
                                              (pFVar5,pSVar1,StringLiteral_sunLightContrast,2,pUVar6
                                               ,(pFVar5->klass->vtable).OnSettingsChanged.methodPtr)
                                    ;
                                    pSVar1 = (this->fields)._._Settings_k__BackingField;
                                    pFVar5 = (this->fields).sunLightIntensity;
                                    pUVar6 = (UnityAction_1_System_Single_ *)
                                             func_?(TypeInfo__System__Action<float>);
                                    UnityEngine.CoreModule.dll::UnityEngine::Events::
                                    UnityAction`1[System::Single]::
                                    UnityAction_1_System_Single___ctor
                                              (pUVar6,(Object *)this,
                                               MethodInfo__CloudyThemeBase___InitializeAttributes_b__44_15_float_
                                               ,(MethodInfo *)0x0);
                                    if (pFVar5 != (FloatAttribute *)0x0) {
                                      (*(code *)(pFVar5->klass->vtable).Initialize_1.method)
                                                (pFVar5,pSVar1,StringLiteral_sunLightIntensity,2,
                                                 pUVar6,(pFVar5->klass->vtable).OnSettingsChanged.
                                                        methodPtr);
                                      pSVar1 = (this->fields)._._Settings_k__BackingField;
                                      pFVar5 = (this->fields).sunFlareBrightness;
                                      pUVar6 = (UnityAction_1_System_Single_ *)
                                               func_?(TypeInfo__System__Action<float>);
                                      UnityEngine.CoreModule.dll::UnityEngine::Events::
                                      UnityAction`1[System::Single]::
                                      UnityAction_1_System_Single___ctor
                                                (pUVar6,(Object *)this,
                                                 MethodInfo__CloudyThemeBase___InitializeAttributes_b__44_16_float_
                                                 ,(MethodInfo *)0x0);
                                      if (pFVar5 != (FloatAttribute *)0x0) {
                                        (*(code *)(pFVar5->klass->vtable).Initialize_1.method)
                                                  (pFVar5,pSVar1,StringLiteral_sunFlareBrightness,0,
                                                   pUVar6,(pFVar5->klass->vtable).OnSettingsChanged.
                                                          methodPtr);
                                        pSVar1 = (this->fields)._._Settings_k__BackingField;
                                        pCVar7 = (this->fields).moonTint;
                                        pUVar8 = (UnityAction_1_UnityEngine_Color_ *)
                                                 func_?(
                                                  TypeInfo__System__Action<UnityEngine::Color>);
                                        UnityEngine.CoreModule.dll::UnityEngine::Events::
                                        UnityAction`1[UnityEngine::Color]::
                                        UnityAction_1_UnityEngine_Color___ctor
                                                  (pUVar8,(Object *)this,
                                                                                                      
                                                  MethodInfo__CloudyThemeBase___InitializeAttributes_b__44_17_UnityEngine__Color_
                                                  ,(MethodInfo *)0x0);
                                        if (pCVar7 != (ColorAttribute *)0x0) {
                                          (*(code *)(pCVar7->klass->vtable).Initialize_1.method)
                                                    (pCVar7,pSVar1,StringLiteral_moonTint,2,pUVar8,
                                                     (pCVar7->klass->vtable).OnSettingsChanged.
                                                     methodPtr);
                                          pSVar1 = (this->fields)._._Settings_k__BackingField;
                                          pFVar5 = (this->fields).moonSize;
                                          pUVar6 = (UnityAction_1_System_Single_ *)
                                                   func_?(TypeInfo__System__Action<float>);
                                          UnityEngine.CoreModule.dll::UnityEngine::Events::
                                          UnityAction`1[System::Single]::
                                          UnityAction_1_System_Single___ctor
                                                    (pUVar6,(Object *)this,
                                                                                                          
                                                  MethodInfo__CloudyThemeBase___InitializeAttributes_b__44_18_float_
                                                  ,(MethodInfo *)0x0);
                                          if (pFVar5 != (FloatAttribute *)0x0) {
                                            (*(code *)(pFVar5->klass->vtable).Initialize_1.method)
                                                      (pFVar5,pSVar1,StringLiteral_moonSize,0,pUVar6
                                                       ,(pFVar5->klass->vtable).OnSettingsChanged.
                                                        methodPtr);
                                            pSVar1 = (this->fields)._._Settings_k__BackingField;
                                            pFVar5 = (this->fields).moonHeight;
                                            pUVar6 = (UnityAction_1_System_Single_ *)
                                                     func_?(TypeInfo__System__Action<float>
                                                                    );
                                            UnityEngine.CoreModule.dll::UnityEngine::Events::
                                            UnityAction`1[System::Single]::
                                            UnityAction_1_System_Single___ctor
                                                      (pUVar6,(Object *)this,
                                                                                                              
                                                  MethodInfo__CloudyThemeBase___InitializeAttributes_b__44_19_float_
                                                  ,(MethodInfo *)0x0);
                                            if (pFVar5 != (FloatAttribute *)0x0) {
                                              (*(code *)(pFVar5->klass->vtable).Initialize_1.method)
                                                        (pFVar5,pSVar1,StringLiteral_moonHeight,2,
                                                         pUVar6,(pFVar5->klass->vtable).
                                                                OnSettingsChanged.methodPtr);
                                              pSVar1 = (this->fields)._._Settings_k__BackingField;
                                              pFVar5 = (this->fields).moonAxis;
                                              pUVar6 = (UnityAction_1_System_Single_ *)
                                                       func_?(
                                                  TypeInfo__System__Action<float>);
                                              UnityEngine.CoreModule.dll::UnityEngine::Events::
                                              UnityAction`1[System::Single]::
                                              UnityAction_1_System_Single___ctor
                                                        (pUVar6,(Object *)this,
                                                                                                                  
                                                  MethodInfo__CloudyThemeBase___InitializeAttributes_b__44_20_float_
                                                  ,(MethodInfo *)0x0);
                                              if (pFVar5 != (FloatAttribute *)0x0) {
                                                (*(code *)(pFVar5->klass->vtable).Initialize_1.
                                                          method)(pFVar5,pSVar1,
                                                                  StringLiteral_moonAxis,2,pUVar6,
                                                                  (pFVar5->klass->vtable).
                                                                  OnSettingsChanged.methodPtr);
                                                pSVar1 = (this->fields)._._Settings_k__BackingField;
                                                pFVar5 = (this->fields).moonAltitude;
                                                pUVar6 = (UnityAction_1_System_Single_ *)
                                                         func_?(
                                                  TypeInfo__System__Action<float>);
                                                UnityEngine.CoreModule.dll::UnityEngine::Events::
                                                UnityAction`1[System::Single]::
                                                UnityAction_1_System_Single___ctor
                                                          (pUVar6,(Object *)this,
                                                                                                                      
                                                  MethodInfo__CloudyThemeBase___InitializeAttributes_b__44_21_float_
                                                  ,(MethodInfo *)0x0);
                                                if (pFVar5 != (FloatAttribute *)0x0) {
                                                  (*(code *)(pFVar5->klass->vtable).Initialize_1.
                                                            method)(pFVar5,pSVar1,
                                                                    StringLiteral_moonAltitude,1,
                                                                    pUVar6,(pFVar5->klass->vtable).
                                                                           OnSettingsChanged.
                                                                           methodPtr);
                                                  pSVar1 = (this->fields)._.
                                                           _Settings_k__BackingField;
                                                  pFVar5 = (this->fields).moonLongitude;
                                                  pUVar6 = (UnityAction_1_System_Single_ *)
                                                           func_?(
                                                  TypeInfo__System__Action<float>);
                                                  UnityEngine.CoreModule.dll::UnityEngine::Events::
                                                  UnityAction`1[System::Single]::
                                                  UnityAction_1_System_Single___ctor
                                                            (pUVar6,(Object *)this,
                                                                                                                          
                                                  MethodInfo__CloudyThemeBase___InitializeAttributes_b__44_22_float_
                                                  ,(MethodInfo *)0x0);
                                                  if (pFVar5 != (FloatAttribute *)0x0) {
                                                    (*(code *)(pFVar5->klass->vtable).Initialize_1.
                                                              method)(pFVar5,pSVar1,
                                                                      StringLiteral_moonLongitude,1,
                                                                      pUVar6,(pFVar5->klass->vtable)
                                                                             .OnSettingsChanged.
                                                                             methodPtr);
                                                    pSVar1 = (this->fields)._.
                                                             _Settings_k__BackingField;
                                                    pFVar5 = (this->fields).moonLightContrast;
                                                    pUVar6 = (UnityAction_1_System_Single_ *)
                                                             func_?(
                                                  TypeInfo__System__Action<float>);
                                                  UnityEngine.CoreModule.dll::UnityEngine::Events::
                                                  UnityAction`1[System::Single]::
                                                  UnityAction_1_System_Single___ctor
                                                            (pUVar6,(Object *)this,
                                                                                                                          
                                                  MethodInfo__CloudyThemeBase___InitializeAttributes_b__44_23_float_
                                                  ,(MethodInfo *)0x0);
                                                  if (pFVar5 != (FloatAttribute *)0x0) {
                                                    (*(code *)(pFVar5->klass->vtable).Initialize_1.
                                                              method)(pFVar5,pSVar1,
                                                                                                                                            
                                                  StringLiteral_moonLightContrast,2,pUVar6,
                                                  (pFVar5->klass->vtable).OnSettingsChanged.
                                                  methodPtr);
                                                  pSVar1 = (this->fields)._.
                                                           _Settings_k__BackingField;
                                                  pFVar5 = (this->fields).moonLightIntensity;
                                                  pUVar6 = (UnityAction_1_System_Single_ *)
                                                           func_?(
                                                  TypeInfo__System__Action<float>);
                                                  UnityEngine.CoreModule.dll::UnityEngine::Events::
                                                  UnityAction`1[System::Single]::
                                                  UnityAction_1_System_Single___ctor
                                                            (pUVar6,(Object *)this,
                                                                                                                          
                                                  MethodInfo__CloudyThemeBase___InitializeAttributes_b__44_24_float_
                                                  ,(MethodInfo *)0x0);
                                                  if (pFVar5 != (FloatAttribute *)0x0) {
                                                    (*(code *)(pFVar5->klass->vtable).Initialize_1.
                                                              method)(pFVar5,pSVar1,
                                                                                                                                            
                                                  StringLiteral_moonLightIntensity,2,pUVar6,
                                                  (pFVar5->klass->vtable).OnSettingsChanged.
                                                  methodPtr);
                                                  pSVar1 = (this->fields)._.
                                                           _Settings_k__BackingField;
                                                  pFVar5 = (this->fields).moonFlareBrightness;
                                                  pUVar6 = (UnityAction_1_System_Single_ *)
                                                           func_?(
                                                  TypeInfo__System__Action<float>);
                                                  UnityEngine.CoreModule.dll::UnityEngine::Events::
                                                  UnityAction`1[System::Single]::
                                                  UnityAction_1_System_Single___ctor
                                                            (pUVar6,(Object *)this,
                                                                                                                          
                                                  MethodInfo__CloudyThemeBase___InitializeAttributes_b__44_25_float_
                                                  ,(MethodInfo *)0x0);
                                                  if (pFVar5 != (FloatAttribute *)0x0) {
                                                    (*(code *)(pFVar5->klass->vtable).Initialize_1.
                                                              method)(pFVar5,pSVar1,
                                                                                                                                            
                                                  StringLiteral_moonFlareBrightness,0,pUVar6,
                                                  (pFVar5->klass->vtable).OnSettingsChanged.
                                                  methodPtr);
                                                  pSVar1 = (this->fields)._.
                                                           _Settings_k__BackingField;
                                                  pFVar5 = (this->fields).cloudsHeight;
                                                  pUVar6 = (UnityAction_1_System_Single_ *)
                                                           func_?(
                                                  TypeInfo__System__Action<float>);
                                                  UnityEngine.CoreModule.dll::UnityEngine::Events::
                                                  UnityAction`1[System::Single]::
                                                  UnityAction_1_System_Single___ctor
                                                            (pUVar6,(Object *)this,
                                                                                                                          
                                                  MethodInfo__CloudyThemeBase___InitializeAttributes_b__44_26_float_
                                                  ,(MethodInfo *)0x0);
                                                  if (pFVar5 != (FloatAttribute *)0x0) {
                                                    (*(code *)(pFVar5->klass->vtable).Initialize_1.
                                                              method)(pFVar5,pSVar1,
                                                                      StringLiteral_cloudsHeight,0,
                                                                      pUVar6,(pFVar5->klass->vtable)
                                                                             .OnSettingsChanged.
                                                                             methodPtr);
                                                    pSVar1 = (this->fields)._.
                                                             _Settings_k__BackingField;
                                                    pFVar5 = (this->fields).cloudsOffset;
                                                    pUVar6 = (UnityAction_1_System_Single_ *)
                                                             func_?(
                                                  TypeInfo__System__Action<float>);
                                                  UnityEngine.CoreModule.dll::UnityEngine::Events::
                                                  UnityAction`1[System::Single]::
                                                  UnityAction_1_System_Single___ctor
                                                            (pUVar6,(Object *)this,
                                                                                                                          
                                                  MethodInfo__CloudyThemeBase___InitializeAttributes_b__44_27_float_
                                                  ,(MethodInfo *)0x0);
                                                  if (pFVar5 != (FloatAttribute *)0x0) {
                                                    (*(code *)(pFVar5->klass->vtable).Initialize_1.
                                                              method)(pFVar5,pSVar1,
                                                                      StringLiteral_cloudsOffset,0,
                                                                      pUVar6,(pFVar5->klass->vtable)
                                                                             .OnSettingsChanged.
                                                                             methodPtr);
                                                    pSVar1 = (this->fields)._.
                                                             _Settings_k__BackingField;
                                                    pFVar5 = (this->fields).cloudsRotationSpeed;
                                                    pUVar6 = (UnityAction_1_System_Single_ *)
                                                             func_?(
                                                  TypeInfo__System__Action<float>);
                                                  UnityEngine.CoreModule.dll::UnityEngine::Events::
                                                  UnityAction`1[System::Single]::
                                                  UnityAction_1_System_Single___ctor
                                                            (pUVar6,(Object *)this,
                                                                                                                          
                                                  MethodInfo__CloudyThemeBase___InitializeAttributes_b__44_28_float_
                                                  ,(MethodInfo *)0x0);
                                                  if (pFVar5 != (FloatAttribute *)0x0) {
                                                    (*(code *)(pFVar5->klass->vtable).Initialize_1.
                                                              method)(pFVar5,pSVar1,
                                                                                                                                            
                                                  StringLiteral_cloudsRotationSpeed,0,pUVar6,
                                                  (pFVar5->klass->vtable).OnSettingsChanged.
                                                  methodPtr);
                                                  pSVar1 = (this->fields)._.
                                                           _Settings_k__BackingField;
                                                  pBVar2 = (this->fields).useFog;
                                                  pUVar3 = (UnityAction_1_System_Int32Enum_ *)
                                                           func_?(
                                                  TypeInfo__System__Action<bool>);
                                                  UnityEngine.CoreModule.dll::UnityEngine::Events::
                                                  UnityAction`1[System::Int32Enum]::
                                                  UnityAction_1_System_Int32Enum___ctor
                                                            (pUVar3,(Object *)this,
                                                                                                                          
                                                  MethodInfo__CloudyThemeBase__ToggleFog_bool_,
                                                  (MethodInfo *)0x0);
                                                  if (pBVar2 != (BoolAttribute *)0x0) {
                                                    (*(code *)(pBVar2->klass->vtable).Initialize_1.
                                                              method)(pBVar2,pSVar1,
                                                                      StringLiteral_useFog,0,pUVar3,
                                                                      (pBVar2->klass->vtable).
                                                                      OnSettingsChanged.methodPtr);
                                                    pSVar1 = (this->fields)._.
                                                             _Settings_k__BackingField;
                                                    pFVar5 = (this->fields).fogDensity;
                                                    pUVar6 = (UnityAction_1_System_Single_ *)
                                                             func_?(
                                                  TypeInfo__System__Action<float>);
                                                  UnityEngine.CoreModule.dll::UnityEngine::Events::
                                                  UnityAction`1[System::Single]::
                                                  UnityAction_1_System_Single___ctor
                                                            (pUVar6,(Object *)this,
                                                                                                                          
                                                  MethodInfo__CloudyThemeBase___InitializeAttributes_b__44_29_float_
                                                  ,(MethodInfo *)0x0);
                                                  if (pFVar5 != (FloatAttribute *)0x0) {
                                                    (*(code *)(pFVar5->klass->vtable).Initialize_1.
                                                              method)(pFVar5,pSVar1,
                                                                      StringLiteral_fogDensity,0x10,
                                                                      pUVar6,(pFVar5->klass->vtable)
                                                                             .OnSettingsChanged.
                                                                             methodPtr);
                                                    pSVar1 = (this->fields)._.
                                                             _Settings_k__BackingField;
                                                    pFVar5 = (this->fields).exposure;
                                                    pUVar6 = (UnityAction_1_System_Single_ *)
                                                             func_?(
                                                  TypeInfo__System__Action<float>);
                                                  UnityEngine.CoreModule.dll::UnityEngine::Events::
                                                  UnityAction`1[System::Single]::
                                                  UnityAction_1_System_Single___ctor
                                                            (pUVar6,(Object *)this,
                                                                                                                          
                                                  MethodInfo__CloudyThemeBase___InitializeAttributes_b__44_30_float_
                                                  ,(MethodInfo *)0x0);
                                                  if (pFVar5 != (FloatAttribute *)0x0) {
                                                    (*(code *)(pFVar5->klass->vtable).Initialize_1.
                                                              method)(pFVar5,pSVar1,
                                                                      StringLiteral_exposure,0,
                                                                      pUVar6,(pFVar5->klass->vtable)
                                                                             .OnSettingsChanged.
                                                                             methodPtr);
                                                    return;
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* Void InitializeComponents() */

void Assembly-CSharp.dll::CloudyThemeBase::CloudyThemeBase_InitializeComponents
               (CloudyThemeBase *this,MethodInfo *method)

{
  item = (this->fields).skybox;
  if (item != (ThemeSkybox *)0x0) {
    if (cRam_? == '\0') {
      func_?(&
                      MethodInfo__System__Collections__Generic__List<ThemeComponent>__Add_ThemeComponent_
                     );
      cRam_? = '\x01';
    }
    this_00 = (this->fields)._.components;
    if (this_00 != (List_1_ThemeComponent_ *)0x0) {
      mscorlib.dll::System::Collections::Generic::List`1[System::Object]::List_1_System_Object__Add
                ((List_1_System_Object_ *)this_00,(Object *)item,
                 MethodInfo__System__Collections__Generic__List<ThemeComponent>__Add_ThemeComponent_
                );
      if ((this->fields).dayNightCycle != (DayNightCycle *)0x0) {
        if (cRam_? == '\0') {
          func_?(&TypeInfo__ThemeTimers__SystemTimer,unaff_retaddr,this);
          func_?(&TypeInfo__ThemeTimers__Timer);
          cRam_? = '\x01';
        }
        fVar1 = *(float *)(in_stack_2 + 0x10);
        fVar3 = *(float *)(in_stack_2 + 0x14);
        if (fVar3 <= fVar1) {
          fVar3 = fVar3 + (_UNK_? - fVar1);
        }
        else {
          fVar3 = fVar3 - fVar1;
        }
        *(float *)(in_stack_2 + 0x48) = fVar3;
        fVar1 = *(float *)(in_stack_2 + 0x18) * _UNK_?;
        dVar4 = (double)fVar1;
        func_?();
        dVar5 = (double)fVar1;
        func_?();
        fVar1 = *(float *)(in_stack_2 + 0x28);
        *(ulonglong *)(in_stack_2 + 0x4c) = CONCAT44((float)dVar5,(float)dVar4);
        fVar3 = *(float *)(in_stack_2 + 0x2c);
        *(undefined4 *)(in_stack_2 + 0x54) = 0;
        if (fVar3 <= fVar1) {
          fVar3 = fVar3 + (_UNK_? - fVar1);
        }
        else {
          fVar3 = fVar3 - fVar1;
        }
        *(float *)(in_stack_2 + 0x58) = fVar3;
        fVar1 = *(float *)(in_stack_2 + 0x30) * _UNK_?;
        dVar4 = (double)fVar1;
        func_?();
        dVar5 = (double)fVar1;
        func_?();
        *(ulonglong *)(in_stack_2 + 0x5c) = CONCAT44((float)dVar5,(float)dVar4);
        *(undefined4 *)(in_stack_2 + 100) = 0;
        if (*(int *)(in_stack_2 + 0x7c) == 0) {
          if (*(DayNightCycleColorPresets **)(in_stack_2 + 0x44) ==
              (DayNightCycleColorPresets *)0x0) {
            func_?();
            pcVar6 = (code *)swi(3);
            (*pcVar6)();
            return;
          }
          pDVar7 = DayNightCycleColorPresets::DayNightCycleColorPresets_get_Item
                             (*(DayNightCycleColorPresets **)(in_stack_2 + 0x44),0,
                              (MethodInfo *)0x0);
          *(undefined4 *)(in_stack_2 + 0x7c) = pDVar7;
          func_?((undefined4 *)(in_stack_2 + 0x7c),pDVar7);
        }
        if (*(char *)(in_stack_2 + 0x68) == '\0') {
          fVar1 = *(float *)(in_stack_2 + 0x6c);
          this_01 = (Timer_1 *)func_?(TypeInfo__ThemeTimers__Timer);
          method_00 = (MethodInfo *)0x0;
          fVar8 = (float10)func_?();
          ThemeTimers::Timer::Timer_1__ctor(this_01,(float)fVar8,fVar1,method_00);
        }
        else {
          this_01 = (Timer_1 *)func_?(TypeInfo__ThemeTimers__SystemTimer);
          UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
          UxmlObjectListAttributeDescription`1[System::Object]::
          UxmlObjectListAttributeDescription_1_System_Object___ctor
                    ((UxmlObjectListAttributeDescription_1_System_Object_ *)this_01,
                     (MethodInfo *)0x0);
        }
        *(undefined4 *)(in_stack_2 + 0x70) = this_01;
        func_?((undefined4 *)(in_stack_2 + 0x70),this_01);
        *(undefined1 *)(in_stack_2 + 0x78) = 1;
        return;
      }
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void ThemeReset() */

void Assembly-CSharp.dll::CloudyThemeBase::CloudyThemeBase_ThemeReset
               (CloudyThemeBase *this,MethodInfo *method)

{
  pDVar1 = (this->fields).dayNightCycle;
  if (pDVar1 != (DayNightCycle *)0x0) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__ThemeTimers__Timer);
      cRam_? = '\x01';
    }
    if ((pDVar1->fields).useServerTime == 0) {
      initialTime = (pDVar1->fields).cycleStartTime;
      cycleLength = (pDVar1->fields).cycleLength;
      this_00 = (Timer_1 *)func_?(TypeInfo__ThemeTimers__Timer);
      ThemeTimers::Timer::Timer_1__ctor(this_00,initialTime,cycleLength,(MethodInfo *)0x0);
      ppIVar2 = &(pDVar1->fields).timer;
      *ppIVar2 = (ITimer *)this_00;
      func_?(ppIVar2,this_00);
    }
    return;
  }
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void ToggleDayNightCycle(Boolean) */

void Assembly-CSharp.dll::CloudyThemeBase::CloudyThemeBase_ToggleDayNightCycle
               (CloudyThemeBase *this,bool b,MethodInfo *method)

{
  this_00 = (this->fields).dayNightCycle;
  if (this_00 != (DayNightCycle *)0x0) {
    method_00.genericMethod = (Il2CppGenericMethod *)&UNK_?;
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)this_00,b,(MethodInfo *)0x0);
    pSVar1 = (this->fields)._._Settings_k__BackingField;
    if (b == 0) {
      if (pSVar1 == (SettingsWrapper *)0x0) goto code_?;
      ThemeSettings::SettingsWrapper::SettingsWrapper_DisableAttributeGroups
                (pSVar1,1,(MethodInfo *)0x0);
      pSVar1 = (this->fields)._._Settings_k__BackingField;
    }
    else {
      if (pSVar1 == (SettingsWrapper *)0x0) goto code_?;
      ThemeSettings::SettingsWrapper::SettingsWrapper_DisableAttributeGroups
                (pSVar1,2,(MethodInfo *)0x0);
      pSVar1 = (this->fields)._._Settings_k__BackingField;
    }
    if (pSVar1 != (SettingsWrapper *)0x0) {
      uStack2 = 0;
      in_stack_3 = in_stack_3 | *(uint *)(in_stack_4 + 0x10);
      uStack5 = 0xffffffff;
      method = (MethodInfo *)&DAT_?;
      _b = *unaff_FS_OFFSET;
      *unaff_FS_OFFSET = (int)&b;
      if (cRam_? == '\0') {
        func_?(&
                        MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ThemeAttributes::ThemeAttribute>__Dispose__
                       );
        func_?(&
                        MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ThemeAttributes::ThemeAttribute>__MoveNext__
                       );
        func_?(&
                        MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ThemeAttributes::ThemeAttribute>__get_Current__
                       );
        func_?(&TypeInfo__ThemeSettings__IMenu);
        func_?(&
                        MethodInfo__System__Collections__Generic__List<ThemeAttributes::ThemeAttribute>__Add_ThemeAttributes__ThemeAttribute_
                       );
        func_?(&
                        MethodInfo__System__Collections__Generic__List<ThemeAttributes::ThemeAttribute>__GetEnumerator__
                       );
        func_?(&
                        MethodInfo__System__Collections__Generic__List<ThemeAttributes::ThemeAttribute>__List_int_
                       );
        func_?(&
                        TypeInfo__System__Collections__Generic__List<ThemeAttributes::ThemeAttribute>
                       );
        cRam_? = '\x01';
      }
      this_01 = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                 *)func_?(
                                  TypeInfo__System__Collections__Generic__List<ThemeAttributes::ThemeAttribute>
                                  );
      pLVar6 = this_01;
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal::
      MultiColumnCollectionHeader+ViewState+ColumnState]::
      List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState___ctor_2
                (this_01,2,
                 MethodInfo__System__Collections__Generic__List<ThemeAttributes::ThemeAttribute>__List_int_
                );
      if (*(List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ **)
           (in_stack_4 + 0xc) !=
          (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
        pLVar7 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                 ::RegexCharClass+SingleRange]::
                 List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                           ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                             *)&stack0xffffffe4,
                            *(List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ **)
                             (in_stack_4 + 0xc),
                            MethodInfo__System__Collections__Generic__List<ThemeAttributes::ThemeAttribute>__GetEnumerator__
                           );
        RVar8 = pLVar7->_current;
        uStack5 = 1;
        while( true ) {
          bVar9 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                  List_1_T_Enumerator_System_Object__MoveNext
                            ((List_1_T_Enumerator_System_Object_ *)&pOStack_10,
                             MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ThemeAttributes::ThemeAttribute>__MoveNext__
                            );
          if (bVar9 == 0) break;
          if (RVar8 == (RegexCharClass_SingleRange)0x0) goto code_?;
          uVar11 = *(uint *)((int)RVar8 + 0xc);
          this_01 = pLVar6;
          if ((uVar11 & in_stack_3) == uVar11 &&
              (*(uint *)(in_stack_4 + 0x10) & uVar11) != uVar11) {
            if (pLVar6 == (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                           *)0x0) goto code_?;
            mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
            List_1_System_Object__Add
                      ((List_1_System_Object_ *)pLVar6,(Object *)RVar8,
                       MethodInfo__System__Collections__Generic__List<ThemeAttributes::ThemeAttribute>__Add_ThemeAttributes__ThemeAttribute_
                      );
          }
        }
        uStack5 = 0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  ((Object *)&pOStack_10,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ThemeAttributes::ThemeAttribute>__Dispose__
                   ,(MethodInfo *)method_00.genericMethod);
        uStack5 = 0xffffffff;
        *(uint *)(in_stack_4 + 0x10) = in_stack_3;
        if (this_01 !=
            (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
             *)0x0) {
          pLVar7 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                   RegularExpressions::RegexCharClass+SingleRange]::
                   List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                             ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                               *)&stack0xffffffe4,
                              (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                              this_01,
                              MethodInfo__System__Collections__Generic__List<ThemeAttributes::ThemeAttribute>__GetEnumerator__
                             );
          pOStack_10 = (Object__Class *)pLVar7->_list;
          RVar8 = pLVar7->_current;
          uStack5 = 4;
          while( true ) {
            bVar9 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]
                    ::List_1_T_Enumerator_System_Object__MoveNext
                              ((List_1_T_Enumerator_System_Object_ *)&pOStack_10,
                               MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ThemeAttributes::ThemeAttribute>__MoveNext__
                              );
            if (bVar9 == 0) {
              uStack5 = 0xffffffff;
              mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                        ((Object *)&pOStack_10,
                         (ExceptionArgument__Enum)
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ThemeAttributes::ThemeAttribute>__Dispose__
                         ,(MethodInfo *)&stack0xffffffc8);
              uStack5 = 0xffffffff;
              if (*(int *)(in_stack_4 + 0x14) != 0) {
                _b = *(int *)(in_stack_4 + 0x14);
                func_?();
              }
              *unaff_FS_OFFSET = _b;
              return;
            }
            if (RVar8 == (RegexCharClass_SingleRange)0x0) break;
            (**(code **)(*(int *)RVar8 + 0xf0))();
          }
        }
      }
code_?:
      func_?();
      func_?();
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
  }
code_?:
  method = (MethodInfo *)&UNK_?;
  func_?();
  pcVar12 = (code *)swi(3);
  (*pcVar12)();
  return;
}


/* Void ToggleDayNightCycleUseServerTime(Boolean) */

void Assembly-CSharp.dll::CloudyThemeBase::CloudyThemeBase_ToggleDayNightCycleUseServerTime
               (CloudyThemeBase *this,bool b,MethodInfo *method)

{
  this_00 = (this->fields).dayNightCycle;
  if (this_00 != (DayNightCycle *)0x0) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__ThemeTimers__ITimer);
      func_?(&TypeInfo__ThemeTimers__SystemTimer);
      func_?(&TypeInfo__ThemeTimers__Timer);
      cRam_? = '\x01';
    }
    (this_00->fields).useServerTime = b;
    if (b == 0) {
      initialTime = (this_00->fields).cycleStartTime;
      cycleLength = (this_00->fields).cycleLength;
      this_01 = (Timer_1 *)func_?(TypeInfo__ThemeTimers__Timer);
      ThemeTimers::Timer::Timer_1__ctor(this_01,initialTime,cycleLength,(MethodInfo *)0x0);
    }
    else {
      this_01 = (Timer_1 *)func_?(TypeInfo__ThemeTimers__SystemTimer);
      UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
      UxmlObjectListAttributeDescription`1[System::Object]::
      UxmlObjectListAttributeDescription_1_System_Object___ctor
                ((UxmlObjectListAttributeDescription_1_System_Object_ *)this_01,(MethodInfo *)0x0);
    }
    ppIVar1 = &(this_00->fields).timer;
    *ppIVar1 = (ITimer *)this_01;
    func_?(ppIVar1,this_01);
    if ((this_00->fields).initialized != 0) {
      pIVar2 = (this_00->fields).timer;
      if (pIVar2 == (ITimer *)0x0) goto code_?;
      fVar3 = (float10)func_?(0,TypeInfo__ThemeTimers__ITimer,pIVar2);
      DayNightCycle::DayNightCycle_Update_1(this_00,(float)fVar3,(MethodInfo *)0x0);
    }
    pSVar4 = (this->fields)._._Settings_k__BackingField;
    if (b == 0) {
      if (pSVar4 != (SettingsWrapper *)0x0) {
        ThemeSettings::SettingsWrapper::SettingsWrapper_DisableAttributeGroups
                  (pSVar4,4,(MethodInfo *)0x0);
        pSVar4 = (this->fields)._._Settings_k__BackingField;
        if (pSVar4 != (SettingsWrapper *)0x0) {
          ThemeSettings::SettingsWrapper::SettingsWrapper_EnableAttributeGroups
                    (pSVar4,8,(MethodInfo *)0x0);
          return;
        }
      }
    }
    else if (pSVar4 != (SettingsWrapper *)0x0) {
      ThemeSettings::SettingsWrapper::SettingsWrapper_DisableAttributeGroups
                (pSVar4,8,(MethodInfo *)0x0);
      pSVar4 = (this->fields)._._Settings_k__BackingField;
      if (pSVar4 != (SettingsWrapper *)0x0) {
        ThemeSettings::SettingsWrapper::SettingsWrapper_EnableAttributeGroups
                  (pSVar4,4,(MethodInfo *)0x0);
        return;
      }
    }
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void ToggleFog(Boolean) */

void Assembly-CSharp.dll::CloudyThemeBase::CloudyThemeBase_ToggleFog
               (CloudyThemeBase *this,bool b,MethodInfo *method)

{
  bVar1 = b;
  pCVar2 = this;
  pTVar3 = (this->fields).skybox;
  if (pTVar3 != (ThemeSkybox *)0x0) {
    (pTVar3->fields).fogEnabled = b;
    UnityEngine.CoreModule.dll::UnityEngine::RenderSettings::RenderSettings_set_fog
              (b,(MethodInfo *)0x0);
    pSVar4 = (pCVar2->fields)._._Settings_k__BackingField;
    if (bVar1 == 0) {
      if (pSVar4 == (SettingsWrapper *)0x0) goto code_?;
      ThemeSettings::SettingsWrapper::SettingsWrapper_DisableAttributeGroups
                (pSVar4,0x10,(MethodInfo *)0x0);
      pSVar4 = (pCVar2->fields)._._Settings_k__BackingField;
    }
    else {
      if (pSVar4 == (SettingsWrapper *)0x0) goto code_?;
      ThemeSettings::SettingsWrapper::SettingsWrapper_DisableAttributeGroups
                (pSVar4,0x20,(MethodInfo *)0x0);
      pSVar4 = (pCVar2->fields)._._Settings_k__BackingField;
    }
    if (pSVar4 != (SettingsWrapper *)0x0) {
      uStack5 = 0;
      in_stack_6 = in_stack_6 | *(uint *)(in_stack_7 + 0x10);
      method = (MethodInfo *)0xffffffff;
      _b = &DAT_?;
      this = (CloudyThemeBase *)*unaff_FS_OFFSET;
      *unaff_FS_OFFSET = &this;
      pMVar8 = (MethodInfo *)&stack0xffffffc4;
      method_00 = (MethodInfo *)&stack0xffffffc4;
      if (cRam_? == '\0') {
        func_?(&
                        MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ThemeAttributes::ThemeAttribute>__Dispose__
                       );
        func_?(&
                        MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ThemeAttributes::ThemeAttribute>__MoveNext__
                       );
        func_?(&
                        MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ThemeAttributes::ThemeAttribute>__get_Current__
                       );
        func_?(&TypeInfo__ThemeSettings__IMenu);
        func_?(&
                        MethodInfo__System__Collections__Generic__List<ThemeAttributes::ThemeAttribute>__Add_ThemeAttributes__ThemeAttribute_
                       );
        func_?(&
                        MethodInfo__System__Collections__Generic__List<ThemeAttributes::ThemeAttribute>__GetEnumerator__
                       );
        func_?(&
                        MethodInfo__System__Collections__Generic__List<ThemeAttributes::ThemeAttribute>__List_int_
                       );
        func_?(&
                        TypeInfo__System__Collections__Generic__List<ThemeAttributes::ThemeAttribute>
                       );
        cRam_? = '\x01';
        method_00 = pMVar8;
      }
      this_00 = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                 *)func_?(
                                  TypeInfo__System__Collections__Generic__List<ThemeAttributes::ThemeAttribute>
                                  );
      pLVar9 = this_00;
      mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal::
      MultiColumnCollectionHeader+ViewState+ColumnState]::
      List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState___ctor_2
                (this_00,2,
                 MethodInfo__System__Collections__Generic__List<ThemeAttributes::ThemeAttribute>__List_int_
                );
      if (*(List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ **)
           (in_stack_7 + 0xc) !=
          (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)0x0) {
        pLVar10 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::RegularExpressions
                 ::RegexCharClass+SingleRange]::
                 List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                           ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                             *)&stack0xffffffe0,
                            *(List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ **)
                             (in_stack_7 + 0xc),
                            MethodInfo__System__Collections__Generic__List<ThemeAttributes::ThemeAttribute>__GetEnumerator__
                           );
        RVar11 = pLVar10->_current;
        method = (MethodInfo *)0x1;
        while( true ) {
          bVar1 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]::
                  List_1_T_Enumerator_System_Object__MoveNext
                            ((List_1_T_Enumerator_System_Object_ *)&pOStack_12,
                             MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ThemeAttributes::ThemeAttribute>__MoveNext__
                            );
          if (bVar1 == 0) break;
          if (RVar11 == (RegexCharClass_SingleRange)0x0) goto code_?;
          uVar13 = *(uint *)((int)RVar11 + 0xc);
          this_00 = pLVar9;
          if ((uVar13 & in_stack_6) == uVar13 &&
              (*(uint *)(in_stack_7 + 0x10) & uVar13) != uVar13) {
            if (pLVar9 ==
                (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                 *)0x0) goto code_?;
            mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
            List_1_System_Object__Add
                      ((List_1_System_Object_ *)pLVar9,(Object *)RVar11,
                       MethodInfo__System__Collections__Generic__List<ThemeAttributes::ThemeAttribute>__Add_ThemeAttributes__ThemeAttribute_
                      );
          }
        }
        method = (MethodInfo *)0xffffffff;
        mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                  ((Object *)&pOStack_12,
                   (ExceptionArgument__Enum)
                   MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ThemeAttributes::ThemeAttribute>__Dispose__
                   ,(MethodInfo *)in_stack_14.genericMethod);
        method = (MethodInfo *)0xffffffff;
        *(uint *)(in_stack_7 + 0x10) = in_stack_6;
        if (this_00 !=
            (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
             *)0x0) {
          pLVar10 = mscorlib.dll::System::Collections::Generic::List`1[System::Text::
                   RegularExpressions::RegexCharClass+SingleRange]::
                   List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange__GetEnumerator
                             ((List_1_T_Enumerator_System_Text_RegularExpressions_RegexCharClass_SingleRange_
                               *)&stack0xffffffe0,
                              (List_1_System_Text_RegularExpressions_RegexCharClass_SingleRange_ *)
                              this_00,
                              MethodInfo__System__Collections__Generic__List<ThemeAttributes::ThemeAttribute>__GetEnumerator__
                             );
          pOStack_12 = (Object__Class *)pLVar10->_list;
          RVar11 = pLVar10->_current;
          method = (MethodInfo *)0x4;
          while( true ) {
            bVar1 = mscorlib.dll::System::Collections::Generic::List`1[T]+Enumerator[System::Object]
                    ::List_1_T_Enumerator_System_Object__MoveNext
                              ((List_1_T_Enumerator_System_Object_ *)&pOStack_12,
                               MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ThemeAttributes::ThemeAttribute>__MoveNext__
                              );
            if (bVar1 == 0) {
              method = (MethodInfo *)0xffffffff;
              mscorlib.dll::System::ThrowHelper::ThrowHelper_1_IfNullAndNullsAreIllegalThenThrow_57
                        ((Object *)&pOStack_12,
                         (ExceptionArgument__Enum)
                         MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ThemeAttributes::ThemeAttribute>__Dispose__
                         ,method_00);
              method = (MethodInfo *)0xffffffff;
              if (*(CloudyThemeBase **)(in_stack_7 + 0x14) != (CloudyThemeBase *)0x0) {
                this = *(CloudyThemeBase **)(in_stack_7 + 0x14);
                func_?();
              }
              *unaff_FS_OFFSET = this;
              return;
            }
            if (RVar11 == (RegexCharClass_SingleRange)0x0) break;
            (**(code **)(*(int *)RVar11 + 0xf0))();
          }
        }
      }
code_?:
      func_?();
      func_?();
      pcVar15 = (code *)swi(3);
      (*pcVar15)();
      return;
    }
  }
code_?:
  func_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void <InitializeAttributes>b__44_0(Int32) */

void Assembly-CSharp.dll::CloudyThemeBase::CloudyThemeBase__InitializeAttributes_b__44_0
               (CloudyThemeBase *this,int32_t i,MethodInfo *method)

{
  this_00 = (this->fields).dayNightCycle;
  if (this_00 != (DayNightCycle *)0x0) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__ThemeTimers__ITimer);
      cRam_? = '\x01';
    }
    this_01 = (this_00->fields).colorPresets;
    if (this_01 != (DayNightCycleColorPresets *)0x0) {
      pDVar1 = DayNightCycleColorPresets::DayNightCycleColorPresets_get_Item
                         (this_01,i,(MethodInfo *)0x0);
      ppDVar2 = &(this_00->fields).activeColorPreset;
      *ppDVar2 = pDVar1;
      func_?(ppDVar2,pDVar1);
      if ((this_00->fields).initialized != 0) {
        pIVar3 = (this_00->fields).timer;
        if (pIVar3 == (ITimer *)0x0) goto code_?;
        fVar4 = (float10)func_?(0,TypeInfo__ThemeTimers__ITimer,pIVar3);
        DayNightCycle::DayNightCycle_Update_1(this_00,(float)fVar4,(MethodInfo *)0x0);
      }
      return;
    }
  }
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void <InitializeAttributes>b__44_1(Single) */

void Assembly-CSharp.dll::CloudyThemeBase::CloudyThemeBase__InitializeAttributes_b__44_1
               (CloudyThemeBase *this,float f,MethodInfo *method)

{
  this_00 = (this->fields).dayNightCycle;
  if (this_00 != (DayNightCycle *)0x0) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__ThemeTimers__ITimer);
      func_?(&TypeInfo__ThemeTimers__Timer);
      cRam_? = '\x01';
    }
    fVar1 = (float10)func_?();
    (this_00->fields).cycleStartTime = (float)fVar1;
    if ((this_00->fields).initialized != 0) {
      cycleLength = (this_00->fields).cycleLength;
      this_01 = (Timer_1 *)func_?(TypeInfo__ThemeTimers__Timer);
      ThemeTimers::Timer::Timer_1__ctor(this_01,(float)fVar1,cycleLength,(MethodInfo *)0x0);
      ppIVar2 = &(this_00->fields).timer;
      *ppIVar2 = (ITimer *)this_01;
      func_?(ppIVar2,this_01);
      if (*ppIVar2 == (ITimer *)0x0) goto code_?;
      fVar1 = (float10)func_?(0,TypeInfo__ThemeTimers__ITimer,*ppIVar2);
      DayNightCycle::DayNightCycle_Update_1(this_00,(float)fVar1,(MethodInfo *)0x0);
    }
    return;
  }
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void <InitializeAttributes>b__44_10(Single) */

void Assembly-CSharp.dll::CloudyThemeBase::CloudyThemeBase__InitializeAttributes_b__44_10
               (CloudyThemeBase *this,float f,MethodInfo *method)

{
  pTVar1 = (this->fields).skybox;
  if (pTVar1 != (ThemeSkybox *)0x0) {
    if (cRam_? == '\0') {
      func_?(&StringLiteral_sunMatrix);
      cRam_? = '\x01';
    }
    fVar2 = f * _UNK_?;
    fVar3 = _UNK_?;
    if ((_UNK_? <= fVar2) && (fVar3 = fVar2, _UNK_? < fVar2)) {
      fVar3 = _UNK_?;
    }
    pFVar4 = (pTVar1->fields)._sun;
    (pTVar1->fields).sunAngle = fVar3;
    if ((pFVar4 != (FlareLight *)0x0) &&
       (pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)pFVar4,(MethodInfo *)0x0), pTVar5 != (Transform *)0x0)) {
      pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localEulerAngles
                         (&VStack_7,pTVar5,(MethodInfo *)0x0);
      uVar8 = pVVar6->y;
      fVar3 = pVVar6->z;
      pFVar4 = (pTVar1->fields)._sun;
      uStack_9 = CONCAT44(uVar8,(pTVar1->fields).sunAngle);
      if ((pFVar4 != (FlareLight *)0x0) &&
         (pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                             ((Component *)pFVar4,(MethodInfo *)0x0), pTVar5 != (Transform *)0x0)) {
        value.z = fVar3;
        value.x = (float)(undefined4)uStack_9;
        value.y = (float)uStack_9._4_4_;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localEulerAngles
                  (pTVar5,value,(MethodInfo *)0x0);
        pFVar4 = (pTVar1->fields)._sun;
        this_00 = (pTVar1->fields).skyboxMaterial;
        if (((pFVar4 != (FlareLight *)0x0) &&
            (pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                ((Component *)pFVar4,(MethodInfo *)0x0), pTVar5 != (Transform *)0x0)
            ) && (pMVar10 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                           Transform_get_worldToLocalMatrix
                                     ((Matrix4x4 *)&stack0xffffffa4,pTVar5,(MethodInfo *)0x0),
                 this_00 != (Material *)0x0)) {
          UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetMatrix
                    (this_00,StringLiteral_sunMatrix,*pMVar10,(MethodInfo *)0x0);
          pTVar1 = (this->fields).skybox;
          if (pTVar1 != (ThemeSkybox *)0x0) {
            ThemeSkybox::ThemeSkybox_RecalculateSunLight(pTVar1,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void <InitializeAttributes>b__44_11(Single) */

void Assembly-CSharp.dll::CloudyThemeBase::CloudyThemeBase__InitializeAttributes_b__44_11
               (CloudyThemeBase *this,float f,MethodInfo *method)

{
  pTVar1 = (this->fields).skybox;
  if (pTVar1 != (ThemeSkybox *)0x0) {
    if (cRam_? == '\0') {
      func_?(&StringLiteral_sunMatrix);
      cRam_? = '\x01';
    }
    pFVar2 = (pTVar1->fields)._sun;
    if (pFVar2 != (FlareLight *)0x0) {
      pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)pFVar2,(MethodInfo *)0x0);
      if (pTVar3 != (Transform *)0x0) {
        pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localEulerAngles
                           (&VStack_5,pTVar3,(MethodInfo *)0x0);
        uVar6 = pVVar4->x;
        fVar7 = pVVar4->z;
        pFVar2 = (pTVar1->fields)._sun;
        uStack_8 = CONCAT44(f,uVar6);
        if (pFVar2 != (FlareLight *)0x0) {
          pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                             ((Component *)pFVar2,(MethodInfo *)0x0);
          if (pTVar3 != (Transform *)0x0) {
            value.z = fVar7;
            value.x = (float)(undefined4)uStack_8;
            value.y = (float)uStack_8._4_4_;
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localEulerAngles
                      (pTVar3,value,(MethodInfo *)0x0);
            pFVar2 = (pTVar1->fields)._sun;
            this_00 = (pTVar1->fields).skyboxMaterial;
            if (pFVar2 != (FlareLight *)0x0) {
              pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                 ((Component *)pFVar2,(MethodInfo *)0x0);
              if (pTVar3 != (Transform *)0x0) {
                pMVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                         Transform_get_worldToLocalMatrix
                                   ((Matrix4x4 *)&stack0xffffffa4,pTVar3,(MethodInfo *)0x0);
                if (this_00 != (Material *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetMatrix
                            (this_00,StringLiteral_sunMatrix,*pMVar9,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void <InitializeAttributes>b__44_12(Single) */

void Assembly-CSharp.dll::CloudyThemeBase::CloudyThemeBase__InitializeAttributes_b__44_12
               (CloudyThemeBase *this,float f,MethodInfo *method)

{
  this_00 = (this->fields).dayNightCycle;
  if (this_00 != (DayNightCycle *)0x0) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__ThemeTimers__ITimer);
      cRam_? = '\x01';
    }
    (this_00->fields)._sunAltitude = f;
    fVar1 = f * _UNK_?;
    dVar2 = (double)fVar1;
    func_?();
    dVar3 = (double)fVar1;
    func_?();
    bVar4 = (this_00->fields).initialized;
    (this_00->fields)._sunAttitudeVector.x = (float)dVar2;
    (this_00->fields)._sunAttitudeVector.y = (float)dVar3;
    (this_00->fields)._sunAttitudeVector.z = 0.0;
    if (bVar4 != 0) {
      pIVar5 = (this_00->fields).timer;
      if (pIVar5 == (ITimer *)0x0) goto code_?;
      fVar6 = (float10)func_?(0,TypeInfo__ThemeTimers__ITimer,pIVar5);
      DayNightCycle::DayNightCycle_Update_1(this_00,(float)fVar6,(MethodInfo *)0x0);
    }
    return;
  }
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void <InitializeAttributes>b__44_13(Single) */

void Assembly-CSharp.dll::CloudyThemeBase::CloudyThemeBase__InitializeAttributes_b__44_13
               (CloudyThemeBase *this,float f,MethodInfo *method)

{
  this_00 = (this->fields).dayNightCycle;
  if (this_00 != (DayNightCycle *)0x0) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__ThemeTimers__ITimer);
      cRam_? = '\x01';
    }
    (this_00->fields)._sunLongitude = f;
    if ((this_00->fields).initialized != 0) {
      pIVar1 = (this_00->fields).timer;
      if (pIVar1 == (ITimer *)0x0) goto code_?;
      fVar2 = (float10)func_?(0,TypeInfo__ThemeTimers__ITimer,pIVar1);
      DayNightCycle::DayNightCycle_Update_1(this_00,(float)fVar2,(MethodInfo *)0x0);
    }
    return;
  }
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void <InitializeAttributes>b__44_14(Single) */

void Assembly-CSharp.dll::CloudyThemeBase::CloudyThemeBase__InitializeAttributes_b__44_14
               (CloudyThemeBase *this,float f,MethodInfo *method)

{
  pTVar1 = (this->fields).skybox;
  if (pTVar1 != (ThemeSkybox *)0x0) {
    (pTVar1->fields)._sunLightContrast = f;
    ThemeSkybox::ThemeSkybox_RecalculateSunLight(pTVar1,(MethodInfo *)0x0);
    pTVar1 = (this->fields).skybox;
    if (pTVar1 != (ThemeSkybox *)0x0) {
      ThemeSkybox::ThemeSkybox_RecalculateSunLight(pTVar1,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void <InitializeAttributes>b__44_15(Single) */

void Assembly-CSharp.dll::CloudyThemeBase::CloudyThemeBase__InitializeAttributes_b__44_15
               (CloudyThemeBase *this,float f,MethodInfo *method)

{
  pTVar1 = (this->fields).skybox;
  if (pTVar1 != (ThemeSkybox *)0x0) {
    (pTVar1->fields)._sunLightIntensity = f;
    ThemeSkybox::ThemeSkybox_RecalculateSunLight(pTVar1,(MethodInfo *)0x0);
    pTVar1 = (this->fields).skybox;
    if (pTVar1 != (ThemeSkybox *)0x0) {
      ThemeSkybox::ThemeSkybox_RecalculateSunLight(pTVar1,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void <InitializeAttributes>b__44_16(Single) */

void Assembly-CSharp.dll::CloudyThemeBase::CloudyThemeBase__InitializeAttributes_b__44_16
               (CloudyThemeBase *this,float f,MethodInfo *method)

{
  this_00 = (this->fields).skybox;
  if (this_00 != (ThemeSkybox *)0x0) {
    (this_00->fields)._sunFlareBrightness = f;
    ThemeSkybox::ThemeSkybox_RecalculateSunLight(this_00,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&puStack_2);
  func_?(uVar1);
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void <InitializeAttributes>b__44_17(Color) */

void Assembly-CSharp.dll::CloudyThemeBase::CloudyThemeBase__InitializeAttributes_b__44_17
               (CloudyThemeBase *this,Color c,MethodInfo *method)

{
  pTVar1 = (this->fields).skybox;
  if (pTVar1 != (ThemeSkybox *)0x0) {
    if (cRam_? == '\0') {
      func_?(&StringLiteral__MoonTint);
      cRam_? = '\x01';
    }
    this_00 = (pTVar1->fields).skyboxMaterial;
    (pTVar1->fields)._moonTint.r = c.r;
    (pTVar1->fields)._moonTint.g = c.g;
    (pTVar1->fields)._moonTint.b = c.b;
    (pTVar1->fields)._moonTint.a = c.a;
    if (this_00 != (Material *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetVector
                (this_00,StringLiteral__MoonTint,(Vector4)c,(MethodInfo *)0x0);
      pTVar1 = (this->fields).skybox;
      if (pTVar1 != (ThemeSkybox *)0x0) {
        ThemeSkybox::ThemeSkybox_RecalculateMoonLight(pTVar1,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void <InitializeAttributes>b__44_18(Single) */

void Assembly-CSharp.dll::CloudyThemeBase::CloudyThemeBase__InitializeAttributes_b__44_18
               (CloudyThemeBase *this,float f,MethodInfo *method)

{
  pTVar1 = (this->fields).skybox;
  if (pTVar1 != (ThemeSkybox *)0x0) {
    if (cRam_? == '\0') {
      func_?(&StringLiteral__MoonSize);
      cRam_? = '\x01';
    }
    this_00 = (pTVar1->fields).skyboxMaterial;
    (pTVar1->fields)._moonSize = f;
    if (this_00 != (Material *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetFloat
                (this_00,StringLiteral__MoonSize,f,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void <InitializeAttributes>b__44_19(Single) */

void Assembly-CSharp.dll::CloudyThemeBase::CloudyThemeBase__InitializeAttributes_b__44_19
               (CloudyThemeBase *this,float f,MethodInfo *method)

{
  pTVar1 = (this->fields).skybox;
  if (pTVar1 != (ThemeSkybox *)0x0) {
    if (cRam_? == '\0') {
      func_?(&StringLiteral_moonMatrix);
      cRam_? = '\x01';
    }
    fVar2 = f * _UNK_?;
    fVar3 = _UNK_?;
    if ((_UNK_? <= fVar2) && (fVar3 = fVar2, _UNK_? < fVar2)) {
      fVar3 = _UNK_?;
    }
    pFVar4 = (pTVar1->fields)._moon;
    (pTVar1->fields).moonAngle = fVar3;
    if ((pFVar4 != (FlareLight *)0x0) &&
       (pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                           ((Component *)pFVar4,(MethodInfo *)0x0), pTVar5 != (Transform *)0x0)) {
      pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localEulerAngles
                         (&VStack_7,pTVar5,(MethodInfo *)0x0);
      uVar8 = pVVar6->y;
      fVar3 = pVVar6->z;
      pFVar4 = (pTVar1->fields)._moon;
      uStack_9 = CONCAT44(uVar8,(pTVar1->fields).moonAngle);
      if ((pFVar4 != (FlareLight *)0x0) &&
         (pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                             ((Component *)pFVar4,(MethodInfo *)0x0), pTVar5 != (Transform *)0x0)) {
        value.z = fVar3;
        value.x = (float)(undefined4)uStack_9;
        value.y = (float)uStack_9._4_4_;
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localEulerAngles
                  (pTVar5,value,(MethodInfo *)0x0);
        pFVar4 = (pTVar1->fields)._moon;
        this_00 = (pTVar1->fields).skyboxMaterial;
        if (((pFVar4 != (FlareLight *)0x0) &&
            (pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                ((Component *)pFVar4,(MethodInfo *)0x0), pTVar5 != (Transform *)0x0)
            ) && (pMVar10 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                           Transform_get_worldToLocalMatrix
                                     ((Matrix4x4 *)&stack0xffffffa4,pTVar5,(MethodInfo *)0x0),
                 this_00 != (Material *)0x0)) {
          UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetMatrix
                    (this_00,StringLiteral_moonMatrix,*pMVar10,(MethodInfo *)0x0);
          pTVar1 = (this->fields).skybox;
          if (pTVar1 != (ThemeSkybox *)0x0) {
            ThemeSkybox::ThemeSkybox_RecalculateMoonLight(pTVar1,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  func_?();
  pcVar11 = (code *)swi(3);
  (*pcVar11)();
  return;
}


/* Void <InitializeAttributes>b__44_2(Single) */

void Assembly-CSharp.dll::CloudyThemeBase::CloudyThemeBase__InitializeAttributes_b__44_2
               (CloudyThemeBase *this,float f,MethodInfo *method)

{
  this_00 = (this->fields).dayNightCycle;
  if (this_00 != (DayNightCycle *)0x0) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__ThemeTimers__ITimer);
      func_?(&TypeInfo__ThemeTimers__Timer);
      cRam_? = '\x01';
    }
    (this_00->fields).cycleLength = f;
    if ((this_00->fields).initialized == 0) {
      return;
    }
    pIVar1 = (this_00->fields).timer;
    ppIVar2 = &(this_00->fields).timer;
    if (pIVar1 != (ITimer *)0x0) {
      fVar3 = (float10)func_?(0,TypeInfo__ThemeTimers__ITimer,pIVar1);
      cycleLength = (this_00->fields).cycleLength;
      this_01 = (Timer_1 *)func_?(TypeInfo__ThemeTimers__Timer);
      ThemeTimers::Timer::Timer_1__ctor(this_01,(float)fVar3,cycleLength,(MethodInfo *)0x0);
      *ppIVar2 = (ITimer *)this_01;
      func_?(ppIVar2,this_01);
      if (*ppIVar2 != (ITimer *)0x0) {
        fVar3 = (float10)func_?(0,TypeInfo__ThemeTimers__ITimer,*ppIVar2);
        DayNightCycle::DayNightCycle_Update_1(this_00,(float)fVar3,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void <InitializeAttributes>b__44_20(Single) */

void Assembly-CSharp.dll::CloudyThemeBase::CloudyThemeBase__InitializeAttributes_b__44_20
               (CloudyThemeBase *this,float f,MethodInfo *method)

{
  pTVar1 = (this->fields).skybox;
  if (pTVar1 != (ThemeSkybox *)0x0) {
    if (cRam_? == '\0') {
      func_?(&StringLiteral_moonMatrix);
      cRam_? = '\x01';
    }
    pFVar2 = (pTVar1->fields)._moon;
    if (pFVar2 != (FlareLight *)0x0) {
      pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         ((Component *)pFVar2,(MethodInfo *)0x0);
      if (pTVar3 != (Transform *)0x0) {
        pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_localEulerAngles
                           (&VStack_5,pTVar3,(MethodInfo *)0x0);
        uVar6 = pVVar4->x;
        fVar7 = pVVar4->z;
        pFVar2 = (pTVar1->fields)._moon;
        uStack_8 = CONCAT44(f,uVar6);
        if (pFVar2 != (FlareLight *)0x0) {
          pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                             ((Component *)pFVar2,(MethodInfo *)0x0);
          if (pTVar3 != (Transform *)0x0) {
            value.z = fVar7;
            value.x = (float)(undefined4)uStack_8;
            value.y = (float)uStack_8._4_4_;
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localEulerAngles
                      (pTVar3,value,(MethodInfo *)0x0);
            pFVar2 = (pTVar1->fields)._moon;
            this_00 = (pTVar1->fields).skyboxMaterial;
            if (pFVar2 != (FlareLight *)0x0) {
              pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                 ((Component *)pFVar2,(MethodInfo *)0x0);
              if (pTVar3 != (Transform *)0x0) {
                pMVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                         Transform_get_worldToLocalMatrix
                                   ((Matrix4x4 *)&stack0xffffffa4,pTVar3,(MethodInfo *)0x0);
                if (this_00 != (Material *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetMatrix
                            (this_00,StringLiteral_moonMatrix,*pMVar9,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pcVar10 = (code *)swi(3);
  (*pcVar10)();
  return;
}


/* Void <InitializeAttributes>b__44_21(Single) */

void Assembly-CSharp.dll::CloudyThemeBase::CloudyThemeBase__InitializeAttributes_b__44_21
               (CloudyThemeBase *this,float f,MethodInfo *method)

{
  this_00 = (this->fields).dayNightCycle;
  if (this_00 != (DayNightCycle *)0x0) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__ThemeTimers__ITimer);
      cRam_? = '\x01';
    }
    (this_00->fields)._moonAltitude = f;
    fVar1 = f * _UNK_?;
    dVar2 = (double)fVar1;
    func_?();
    dVar3 = (double)fVar1;
    func_?();
    bVar4 = (this_00->fields).initialized;
    (this_00->fields)._moonAttitudeVector.x = (float)dVar2;
    (this_00->fields)._moonAttitudeVector.y = (float)dVar3;
    (this_00->fields)._moonAttitudeVector.z = 0.0;
    if (bVar4 != 0) {
      pIVar5 = (this_00->fields).timer;
      if (pIVar5 == (ITimer *)0x0) goto code_?;
      fVar6 = (float10)func_?(0,TypeInfo__ThemeTimers__ITimer,pIVar5);
      DayNightCycle::DayNightCycle_Update_1(this_00,(float)fVar6,(MethodInfo *)0x0);
    }
    return;
  }
code_?:
  func_?();
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* Void <InitializeAttributes>b__44_22(Single) */

void Assembly-CSharp.dll::CloudyThemeBase::CloudyThemeBase__InitializeAttributes_b__44_22
               (CloudyThemeBase *this,float f,MethodInfo *method)

{
  this_00 = (this->fields).dayNightCycle;
  if (this_00 != (DayNightCycle *)0x0) {
    if (cRam_? == '\0') {
      func_?(&TypeInfo__ThemeTimers__ITimer);
      cRam_? = '\x01';
    }
    (this_00->fields)._moonLongitude = f;
    if ((this_00->fields).initialized != 0) {
      pIVar1 = (this_00->fields).timer;
      if (pIVar1 == (ITimer *)0x0) goto code_?;
      fVar2 = (float10)func_?(0,TypeInfo__ThemeTimers__ITimer,pIVar1);
      DayNightCycle::DayNightCycle_Update_1(this_00,(float)fVar2,(MethodInfo *)0x0);
    }
    return;
  }
code_?:
  func_?();
  pcVar3 = (code *)swi(3);
  (*pcVar3)();
  return;
}


/* Void <InitializeAttributes>b__44_23(Single) */

void Assembly-CSharp.dll::CloudyThemeBase::CloudyThemeBase__InitializeAttributes_b__44_23
               (CloudyThemeBase *this,float f,MethodInfo *method)

{
  pTVar1 = (this->fields).skybox;
  if (pTVar1 != (ThemeSkybox *)0x0) {
    (pTVar1->fields)._moonLightContrast = f;
    ThemeSkybox::ThemeSkybox_RecalculateMoonLight(pTVar1,(MethodInfo *)0x0);
    pTVar1 = (this->fields).skybox;
    if (pTVar1 != (ThemeSkybox *)0x0) {
      ThemeSkybox::ThemeSkybox_RecalculateMoonLight(pTVar1,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void <InitializeAttributes>b__44_24(Single) */

void Assembly-CSharp.dll::CloudyThemeBase::CloudyThemeBase__InitializeAttributes_b__44_24
               (CloudyThemeBase *this,float f,MethodInfo *method)

{
  pTVar1 = (this->fields).skybox;
  if (pTVar1 != (ThemeSkybox *)0x0) {
    (pTVar1->fields)._moonLightIntensity = f;
    ThemeSkybox::ThemeSkybox_RecalculateMoonLight(pTVar1,(MethodInfo *)0x0);
    pTVar1 = (this->fields).skybox;
    if (pTVar1 != (ThemeSkybox *)0x0) {
      ThemeSkybox::ThemeSkybox_RecalculateMoonLight(pTVar1,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void <InitializeAttributes>b__44_25(Single) */

void Assembly-CSharp.dll::CloudyThemeBase::CloudyThemeBase__InitializeAttributes_b__44_25
               (CloudyThemeBase *this,float f,MethodInfo *method)

{
  pTVar1 = (this->fields).skybox;
  if (pTVar1 != (ThemeSkybox *)0x0) {
    (pTVar1->fields)._moonFlareBrightness = f;
    pFVar2 = (pTVar1->fields)._moon;
    if (pFVar2 != (FlareLight *)0x0) {
      this_00 = (pFVar2->fields).lensFlare;
      this_01 = (pFVar2->fields).light;
      if (this_01 != (Light *)0x0) {
        fVar3 = UnityEngine.CoreModule.dll::UnityEngine::Light::Light_get_intensity
                          (this_01,(MethodInfo *)0x0);
        if (this_00 != (LensFlare *)0x0) {
          UnityEngine.CoreModule.dll::UnityEngine::LensFlare::LensFlare_set_brightness
                    (this_00,fVar3 * f,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void <InitializeAttributes>b__44_26(Single) */

void Assembly-CSharp.dll::CloudyThemeBase::CloudyThemeBase__InitializeAttributes_b__44_26
               (CloudyThemeBase *this,float f,MethodInfo *method)

{
  this_00 = (this->fields).skybox;
  if (this_00 != (ThemeSkybox *)0x0) {
    if (cRam_? == '\0') {
      func_?(&StringLiteral__CloudsHeight);
      cRam_? = '\x01';
    }
    this_01 = (this_00->fields).skyboxMaterial;
    (this_00->fields)._cloudsHeight = f;
    if (this_01 != (Material *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetFloat
                (this_01,StringLiteral__CloudsHeight,f,(MethodInfo *)0x0);
      ThemeSkybox::ThemeSkybox_RecalculateMoonLight(this_00,(MethodInfo *)0x0);
      ThemeSkybox::ThemeSkybox_RecalculateSunLight(this_00,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <InitializeAttributes>b__44_27(Single) */

void Assembly-CSharp.dll::CloudyThemeBase::CloudyThemeBase__InitializeAttributes_b__44_27
               (CloudyThemeBase *this,float f,MethodInfo *method)

{
  pTVar1 = (this->fields).skybox;
  if (pTVar1 != (ThemeSkybox *)0x0) {
    if (cRam_? == '\0') {
      func_?(&StringLiteral__CloudsOffset);
      cRam_? = '\x01';
    }
    this_00 = (pTVar1->fields).skyboxMaterial;
    (pTVar1->fields)._cloudsOffset = f;
    if (this_00 != (Material *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetFloat
                (this_00,StringLiteral__CloudsOffset,f,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void <InitializeAttributes>b__44_28(Single) */

void Assembly-CSharp.dll::CloudyThemeBase::CloudyThemeBase__InitializeAttributes_b__44_28
               (CloudyThemeBase *this,float f,MethodInfo *method)

{
  pTVar1 = (this->fields).skybox;
  if (pTVar1 != (ThemeSkybox *)0x0) {
    if (cRam_? == '\0') {
      func_?(&StringLiteral__CloudsRotationSpeed);
      cRam_? = '\x01';
    }
    this_00 = (pTVar1->fields).skyboxMaterial;
    (pTVar1->fields)._cloudsRotationSpeed = f;
    if (this_00 != (Material *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetFloat
                (this_00,StringLiteral__CloudsRotationSpeed,f,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void <InitializeAttributes>b__44_29(Single) */

void Assembly-CSharp.dll::CloudyThemeBase::CloudyThemeBase__InitializeAttributes_b__44_29
               (CloudyThemeBase *this,float f,MethodInfo *method)

{
  pTVar1 = (this->fields).skybox;
  if (pTVar1 != (ThemeSkybox *)0x0) {
    (pTVar1->fields).fogDensity = f;
    UnityEngine.CoreModule.dll::UnityEngine::RenderSettings::RenderSettings_set_fogDensity
              (f,(MethodInfo *)0x0);
    return;
  }
  uVar2 = func_?(&puStack_3);
  func_?(uVar2);
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void <InitializeAttributes>b__44_3(Color) */

void Assembly-CSharp.dll::CloudyThemeBase::CloudyThemeBase__InitializeAttributes_b__44_3
               (CloudyThemeBase *this,Color c,MethodInfo *method)

{
  pTVar1 = (this->fields).skybox;
  if (pTVar1 != (ThemeSkybox *)0x0) {
    if (cRam_? == '\0') {
      func_?(&StringLiteral__TopColor);
      cRam_? = '\x01';
    }
    this_00 = (pTVar1->fields).skyboxMaterial;
    (pTVar1->fields)._topColor.r = c.r;
    (pTVar1->fields)._topColor.g = c.g;
    (pTVar1->fields)._topColor.b = c.b;
    (pTVar1->fields)._topColor.a = c.a;
    if (this_00 != (Material *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetVector
                (this_00,StringLiteral__TopColor,(Vector4)c,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void <InitializeAttributes>b__44_30(Single) */

void Assembly-CSharp.dll::CloudyThemeBase::CloudyThemeBase__InitializeAttributes_b__44_30
               (CloudyThemeBase *this,float f,MethodInfo *method)

{
  pTVar1 = (this->fields).skybox;
  if (pTVar1 != (ThemeSkybox *)0x0) {
    if (cRam_? == '\0') {
      func_?(&StringLiteral__Exposure);
      cRam_? = '\x01';
    }
    this_00 = (pTVar1->fields).skyboxMaterial;
    (pTVar1->fields)._exposure = f;
    if (this_00 != (Material *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetFloat
                (this_00,StringLiteral__Exposure,f,(MethodInfo *)0x0);
      fVar2 = (pTVar1->fields)._exposure;
      CVar3.g = (pTVar1->fields)._bottomColor.g * fVar2;
      CVar3.r = (pTVar1->fields)._bottomColor.r * fVar2;
      CVar3.b = (pTVar1->fields)._bottomColor.b * fVar2;
      CVar3.a = (pTVar1->fields)._bottomColor.a * fVar2;
      UnityEngine.CoreModule.dll::UnityEngine::RenderSettings::RenderSettings_set_ambientLight
                (CVar3,(MethodInfo *)0x0);
      fVar2 = (pTVar1->fields)._exposure;
      _fStack_8 = CONCAT44((pTVar1->fields)._bottomColor.g * fVar2,
                           (pTVar1->fields)._bottomColor.r * fVar2);
      this = (CloudyThemeBase *)0x3f800000;
      fVar4 = (pTVar1->fields)._bottomColor.b * fVar2;
      CVar3 = (Color)CONCAT88(uVar5,_fStack_8);
      UnityEngine.CoreModule.dll::UnityEngine::RenderSettings::RenderSettings_set_fogColor
                (CVar3,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void <InitializeAttributes>b__44_4(Color) */

void Assembly-CSharp.dll::CloudyThemeBase::CloudyThemeBase__InitializeAttributes_b__44_4
               (CloudyThemeBase *this,Color c,MethodInfo *method)

{
  this_00 = (this->fields).skybox;
  if (this_00 != (ThemeSkybox *)0x0) {
    ThemeSkybox::ThemeSkybox_set_BottomColor(this_00,c,(MethodInfo *)0x0);
    return;
  }
  uVar1 = func_?(&stack0xfffffff0);
  func_?(uVar1);
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void <InitializeAttributes>b__44_5(Color) */

void Assembly-CSharp.dll::CloudyThemeBase::CloudyThemeBase__InitializeAttributes_b__44_5
               (CloudyThemeBase *this,Color c,MethodInfo *method)

{
  pTVar1 = (this->fields).skybox;
  if (pTVar1 != (ThemeSkybox *)0x0) {
    if (cRam_? == '\0') {
      func_?(&StringLiteral__StarsTint);
      cRam_? = '\x01';
    }
    this_00 = (pTVar1->fields).skyboxMaterial;
    (pTVar1->fields)._starsTint.r = c.r;
    (pTVar1->fields)._starsTint.g = c.g;
    (pTVar1->fields)._starsTint.b = c.b;
    (pTVar1->fields)._starsTint.a = c.a;
    if (this_00 != (Material *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetVector
                (this_00,StringLiteral__StarsTint,(Vector4)c,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void <InitializeAttributes>b__44_6(Single) */

void Assembly-CSharp.dll::CloudyThemeBase::CloudyThemeBase__InitializeAttributes_b__44_6
               (CloudyThemeBase *this,float f,MethodInfo *method)

{
  pTVar1 = (this->fields).skybox;
  if (pTVar1 != (ThemeSkybox *)0x0) {
    if (cRam_? == '\0') {
      func_?(&StringLiteral__StarsExtinction);
      cRam_? = '\x01';
    }
    this_00 = (pTVar1->fields).skyboxMaterial;
    (pTVar1->fields)._starsExtinction = f;
    if (this_00 != (Material *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetFloat
                (this_00,StringLiteral__StarsExtinction,f,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void <InitializeAttributes>b__44_7(Single) */

void Assembly-CSharp.dll::CloudyThemeBase::CloudyThemeBase__InitializeAttributes_b__44_7
               (CloudyThemeBase *this,float f,MethodInfo *method)

{
  pTVar1 = (this->fields).skybox;
  if (pTVar1 != (ThemeSkybox *)0x0) {
    if (cRam_? == '\0') {
      func_?(&StringLiteral__StarsTwinklingSpeed);
      cRam_? = '\x01';
    }
    this_00 = (pTVar1->fields).skyboxMaterial;
    (pTVar1->fields)._starsTwinklingSpeed = f;
    if (this_00 != (Material *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetFloat
                (this_00,StringLiteral__StarsTwinklingSpeed,f,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void <InitializeAttributes>b__44_8(Color) */

void Assembly-CSharp.dll::CloudyThemeBase::CloudyThemeBase__InitializeAttributes_b__44_8
               (CloudyThemeBase *this,Color c,MethodInfo *method)

{
  pTVar1 = (this->fields).skybox;
  if (pTVar1 != (ThemeSkybox *)0x0) {
    if (cRam_? == '\0') {
      func_?(&StringLiteral__SunTint);
      cRam_? = '\x01';
    }
    this_00 = (pTVar1->fields).skyboxMaterial;
    (pTVar1->fields)._sunTint.r = c.r;
    (pTVar1->fields)._sunTint.g = c.g;
    (pTVar1->fields)._sunTint.b = c.b;
    (pTVar1->fields)._sunTint.a = c.a;
    if (this_00 != (Material *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetVector
                (this_00,StringLiteral__SunTint,(Vector4)c,(MethodInfo *)0x0);
      pTVar1 = (this->fields).skybox;
      if (pTVar1 != (ThemeSkybox *)0x0) {
        ThemeSkybox::ThemeSkybox_RecalculateSunLight(pTVar1,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void <InitializeAttributes>b__44_9(Single) */

void Assembly-CSharp.dll::CloudyThemeBase::CloudyThemeBase__InitializeAttributes_b__44_9
               (CloudyThemeBase *this,float f,MethodInfo *method)

{
  pTVar1 = (this->fields).skybox;
  if (pTVar1 != (ThemeSkybox *)0x0) {
    if (cRam_? == '\0') {
      func_?(&StringLiteral__SunSize);
      cRam_? = '\x01';
    }
    this_00 = (pTVar1->fields).skyboxMaterial;
    (pTVar1->fields)._sunSize = f;
    if (this_00 != (Material *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetFloat
                (this_00,StringLiteral__SunSize,f,(MethodInfo *)0x0);
      return;
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* CloudyThemeBase() */

void Assembly-CSharp.dll::CloudyThemeBase::CloudyThemeBase__ctor
               (CloudyThemeBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&MethodInfo__System__Collections__Generic__List<ThemeComponent>__List__);
    func_?(&TypeInfo__System__Collections__Generic__List<ThemeComponent>);
    cRam_? = '\x01';
  }
  this_00 = (List_1_ThemeComponent_ *)
            func_?(TypeInfo__System__Collections__Generic__List<ThemeComponent>);
  mscorlib.dll::System::Collections::Generic::LowLevelList`1[Unity::IL2CPP::Metadata::
  __Il2CppFullySharedGenericType]::
  LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType___ctor
            ((LowLevelList_1_Unity_IL2CPP_Metadata_Il2CppFullySharedGenericType_ *)this_00,
             MethodInfo__System__Collections__Generic__List<ThemeComponent>__List__);
  ppLVar1 = &(this->fields)._.components;
  *ppLVar1 = this_00;
  func_?(ppLVar1,this_00);
  UnityEngine.CoreModule.dll::UnityEngine::MonoBehaviour::MonoBehaviour__ctor
            ((MonoBehaviour *)this,(MethodInfo *)0x0);
  return;
}


/* List`1[UnityEngine.RectTransform] get_Controllers() */

List_1_UnityEngine_RectTransform_ *
Assembly-CSharp.dll::CloudyThemeBase::CloudyThemeBase_get_Controllers
          (CloudyThemeBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::RectTransform>__Add_UnityEngine__RectTransform_
                   );
    func_?(&
                    MethodInfo__System__Collections__Generic__List<UnityEngine::RectTransform>__List_int_
                   );
    func_?(&TypeInfo__System__Collections__Generic__List<UnityEngine::RectTransform>);
    func_?(&
                    DayNightCycleController_MethodInfo__UnityEngine__Object__Instantiate<DayNightCycleController>_DayNightCycleController_
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    func_?(&TypeInfo__UnityEngine__RectTransform);
    func_?(&MethodInfo__ThemeAttributes__ThemeAttribute<bool>__get_Value__);
    cRam_? = '\x01';
  }
  this_02 = (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
             *)func_?(
                              TypeInfo__System__Collections__Generic__List<UnityEngine::RectTransform>
                              );
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::UIElements::Internal::
  MultiColumnCollectionHeader+ViewState+ColumnState]::
  List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState___ctor_2
            (this_02,0,
             MethodInfo__System__Collections__Generic__List<UnityEngine::RectTransform>__List_int_);
  pBVar1 = (this->fields).useDayNightCycle;
  if (pBVar1 != (BoolAttribute *)0x0) {
    if ((pBVar1->fields)._._.value == 0) {
      return (List_1_UnityEngine_RectTransform_ *)this_02;
    }
    pBVar1 = (this->fields).useServerTime;
    if (pBVar1 != (BoolAttribute *)0x0) {
      if ((pBVar1->fields)._._.value != 0) {
        return (List_1_UnityEngine_RectTransform_ *)this_02;
      }
      original = (this->fields).cycleControllerPrefab;
      if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
        func_?(TypeInfo__UnityEngine__Object);
      }
      this_03 = (Component *)
                UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_4
                          ((Object *)original,
                           DayNightCycleController_MethodInfo__UnityEngine__Object__Instantiate<DayNightCycleController>_DayNightCycleController_
                          );
      if (this_03 != (Component *)0x0) {
        pCVar2 = (Component__Class *)(this->fields).dayNightCycle;
        this_03[3].klass = pCVar2;
        func_?(this_03 + 3,pCVar2);
        this_00 = (Toggle *)this_03[1].monitor;
        if ((this_00 != (Toggle *)0x0) && (pCVar2 != (Component__Class *)0x0)) {
          bVar3 = *(undefined1 *)((int)&(pCVar2->_1).cctor_thread + 1);
          if ((this_00->fields).m_IsOn == bVar3) {
            UnityEngine.UI.dll::UnityEngine::UI::Toggle::Toggle_set_isOn
                      (this_00,bVar3 == 0,(MethodInfo *)0x0);
code_?:
            pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                               (this_03,(MethodInfo *)0x0);
            if (this_02 !=
                (List_1_UnityEngine_UIElements_Internal_MultiColumnCollectionHeader_ViewState_ColumnState_
                 *)0x0) {
              item = (Transform *)0x0;
              if (pTVar4 == (Transform *)0x0) {
code_?:
                mscorlib.dll::System::Collections::Generic::List`1[System::Object]::
                List_1_System_Object__Add
                          ((List_1_System_Object_ *)this_02,(Object *)item,
                           MethodInfo__System__Collections__Generic__List<UnityEngine::RectTransform>__Add_UnityEngine__RectTransform_
                          );
                return (List_1_UnityEngine_RectTransform_ *)this_02;
              }
              if (pTVar4->klass == (Transform__Class *)TypeInfo__UnityEngine__RectTransform) {
                item = pTVar4;
              }
              pRVar5 = TypeInfo__UnityEngine__RectTransform;
              if (item != (Transform *)0x0) goto code_?;
              goto code_?;
            }
          }
          else {
            this_01 = this_03[1].fields._.m_CachedPtr;
            if (this_01 != (Behaviour *)0x0) {
              bVar3 = (this_00->fields).m_IsOn;
              value = bVar3 == 0;
              UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                        (this_01,value,(MethodInfo *)0x0);
              if (this_03[2].klass != (Component__Class *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
                          ((Behaviour *)this_03[2].klass,bVar3,(MethodInfo *)0x0);
                if (this_03[3].klass != (Component__Class *)0x0) {
                  *(undefined1 *)((int)&((this_03[3].klass)->_1).cctor_thread + 1) = value;
                  goto code_?;
                }
              }
            }
          }
        }
      }
    }
  }
  func_?();
  pTVar4 = extraout_ECX;
  pRVar5 = extraout_EDX;
code_?:
  func_?(pTVar4,pRVar5);
  pcVar6 = (code *)swi(3);
  pLVar7 = (List_1_UnityEngine_RectTransform_ *)(*pcVar6)();
  return pLVar7;
}

