
/* Void InitializeAttributes() */

void Assembly-CSharp.dll::CloudyThemeBase::CloudyThemeBase_InitializeAttributes
               (CloudyThemeBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pBVar1 = (this->fields).useDayNightCycle;
  System.Core.dll::System::Linq::Enumerable+<CreateCastIterator>c__Iterator0`1[System::Int32]::
  Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32__System_Collections_Generic_IEnumerator_TResult__get_Current
            ((Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32_ *)this,(MethodInfo *)0x0);
  pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
           func_?(TypeInfo__System__Action<bool>);
  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
  Scene,UnityEngine::SceneManagement::Scene]::
  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
            (pUVar2,(Object *)this,MethodInfo__CloudyThemeBase__ToggleDayNightCycle_bool_,
             MethodInfo__System__Action<bool>__Action_System__Object__void__);
  if (pBVar1 != (BoolAttribute *)0x0) {
    (*(code *)(pBVar1->klass->vtable).Initialize_1.method)
              (pBVar1,(pBVar1->klass->vtable).OnSettingsChanged.methodPtr,
               StringLiteral_useDayNightCycle,0);
    pBVar1 = (this->fields).useServerTime;
    System.Core.dll::System::Linq::Enumerable+<CreateCastIterator>c__Iterator0`1[System::Int32]::
    Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32__System_Collections_Generic_IEnumerator_TResult__get_Current
              ((Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32_ *)this,(MethodInfo *)0x0);
    pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *)
             func_?(TypeInfo__System__Action<bool>);
    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
    Scene,UnityEngine::SceneManagement::Scene]::
    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
              (pUVar2,(Object *)this,
               MethodInfo__CloudyThemeBase__ToggleDayNightCycleUseServerTime_bool_,
               MethodInfo__System__Action<bool>__Action_System__Object__void__);
    if (pBVar1 != (BoolAttribute *)0x0) {
      (*(code *)(pBVar1->klass->vtable).Initialize_1.method)
                (pBVar1,(pBVar1->klass->vtable).OnSettingsChanged.methodPtr,
                 StringLiteral_useServerTime,1);
      pIVar3 = (this->fields).colorPreset;
      System.Core.dll::System::Linq::Enumerable+<CreateCastIterator>c__Iterator0`1[System::Int32]::
      Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32__System_Collections_Generic_IEnumerator_TResult__get_Current
                ((Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32_ *)this,(MethodInfo *)0x0
                );
      pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_ *
               )func_?(TypeInfo__System__Action<int>);
      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement::
      Scene,UnityEngine::SceneManagement::Scene]::
      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                (pUVar2,(Object *)this,MethodInfo__CloudyThemeBase___InitializeAttributes_m__0_int_,
                 MethodInfo__System__Action<int>__Action_System__Object__void__);
      if (pIVar3 != (IntAttribute *)0x0) {
        (*(code *)(pIVar3->klass->vtable).Initialize_1.method)
                  (pIVar3,(pIVar3->klass->vtable).OnSettingsChanged.methodPtr,
                   StringLiteral_colorPresetIndex,1);
        pFVar4 = (this->fields).gameStartTime;
        System.Core.dll::System::Linq::Enumerable+<CreateCastIterator>c__Iterator0`1[System::Int32]
        ::
        Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32__System_Collections_Generic_IEnumerator_TResult__get_Current
                  ((Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32_ *)this,
                   (MethodInfo *)0x0);
        pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                  *)func_?(TypeInfo__System__Action<float>);
        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::SceneManagement
        ::Scene,UnityEngine::SceneManagement::Scene]::
        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                  (pUVar2,(Object *)this,
                   MethodInfo__CloudyThemeBase___InitializeAttributes_m__1_float_,
                   MethodInfo__System__Action<float>__Action_System__Object__void__);
        if (pFVar4 != (FloatAttribute *)0x0) {
          (*(code *)(pFVar4->klass->vtable).Initialize_1.method)
                    (pFVar4,(pFVar4->klass->vtable).OnSettingsChanged.methodPtr,
                     StringLiteral_gameStartTime,9);
          pFVar4 = (this->fields).cycleLength;
          System.Core.dll::System::Linq::Enumerable+<CreateCastIterator>c__Iterator0`1[System::
          Int32]::
          Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32__System_Collections_Generic_IEnumerator_TResult__get_Current
                    ((Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32_ *)this,
                     (MethodInfo *)0x0);
          pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                    *)func_?(TypeInfo__System__Action<float>);
          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
          SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                    (pUVar2,(Object *)this,
                     MethodInfo__CloudyThemeBase___InitializeAttributes_m__2_float_,
                     MethodInfo__System__Action<float>__Action_System__Object__void__);
          if (pFVar4 != (FloatAttribute *)0x0) {
            (*(code *)(pFVar4->klass->vtable).Initialize_1.method)
                      (pFVar4,(pFVar4->klass->vtable).OnSettingsChanged.methodPtr,
                       StringLiteral_cycleLength,9);
            pCVar5 = (this->fields).topColor;
            System.Core.dll::System::Linq::Enumerable+<CreateCastIterator>c__Iterator0`1[System::
            Int32]::
            Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32__System_Collections_Generic_IEnumerator_TResult__get_Current
                      ((Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32_ *)this,
                       (MethodInfo *)0x0);
            pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                      *)func_?(TypeInfo__System__Action<UnityEngine::Color>);
            UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
            SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
            UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                      (pUVar2,(Object *)this,
                       MethodInfo__CloudyThemeBase___InitializeAttributes_m__3_UnityEngine__Color_,
                       MethodInfo__System__Action<UnityEngine::Color>__Action_System__Object__void__
                      );
            if (pCVar5 != (ColorAttribute *)0x0) {
              (*(code *)(pCVar5->klass->vtable).Initialize_1.method)
                        (pCVar5,(pCVar5->klass->vtable).OnSettingsChanged.methodPtr,
                         StringLiteral_topColor,2);
              pCVar5 = (this->fields).bottomColor;
              System.Core.dll::System::Linq::Enumerable+<CreateCastIterator>c__Iterator0`1[System::
              Int32]::
              Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32__System_Collections_Generic_IEnumerator_TResult__get_Current
                        ((Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32_ *)this,
                         (MethodInfo *)0x0);
              pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                        *)func_?(TypeInfo__System__Action<UnityEngine::Color>);
              UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
              SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
              UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                        (pUVar2,(Object *)this,
                         MethodInfo__CloudyThemeBase___InitializeAttributes_m__4_UnityEngine__Color_
                         ,
                         MethodInfo__System__Action<UnityEngine::Color>__Action_System__Object__void__
                        );
              if (pCVar5 != (ColorAttribute *)0x0) {
                (*(code *)(pCVar5->klass->vtable).Initialize_1.method)
                          (pCVar5,(pCVar5->klass->vtable).OnSettingsChanged.methodPtr,
                           StringLiteral_bottomColor,2);
                pCVar5 = (this->fields).starsTint;
                System.Core.dll::System::Linq::Enumerable+<CreateCastIterator>c__Iterator0`1[System
                ::Int32]::
                Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32__System_Collections_Generic_IEnumerator_TResult__get_Current
                          ((Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32_ *)this,
                           (MethodInfo *)0x0);
                pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                          *)func_?(TypeInfo__System__Action<UnityEngine::Color>);
                UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
                SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
                UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                          (pUVar2,(Object *)this,
                           MethodInfo__CloudyThemeBase___InitializeAttributes_m__5_UnityEngine__Color_
                           ,
                           MethodInfo__System__Action<UnityEngine::Color>__Action_System__Object__void__
                          );
                if (pCVar5 != (ColorAttribute *)0x0) {
                  (*(code *)(pCVar5->klass->vtable).Initialize_1.method)
                            (pCVar5,(pCVar5->klass->vtable).OnSettingsChanged.methodPtr,
                             StringLiteral_starsTint,2);
                  pFVar4 = (this->fields).starsExtinction;
                  System.Core.dll::System::Linq::
                  Enumerable+<CreateCastIterator>c__Iterator0`1[System::Int32]::
                  Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32__System_Collections_Generic_IEnumerator_TResult__get_Current
                            ((Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32_ *)this,
                             (MethodInfo *)0x0);
                  pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                            *)func_?(TypeInfo__System__Action<float>);
                  UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
                  SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
                  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                            (pUVar2,(Object *)this,
                             MethodInfo__CloudyThemeBase___InitializeAttributes_m__6_float_,
                             MethodInfo__System__Action<float>__Action_System__Object__void__);
                  if (pFVar4 != (FloatAttribute *)0x0) {
                    (*(code *)(pFVar4->klass->vtable).Initialize_1.method)
                              (pFVar4,(pFVar4->klass->vtable).OnSettingsChanged.methodPtr,
                               StringLiteral_starsExtinction,0);
                    pFVar4 = (this->fields).starsTwinkilingSpeed;
                    System.Core.dll::System::Linq::
                    Enumerable+<CreateCastIterator>c__Iterator0`1[System::Int32]::
                    Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32__System_Collections_Generic_IEnumerator_TResult__get_Current
                              ((Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32_ *)this,
                               (MethodInfo *)0x0);
                    pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                              *)func_?(TypeInfo__System__Action<float>);
                    UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
                    SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
                    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                              (pUVar2,(Object *)this,
                               MethodInfo__CloudyThemeBase___InitializeAttributes_m__7_float_,
                               MethodInfo__System__Action<float>__Action_System__Object__void__);
                    if (pFVar4 != (FloatAttribute *)0x0) {
                      (*(code *)(pFVar4->klass->vtable).Initialize_1.method)
                                (pFVar4,(pFVar4->klass->vtable).OnSettingsChanged.methodPtr,
                                 StringLiteral_starsTwinklingSpeed,0);
                      pCVar5 = (this->fields).sunTint;
                      System.Core.dll::System::Linq::
                      Enumerable+<CreateCastIterator>c__Iterator0`1[System::Int32]::
                      Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32__System_Collections_Generic_IEnumerator_TResult__get_Current
                                ((Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32_ *)this,
                                 (MethodInfo *)0x0);
                      pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                                *)func_?(TypeInfo__System__Action<UnityEngine::Color>);
                      UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
                      SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
                      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                                (pUVar2,(Object *)this,
                                 MethodInfo__CloudyThemeBase___InitializeAttributes_m__8_UnityEngine__Color_
                                 ,
                                 MethodInfo__System__Action<UnityEngine::Color>__Action_System__Object__void__
                                );
                      if (pCVar5 != (ColorAttribute *)0x0) {
                        (*(code *)(pCVar5->klass->vtable).Initialize_1.method)
                                  (pCVar5,(pCVar5->klass->vtable).OnSettingsChanged.methodPtr,
                                   StringLiteral_sunTint,2);
                        pFVar4 = (this->fields).sunSize;
                        System.Core.dll::System::Linq::
                        Enumerable+<CreateCastIterator>c__Iterator0`1[System::Int32]::
                        Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32__System_Collections_Generic_IEnumerator_TResult__get_Current
                                  ((Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32_ *)this
                                   ,(MethodInfo *)0x0);
                        pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                                  *)func_?(TypeInfo__System__Action<float>);
                        UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine::
                        SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
                        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                                  (pUVar2,(Object *)this,
                                   MethodInfo__CloudyThemeBase___InitializeAttributes_m__9_float_,
                                   MethodInfo__System__Action<float>__Action_System__Object__void__)
                        ;
                        if (pFVar4 != (FloatAttribute *)0x0) {
                          (*(code *)(pFVar4->klass->vtable).Initialize_1.method)
                                    (pFVar4,(pFVar4->klass->vtable).OnSettingsChanged.methodPtr,
                                     StringLiteral_sunSize,0);
                          pFVar4 = (this->fields).sunHeight;
                          System.Core.dll::System::Linq::
                          Enumerable+<CreateCastIterator>c__Iterator0`1[System::Int32]::
                          Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32__System_Collections_Generic_IEnumerator_TResult__get_Current
                                    ((Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32_ *)
                                     this,(MethodInfo *)0x0);
                          pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                                    *)func_?(TypeInfo__System__Action<float>);
                          UnityEngine.CoreModule.dll::UnityEngine::Events::UnityAction`2[UnityEngine
                          ::SceneManagement::Scene,UnityEngine::SceneManagement::Scene]::
                          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                                    (pUVar2,(Object *)this,
                                     MethodInfo__CloudyThemeBase___InitializeAttributes_m__A_float_,
                                     MethodInfo__System__Action<float>__Action_System__Object__void__
                                    );
                          if (pFVar4 != (FloatAttribute *)0x0) {
                            (*(code *)(pFVar4->klass->vtable).Initialize_1.method)
                                      (pFVar4,(pFVar4->klass->vtable).OnSettingsChanged.methodPtr,
                                       StringLiteral_sunHeight,2);
                            pFVar4 = (this->fields).sunAxis;
                            System.Core.dll::System::Linq::
                            Enumerable+<CreateCastIterator>c__Iterator0`1[System::Int32]::
                            Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32__System_Collections_Generic_IEnumerator_TResult__get_Current
                                      ((Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32_ *)
                                       this,(MethodInfo *)0x0);
                            pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                                      *)func_?(TypeInfo__System__Action<float>);
                            UnityEngine.CoreModule.dll::UnityEngine::Events::
                            UnityAction`2[UnityEngine::SceneManagement::Scene,UnityEngine::
                            SceneManagement::Scene]::
                            UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                                      (pUVar2,(Object *)this,
                                       MethodInfo__CloudyThemeBase___InitializeAttributes_m__B_float_
                                       ,
                                       MethodInfo__System__Action<float>__Action_System__Object__void__
                                      );
                            if (pFVar4 != (FloatAttribute *)0x0) {
                              (*(code *)(pFVar4->klass->vtable).Initialize_1.method)
                                        (pFVar4,(pFVar4->klass->vtable).OnSettingsChanged.methodPtr,
                                         StringLiteral_sunAxis,2);
                              pFVar4 = (this->fields).sunAltitude;
                              System.Core.dll::System::Linq::
                              Enumerable+<CreateCastIterator>c__Iterator0`1[System::Int32]::
                              Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32__System_Collections_Generic_IEnumerator_TResult__get_Current
                                        ((Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32_
                                          *)this,(MethodInfo *)0x0);
                              pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                                        *)func_?(TypeInfo__System__Action<float>);
                              UnityEngine.CoreModule.dll::UnityEngine::Events::
                              UnityAction`2[UnityEngine::SceneManagement::Scene,UnityEngine::
                              SceneManagement::Scene]::
                              UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                                        (pUVar2,(Object *)this,
                                         MethodInfo__CloudyThemeBase___InitializeAttributes_m__C_float_
                                         ,
                                         MethodInfo__System__Action<float>__Action_System__Object__void__
                                        );
                              if (pFVar4 != (FloatAttribute *)0x0) {
                                (*(code *)(pFVar4->klass->vtable).Initialize_1.method)
                                          (pFVar4,(pFVar4->klass->vtable).OnSettingsChanged.
                                                  methodPtr,StringLiteral_sunAltitude,1);
                                pFVar4 = (this->fields).sunLongitude;
                                System.Core.dll::System::Linq::
                                Enumerable+<CreateCastIterator>c__Iterator0`1[System::Int32]::
                                Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32__System_Collections_Generic_IEnumerator_TResult__get_Current
                                          ((Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32_
                                            *)this,(MethodInfo *)0x0);
                                pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                                          *)func_?(TypeInfo__System__Action<float>);
                                UnityEngine.CoreModule.dll::UnityEngine::Events::
                                UnityAction`2[UnityEngine::SceneManagement::Scene,UnityEngine::
                                SceneManagement::Scene]::
                                UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                                          (pUVar2,(Object *)this,
                                           MethodInfo__CloudyThemeBase___InitializeAttributes_m__D_float_
                                           ,
                                           MethodInfo__System__Action<float>__Action_System__Object__void__
                                          );
                                if (pFVar4 != (FloatAttribute *)0x0) {
                                  (*(code *)(pFVar4->klass->vtable).Initialize_1.method)
                                            (pFVar4,(pFVar4->klass->vtable).OnSettingsChanged.
                                                    methodPtr,StringLiteral_sunLongitude,1);
                                  pFVar4 = (this->fields).sunLightContrast;
                                  System.Core.dll::System::Linq::
                                  Enumerable+<CreateCastIterator>c__Iterator0`1[System::Int32]::
                                  Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32__System_Collections_Generic_IEnumerator_TResult__get_Current
                                            ((Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32_
                                              *)this,(MethodInfo *)0x0);
                                  pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                                            *)func_?(TypeInfo__System__Action<float>);
                                  UnityEngine.CoreModule.dll::UnityEngine::Events::
                                  UnityAction`2[UnityEngine::SceneManagement::Scene,UnityEngine::
                                  SceneManagement::Scene]::
                                  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                                            (pUVar2,(Object *)this,
                                             MethodInfo__CloudyThemeBase___InitializeAttributes_m__E_float_
                                             ,
                                             MethodInfo__System__Action<float>__Action_System__Object__void__
                                            );
                                  if (pFVar4 != (FloatAttribute *)0x0) {
                                    (*(code *)(pFVar4->klass->vtable).Initialize_1.method)
                                              (pFVar4,(pFVar4->klass->vtable).OnSettingsChanged.
                                                      methodPtr,StringLiteral_sunLightContrast,2);
                                    pFVar4 = (this->fields).sunLightIntensity;
                                    System.Core.dll::System::Linq::
                                    Enumerable+<CreateCastIterator>c__Iterator0`1[System::Int32]::
                                    Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32__System_Collections_Generic_IEnumerator_TResult__get_Current
                                              ((Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32_
                                                *)this,(MethodInfo *)0x0);
                                    pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                                              *)func_?(TypeInfo__System__Action<float>);
                                    UnityEngine.CoreModule.dll::UnityEngine::Events::
                                    UnityAction`2[UnityEngine::SceneManagement::Scene,UnityEngine::
                                    SceneManagement::Scene]::
                                    UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                                              (pUVar2,(Object *)this,
                                               MethodInfo__CloudyThemeBase___InitializeAttributes_m__F_float_
                                               ,
                                               MethodInfo__System__Action<float>__Action_System__Object__void__
                                              );
                                    if (pFVar4 != (FloatAttribute *)0x0) {
                                      (*(code *)(pFVar4->klass->vtable).Initialize_1.method)
                                                (pFVar4,(pFVar4->klass->vtable).OnSettingsChanged.
                                                        methodPtr,StringLiteral_sunLightIntensity,2)
                                      ;
                                      pFVar4 = (this->fields).sunFlareBrightness;
                                      System.Core.dll::System::Linq::
                                      Enumerable+<CreateCastIterator>c__Iterator0`1[System::Int32]::
                                      Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32__System_Collections_Generic_IEnumerator_TResult__get_Current
                                                ((Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32_
                                                  *)this,(MethodInfo *)0x0);
                                      pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                                                *)func_?(TypeInfo__System__Action<float>);
                                      UnityEngine.CoreModule.dll::UnityEngine::Events::
                                      UnityAction`2[UnityEngine::SceneManagement::Scene,UnityEngine
                                      ::SceneManagement::Scene]::
                                      UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                                                (pUVar2,(Object *)this,
                                                 MethodInfo__CloudyThemeBase___InitializeAttributes_m__10_float_
                                                 ,
                                                 MethodInfo__System__Action<float>__Action_System__Object__void__
                                                );
                                      if (pFVar4 != (FloatAttribute *)0x0) {
                                        (*(code *)(pFVar4->klass->vtable).Initialize_1.method)
                                                  (pFVar4,(pFVar4->klass->vtable).OnSettingsChanged.
                                                          methodPtr,StringLiteral_sunFlareBrightness
                                                   ,0);
                                        pCVar5 = (this->fields).moonTint;
                                        System.Core.dll::System::Linq::
                                        Enumerable+<CreateCastIterator>c__Iterator0`1[System::Int32]
                                        ::
                                        Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32__System_Collections_Generic_IEnumerator_TResult__get_Current
                                                  ((
                                                  Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32_
                                                  *)this,(MethodInfo *)0x0);
                                        pUVar2 = (UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                                                  *)func_?(
                                                  TypeInfo__System__Action<UnityEngine::Color>);
                                        UnityEngine.CoreModule.dll::UnityEngine::Events::
                                        UnityAction`2[UnityEngine::SceneManagement::
                                        Scene,UnityEngine::SceneManagement::Scene]::
                                        UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                                                  (pUVar2,(Object *)this,
                                                                                                      
                                                  MethodInfo__CloudyThemeBase___InitializeAttributes_m__11_UnityEngine__Color_
                                                  ,
                                                  MethodInfo__System__Action<UnityEngine::Color>__Action_System__Object__void__
                                                  );
                                        if (pCVar5 != (ColorAttribute *)0x0) {
                                          (*(code *)(pCVar5->klass->vtable).Initialize_1.method)
                                                    (pCVar5,(pCVar5->klass->vtable).
                                                            OnSettingsChanged.methodPtr,
                                                     StringLiteral_moonTint,2);
                                          pFVar4 = (this->fields).moonSize;
                                          System.Core.dll::System::Linq::
                                          Enumerable+<CreateCastIterator>c__Iterator0`1[System::
                                          Int32]::
                                          Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32__System_Collections_Generic_IEnumerator_TResult__get_Current
                                                    ((
                                                  Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32_
                                                  *)this,(MethodInfo *)0x0);
                                          pUVar2 = (
                                                  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                                                  *)func_?(TypeInfo__System__Action<float>)
                                          ;
                                          UnityEngine.CoreModule.dll::UnityEngine::Events::
                                          UnityAction`2[UnityEngine::SceneManagement::
                                          Scene,UnityEngine::SceneManagement::Scene]::
                                          UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                                                    (pUVar2,(Object *)this,
                                                                                                          
                                                  MethodInfo__CloudyThemeBase___InitializeAttributes_m__12_float_
                                                  ,
                                                  MethodInfo__System__Action<float>__Action_System__Object__void__
                                                  );
                                          if (pFVar4 != (FloatAttribute *)0x0) {
                                            (*(code *)(pFVar4->klass->vtable).Initialize_1.method)
                                                      (pFVar4,(pFVar4->klass->vtable).
                                                              OnSettingsChanged.methodPtr,
                                                       StringLiteral_moonSize,0);
                                            pFVar4 = (this->fields).moonHeight;
                                            System.Core.dll::System::Linq::
                                            Enumerable+<CreateCastIterator>c__Iterator0`1[System::
                                            Int32]::
                                            Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32__System_Collections_Generic_IEnumerator_TResult__get_Current
                                                      ((
                                                  Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32_
                                                  *)this,(MethodInfo *)0x0);
                                            pUVar2 = (
                                                  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                                                  *)func_?(TypeInfo__System__Action<float>)
                                            ;
                                            UnityEngine.CoreModule.dll::UnityEngine::Events::
                                            UnityAction`2[UnityEngine::SceneManagement::
                                            Scene,UnityEngine::SceneManagement::Scene]::
                                            UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                                                      (pUVar2,(Object *)this,
                                                                                                              
                                                  MethodInfo__CloudyThemeBase___InitializeAttributes_m__13_float_
                                                  ,
                                                  MethodInfo__System__Action<float>__Action_System__Object__void__
                                                  );
                                            if (pFVar4 != (FloatAttribute *)0x0) {
                                              (*(code *)(pFVar4->klass->vtable).Initialize_1.method)
                                                        (pFVar4,(pFVar4->klass->vtable).
                                                                OnSettingsChanged.methodPtr,
                                                         StringLiteral_moonHeight,2);
                                              pFVar4 = (this->fields).moonAxis;
                                              System.Core.dll::System::Linq::
                                              Enumerable+<CreateCastIterator>c__Iterator0`1[System::
                                              Int32]::
                                              Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32__System_Collections_Generic_IEnumerator_TResult__get_Current
                                                        ((
                                                  Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32_
                                                  *)this,(MethodInfo *)0x0);
                                              pUVar2 = (
                                                  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                                                  *)func_?(TypeInfo__System__Action<float>)
                                              ;
                                              UnityEngine.CoreModule.dll::UnityEngine::Events::
                                              UnityAction`2[UnityEngine::SceneManagement::
                                              Scene,UnityEngine::SceneManagement::Scene]::
                                              UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                                                        (pUVar2,(Object *)this,
                                                                                                                  
                                                  MethodInfo__CloudyThemeBase___InitializeAttributes_m__14_float_
                                                  ,
                                                  MethodInfo__System__Action<float>__Action_System__Object__void__
                                                  );
                                              if (pFVar4 != (FloatAttribute *)0x0) {
                                                (*(code *)(pFVar4->klass->vtable).Initialize_1.
                                                          method)(pFVar4,(pFVar4->klass->vtable).
                                                                         OnSettingsChanged.methodPtr
                                                                  ,StringLiteral_moonAxis,2);
                                                pFVar4 = (this->fields).moonAltitude;
                                                System.Core.dll::System::Linq::
                                                Enumerable+<CreateCastIterator>c__Iterator0`1[System
                                                ::Int32]::
                                                Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32__System_Collections_Generic_IEnumerator_TResult__get_Current
                                                          ((
                                                  Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32_
                                                  *)this,(MethodInfo *)0x0);
                                                pUVar2 = (
                                                  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                                                  *)func_?(TypeInfo__System__Action<float>)
                                                ;
                                                UnityEngine.CoreModule.dll::UnityEngine::Events::
                                                UnityAction`2[UnityEngine::SceneManagement::
                                                Scene,UnityEngine::SceneManagement::Scene]::
                                                UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                                                          (pUVar2,(Object *)this,
                                                                                                                      
                                                  MethodInfo__CloudyThemeBase___InitializeAttributes_m__15_float_
                                                  ,
                                                  MethodInfo__System__Action<float>__Action_System__Object__void__
                                                  );
                                                if (pFVar4 != (FloatAttribute *)0x0) {
                                                  (*(code *)(pFVar4->klass->vtable).Initialize_1.
                                                            method)(pFVar4,(pFVar4->klass->vtable).
                                                                           OnSettingsChanged.
                                                                           methodPtr,
                                                                    StringLiteral_moonAltitude,1);
                                                  pFVar4 = (this->fields).moonLongitude;
                                                  System.Core.dll::System::Linq::
                                                  Enumerable+<CreateCastIterator>c__Iterator0`1[System
                                                  ::Int32]::
                                                  Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32__System_Collections_Generic_IEnumerator_TResult__get_Current
                                                            ((
                                                  Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32_
                                                  *)this,(MethodInfo *)0x0);
                                                  pUVar2 = (
                                                  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                                                  *)func_?(TypeInfo__System__Action<float>)
                                                  ;
                                                  UnityEngine.CoreModule.dll::UnityEngine::Events::
                                                  UnityAction`2[UnityEngine::SceneManagement::
                                                  Scene,UnityEngine::SceneManagement::Scene]::
                                                  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                                                            (pUVar2,(Object *)this,
                                                                                                                          
                                                  MethodInfo__CloudyThemeBase___InitializeAttributes_m__16_float_
                                                  ,
                                                  MethodInfo__System__Action<float>__Action_System__Object__void__
                                                  );
                                                  if (pFVar4 != (FloatAttribute *)0x0) {
                                                    (*(code *)(pFVar4->klass->vtable).Initialize_1.
                                                              method)(pFVar4,(pFVar4->klass->vtable)
                                                                             .OnSettingsChanged.
                                                                             methodPtr,
                                                                      StringLiteral_moonLongitude,1)
                                                    ;
                                                    pFVar4 = (this->fields).moonLightContrast;
                                                    System.Core.dll::System::Linq::
                                                                                                        
                                                  Enumerable+<CreateCastIterator>c__Iterator0`1[System
                                                  ::Int32]::
                                                  Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32__System_Collections_Generic_IEnumerator_TResult__get_Current
                                                            ((
                                                  Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32_
                                                  *)this,(MethodInfo *)0x0);
                                                  pUVar2 = (
                                                  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                                                  *)func_?(TypeInfo__System__Action<float>)
                                                  ;
                                                  UnityEngine.CoreModule.dll::UnityEngine::Events::
                                                  UnityAction`2[UnityEngine::SceneManagement::
                                                  Scene,UnityEngine::SceneManagement::Scene]::
                                                  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                                                            (pUVar2,(Object *)this,
                                                                                                                          
                                                  MethodInfo__CloudyThemeBase___InitializeAttributes_m__17_float_
                                                  ,
                                                  MethodInfo__System__Action<float>__Action_System__Object__void__
                                                  );
                                                  if (pFVar4 != (FloatAttribute *)0x0) {
                                                    (*(code *)(pFVar4->klass->vtable).Initialize_1.
                                                              method)(pFVar4,(pFVar4->klass->vtable)
                                                                             .OnSettingsChanged.
                                                                             methodPtr,
                                                                                                                                            
                                                  StringLiteral_moonLightContrast,2);
                                                  pFVar4 = (this->fields).moonLightIntensity;
                                                  System.Core.dll::System::Linq::
                                                  Enumerable+<CreateCastIterator>c__Iterator0`1[System
                                                  ::Int32]::
                                                  Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32__System_Collections_Generic_IEnumerator_TResult__get_Current
                                                            ((
                                                  Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32_
                                                  *)this,(MethodInfo *)0x0);
                                                  pUVar2 = (
                                                  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                                                  *)func_?(TypeInfo__System__Action<float>)
                                                  ;
                                                  UnityEngine.CoreModule.dll::UnityEngine::Events::
                                                  UnityAction`2[UnityEngine::SceneManagement::
                                                  Scene,UnityEngine::SceneManagement::Scene]::
                                                  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                                                            (pUVar2,(Object *)this,
                                                                                                                          
                                                  MethodInfo__CloudyThemeBase___InitializeAttributes_m__18_float_
                                                  ,
                                                  MethodInfo__System__Action<float>__Action_System__Object__void__
                                                  );
                                                  if (pFVar4 != (FloatAttribute *)0x0) {
                                                    (*(code *)(pFVar4->klass->vtable).Initialize_1.
                                                              method)(pFVar4,(pFVar4->klass->vtable)
                                                                             .OnSettingsChanged.
                                                                             methodPtr,
                                                                                                                                            
                                                  StringLiteral_moonLightIntensity,2);
                                                  pFVar4 = (this->fields).moonFlareBrightness;
                                                  System.Core.dll::System::Linq::
                                                  Enumerable+<CreateCastIterator>c__Iterator0`1[System
                                                  ::Int32]::
                                                  Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32__System_Collections_Generic_IEnumerator_TResult__get_Current
                                                            ((
                                                  Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32_
                                                  *)this,(MethodInfo *)0x0);
                                                  pUVar2 = (
                                                  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                                                  *)func_?(TypeInfo__System__Action<float>)
                                                  ;
                                                  UnityEngine.CoreModule.dll::UnityEngine::Events::
                                                  UnityAction`2[UnityEngine::SceneManagement::
                                                  Scene,UnityEngine::SceneManagement::Scene]::
                                                  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                                                            (pUVar2,(Object *)this,
                                                                                                                          
                                                  MethodInfo__CloudyThemeBase___InitializeAttributes_m__19_float_
                                                  ,
                                                  MethodInfo__System__Action<float>__Action_System__Object__void__
                                                  );
                                                  if (pFVar4 != (FloatAttribute *)0x0) {
                                                    (*(code *)(pFVar4->klass->vtable).Initialize_1.
                                                              method)(pFVar4,(pFVar4->klass->vtable)
                                                                             .OnSettingsChanged.
                                                                             methodPtr,
                                                                                                                                            
                                                  StringLiteral_moonFlareBrightness,0);
                                                  pFVar4 = (this->fields).cloudsHeight;
                                                  System.Core.dll::System::Linq::
                                                  Enumerable+<CreateCastIterator>c__Iterator0`1[System
                                                  ::Int32]::
                                                  Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32__System_Collections_Generic_IEnumerator_TResult__get_Current
                                                            ((
                                                  Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32_
                                                  *)this,(MethodInfo *)0x0);
                                                  pUVar2 = (
                                                  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                                                  *)func_?(TypeInfo__System__Action<float>)
                                                  ;
                                                  UnityEngine.CoreModule.dll::UnityEngine::Events::
                                                  UnityAction`2[UnityEngine::SceneManagement::
                                                  Scene,UnityEngine::SceneManagement::Scene]::
                                                  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                                                            (pUVar2,(Object *)this,
                                                                                                                          
                                                  MethodInfo__CloudyThemeBase___InitializeAttributes_m__1A_float_
                                                  ,
                                                  MethodInfo__System__Action<float>__Action_System__Object__void__
                                                  );
                                                  if (pFVar4 != (FloatAttribute *)0x0) {
                                                    (*(code *)(pFVar4->klass->vtable).Initialize_1.
                                                              method)(pFVar4,(pFVar4->klass->vtable)
                                                                             .OnSettingsChanged.
                                                                             methodPtr,
                                                                      StringLiteral_cloudsHeight,0);
                                                    pFVar4 = (this->fields).cloudsOffset;
                                                    System.Core.dll::System::Linq::
                                                                                                        
                                                  Enumerable+<CreateCastIterator>c__Iterator0`1[System
                                                  ::Int32]::
                                                  Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32__System_Collections_Generic_IEnumerator_TResult__get_Current
                                                            ((
                                                  Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32_
                                                  *)this,(MethodInfo *)0x0);
                                                  pUVar2 = (
                                                  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                                                  *)func_?(TypeInfo__System__Action<float>)
                                                  ;
                                                  UnityEngine.CoreModule.dll::UnityEngine::Events::
                                                  UnityAction`2[UnityEngine::SceneManagement::
                                                  Scene,UnityEngine::SceneManagement::Scene]::
                                                  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                                                            (pUVar2,(Object *)this,
                                                                                                                          
                                                  MethodInfo__CloudyThemeBase___InitializeAttributes_m__1B_float_
                                                  ,
                                                  MethodInfo__System__Action<float>__Action_System__Object__void__
                                                  );
                                                  if (pFVar4 != (FloatAttribute *)0x0) {
                                                    (*(code *)(pFVar4->klass->vtable).Initialize_1.
                                                              method)(pFVar4,(pFVar4->klass->vtable)
                                                                             .OnSettingsChanged.
                                                                             methodPtr,
                                                                      StringLiteral_cloudsOffset,0);
                                                    pFVar4 = (this->fields).cloudsRotationSpeed;
                                                    System.Core.dll::System::Linq::
                                                                                                        
                                                  Enumerable+<CreateCastIterator>c__Iterator0`1[System
                                                  ::Int32]::
                                                  Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32__System_Collections_Generic_IEnumerator_TResult__get_Current
                                                            ((
                                                  Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32_
                                                  *)this,(MethodInfo *)0x0);
                                                  pUVar2 = (
                                                  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                                                  *)func_?(TypeInfo__System__Action<float>)
                                                  ;
                                                  UnityEngine.CoreModule.dll::UnityEngine::Events::
                                                  UnityAction`2[UnityEngine::SceneManagement::
                                                  Scene,UnityEngine::SceneManagement::Scene]::
                                                  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                                                            (pUVar2,(Object *)this,
                                                                                                                          
                                                  MethodInfo__CloudyThemeBase___InitializeAttributes_m__1C_float_
                                                  ,
                                                  MethodInfo__System__Action<float>__Action_System__Object__void__
                                                  );
                                                  if (pFVar4 != (FloatAttribute *)0x0) {
                                                    (*(code *)(pFVar4->klass->vtable).Initialize_1.
                                                              method)(pFVar4,(pFVar4->klass->vtable)
                                                                             .OnSettingsChanged.
                                                                             methodPtr,
                                                                                                                                            
                                                  StringLiteral_cloudsRotationSpeed,0);
                                                  pBVar1 = (this->fields).useFog;
                                                  System.Core.dll::System::Linq::
                                                  Enumerable+<CreateCastIterator>c__Iterator0`1[System
                                                  ::Int32]::
                                                  Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32__System_Collections_Generic_IEnumerator_TResult__get_Current
                                                            ((
                                                  Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32_
                                                  *)this,(MethodInfo *)0x0);
                                                  pUVar2 = (
                                                  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                                                  *)func_?(TypeInfo__System__Action<bool>);
                                                  UnityEngine.CoreModule.dll::UnityEngine::Events::
                                                  UnityAction`2[UnityEngine::SceneManagement::
                                                  Scene,UnityEngine::SceneManagement::Scene]::
                                                  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                                                            (pUVar2,(Object *)this,
                                                                                                                          
                                                  MethodInfo__CloudyThemeBase__ToggleFog_bool_,
                                                  MethodInfo__System__Action<bool>__Action_System__Object__void__
                                                  );
                                                  if (pBVar1 != (BoolAttribute *)0x0) {
                                                    (*(code *)(pBVar1->klass->vtable).Initialize_1.
                                                              method)(pBVar1,(pBVar1->klass->vtable)
                                                                             .OnSettingsChanged.
                                                                             methodPtr,
                                                                      StringLiteral_useFog,0);
                                                    pFVar4 = (this->fields).fogDensity;
                                                    System.Core.dll::System::Linq::
                                                                                                        
                                                  Enumerable+<CreateCastIterator>c__Iterator0`1[System
                                                  ::Int32]::
                                                  Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32__System_Collections_Generic_IEnumerator_TResult__get_Current
                                                            ((
                                                  Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32_
                                                  *)this,(MethodInfo *)0x0);
                                                  pUVar2 = (
                                                  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                                                  *)func_?(TypeInfo__System__Action<float>)
                                                  ;
                                                  UnityEngine.CoreModule.dll::UnityEngine::Events::
                                                  UnityAction`2[UnityEngine::SceneManagement::
                                                  Scene,UnityEngine::SceneManagement::Scene]::
                                                  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                                                            (pUVar2,(Object *)this,
                                                                                                                          
                                                  MethodInfo__CloudyThemeBase___InitializeAttributes_m__1D_float_
                                                  ,
                                                  MethodInfo__System__Action<float>__Action_System__Object__void__
                                                  );
                                                  if (pFVar4 != (FloatAttribute *)0x0) {
                                                    (*(code *)(pFVar4->klass->vtable).Initialize_1.
                                                              method)(pFVar4,(pFVar4->klass->vtable)
                                                                             .OnSettingsChanged.
                                                                             methodPtr,
                                                                      StringLiteral_fogDensity,0x10)
                                                    ;
                                                    pFVar4 = (this->fields).exposure;
                                                    System.Core.dll::System::Linq::
                                                                                                        
                                                  Enumerable+<CreateCastIterator>c__Iterator0`1[System
                                                  ::Int32]::
                                                  Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32__System_Collections_Generic_IEnumerator_TResult__get_Current
                                                            ((
                                                  Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32_
                                                  *)this,(MethodInfo *)0x0);
                                                  pUVar2 = (
                                                  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene_
                                                  *)func_?(TypeInfo__System__Action<float>)
                                                  ;
                                                  UnityEngine.CoreModule.dll::UnityEngine::Events::
                                                  UnityAction`2[UnityEngine::SceneManagement::
                                                  Scene,UnityEngine::SceneManagement::Scene]::
                                                  UnityAction_2_UnityEngine_SceneManagement_Scene_UnityEngine_SceneManagement_Scene___ctor
                                                            (pUVar2,(Object *)this,
                                                                                                                          
                                                  MethodInfo__CloudyThemeBase___InitializeAttributes_m__1E_float_
                                                  ,
                                                  MethodInfo__System__Action<float>__Action_System__Object__void__
                                                  );
                                                  if (pFVar4 != (FloatAttribute *)0x0) {
                                                    (*(code *)(pFVar4->klass->vtable).Initialize_1.
                                                              method)(pFVar4,(pFVar4->klass->vtable)
                                                                             .OnSettingsChanged.
                                                                             methodPtr,
                                                                      StringLiteral_exposure,0);
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
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Void InitializeComponents() */

void Assembly-CSharp.dll::CloudyThemeBase::CloudyThemeBase_InitializeComponents
               (CloudyThemeBase *this,MethodInfo *method)

{
  this_00 = (this->fields).skybox;
  if (this_00 != (ThemeSkybox *)0x0) {
    ThemeComponent::ThemeComponent_Initialize
              ((ThemeComponent *)this_00,(Theme *)this,(MethodInfo *)0x0);
    if ((this->fields).dayNightCycle != (DayNightCycle *)0x0) {
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
      }
      fVar1 = (in_stack_2->fields)._sunrise;
      fVar3 = (in_stack_2->fields)._sunset;
      if (fVar1 < fVar3) {
        fVar3 = fVar3 - fVar1;
      }
      else {
        fVar3 = (_UNK_? - fVar1) + fVar3;
      }
      (in_stack_2->fields)._sunDuration = fVar3;
      DayNightCycle::DayNightCycle_RecalcSunAltitudeVector(in_stack_2,(MethodInfo *)0x0);
      fVar1 = (in_stack_2->fields)._moonrise;
      fVar3 = (in_stack_2->fields)._moonset;
      if (fVar1 < fVar3) {
        fVar3 = fVar3 - fVar1;
      }
      else {
        fVar3 = (_UNK_? - fVar1) + fVar3;
      }
      (in_stack_2->fields)._moonDuration = fVar3;
      DayNightCycle::DayNightCycle_RecalcMoonAltitudeVector(in_stack_2,(MethodInfo *)0x0);
      if ((in_stack_2->fields).activeColorPreset == (DayNightCycleColorPresets_Preset *)0x0)
      {
        this_01 = (in_stack_2->fields).colorPresets;
        if (this_01 == (DayNightCycleColorPresets *)0x0) {
          func_?();
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pDVar5 = DayNightCycleColorPresets::DayNightCycleColorPresets_get_Item
                           (this_01,0,(MethodInfo *)0x0);
        (in_stack_2->fields).activeColorPreset = pDVar5;
      }
      if ((in_stack_2->fields).useServerTime == 0) {
        fVar1 = (in_stack_2->fields).cycleLength;
        this_02 = (Timer_1 *)func_?();
        fVar6 = (float10)func_?();
        ThemeTimers::Timer::Timer_1__ctor(this_02,(float)fVar6,fVar1,(MethodInfo *)(float)fVar6);
        (in_stack_2->fields).timer = (ITimer *)this_02;
        (in_stack_2->fields).initialized = 1;
        return;
      }
      this_03 = (WinningConditionDebriefing_WaitForFadeOut_c_Iterator1 *)func_?();
      WinningConditionDebriefing+<WaitForFadeOut>c__Iterator1::
      WinningConditionDebriefing_WaitForFadeOut_c_Iterator1__ctor(this_03,(MethodInfo *)0x0);
      (in_stack_2->fields).timer = (ITimer *)this_03;
      (in_stack_2->fields).initialized = 1;
      return;
    }
  }
  func_?();
  pcVar4 = (code *)swi(3);
  (*pcVar4)();
  return;
}


/* Void ThemeReset() */

void Assembly-CSharp.dll::CloudyThemeBase::CloudyThemeBase_ThemeReset
               (CloudyThemeBase *this,MethodInfo *method)

{
  ScaleAnimationBase::ScaleAnimationBase_Play((ScaleAnimationBase *)this,0.0,unaff_ESI);
  if ((this->fields).dayNightCycle != (DayNightCycle *)0x0) {
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    if (*(char *)(in_stack_1 + 100) == '\0') {
      initialTime = *(float *)(in_stack_1 + 0x70);
      cycleLength = *(float *)(in_stack_1 + 0x68);
      this_00 = (Timer_1 *)func_?(TypeInfo__ThemeTimers__Timer,unaff_retaddr);
      ThemeTimers::Timer::Timer_1__ctor(this_00,initialTime,cycleLength,(MethodInfo *)0x0);
      *(Timer_1 **)(in_stack_1 + 0x6c) = this_00;
    }
    return;
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void ToggleDayNightCycle(Boolean) */

void Assembly-CSharp.dll::CloudyThemeBase::CloudyThemeBase_ToggleDayNightCycle
               (CloudyThemeBase *this,bool b,MethodInfo *method)

{
  this_00 = (this->fields).dayNightCycle;
  if (this_00 != (DayNightCycle *)0x0) {
    CStack_1.fields.syncRoot = (Object *)&UNK_?;
    UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
              ((Behaviour *)this_00,b,(MethodInfo *)0x0);
    this_01 = (SettingsWrapper *)
              System.Core.dll::System::Linq::Enumerable+<CreateCastIterator>c__Iterator0`1[System::
              Int32]::
              Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32__System_Collections_Generic_IEnumerator_TResult__get_Current
                        ((Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32_ *)this,
                         (MethodInfo *)0x0);
    if (b == 0) {
      if (this_01 == (SettingsWrapper *)0x0) goto code_?;
      ThemeSettings::SettingsWrapper::SettingsWrapper_DisableAttributeGroups
                (this_01,1,(MethodInfo *)0x0);
      iVar2 = System.Core.dll::System::Linq::Enumerable+<CreateCastIterator>c__Iterator0`1[System::
              Int32]::
              Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32__System_Collections_Generic_IEnumerator_TResult__get_Current
                        ((Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32_ *)this,
                         (MethodInfo *)0x0);
    }
    else {
      if (this_01 == (SettingsWrapper *)0x0) goto code_?;
      ThemeSettings::SettingsWrapper::SettingsWrapper_DisableAttributeGroups
                (this_01,2,(MethodInfo *)0x0);
      iVar2 = System.Core.dll::System::Linq::Enumerable+<CreateCastIterator>c__Iterator0`1[System::
              Int32]::
              Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32__System_Collections_Generic_IEnumerator_TResult__get_Current
                        ((Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32_ *)this,
                         (MethodInfo *)0x0);
    }
    if (iVar2 != 0) {
      uStack3 = 0;
      in_stack_4 = in_stack_4 | *(uint *)(in_stack_5 + 0x10);
      uStack6 = 0xffffffff;
      puStack7 = &DAT_?;
      puStack8 = (undefined *)*unaff_FS_OFFSET;
      *unaff_FS_OFFSET = &stack0x00000018;
      puStack9 = &stack0xffffffc0;
      puVar10 = &stack0xffffffc0;
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
        puVar10 = puStack9;
      }
      puStack9 = puVar10;
      CStack_1.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)0x0;
      CStack_1.monitor = (MonitorData *)0x0;
      CStack_1.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0;
      CStack_1.fields.syncRoot = (Object *)0x0;
      func_?();
      piStack11 = (int *)&stack0xffffffc0;
      puStack9 = &stack0xffffffc0;
      this_02 = (List_1_UnityEngine_Color32_ *)
                func_?(
                               TypeInfo__System__Collections__Generic__List<ThemeAttributes::ThemeAttribute>
                               );
      mscorlib.dll::System::Collections::Generic::List`1[ThemeAttributes::ThemeAttribute]::
      List_1_ThemeAttributes_ThemeAttribute___ctor
                ((List_1_ThemeAttributes_ThemeAttribute_ *)this_02,2,
                 MethodInfo__System__Collections__Generic__List<ThemeAttributes::ThemeAttribute>__List_int_
                );
      if (*(List_1_UnityEngine_Color32_ **)(in_stack_5 + 0xc) !=
          (List_1_UnityEngine_Color32_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
        List_1_UnityEngine_Color32__GetEnumerator
                  ((List_1_T_Enumerator_UnityEngine_Color32_ *)&stack0xffffffcc,
                   *(List_1_UnityEngine_Color32_ **)(in_stack_5 + 0xc),
                   MethodInfo__System__Collections__Generic__List<ThemeAttributes::ThemeAttribute>__GetEnumerator__
                  );
        uStack6 = 0;
        while (cVar12 = func_?(), cVar12 != '\0') {
          pOVar13 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                   Serialization::JsonProperty]::
                   Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                             ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                              &stack0xffffffec,
                              MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ThemeAttributes::ThemeAttribute>__get_Current__
                             );
          if (pOVar13 == (Object *)0x0) goto code_?;
          if (((MonitorData *)((uint)pOVar13[1].monitor & *(uint *)(in_stack_5 + 0x10)) !=
               pOVar13[1].monitor) &&
             ((MonitorData *)((uint)pOVar13[1].monitor & in_stack_4) == pOVar13[1].monitor)) {
            if (this_02 == (List_1_UnityEngine_Color32_ *)0x0) goto code_?;
            mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::
            List_1_UIPushOption__Add
                      ((List_1_UIPushOption_ *)this_02,(UIPushOption__Enum)pOVar13,
                       MethodInfo__System__Collections__Generic__List<ThemeAttributes::ThemeAttribute>__Add_ThemeAttributes__ThemeAttribute_
                      );
          }
        }
        iVar2 = 0;
        *piStack11 = 0x7b;
        uStack6 = 0xffffffff;
        func_?();
        if (*piStack11 == 0x7b) {
          iVar2 = -1;
        }
        *(uint *)(in_stack_5 + 0x10) = in_stack_4;
        if (this_02 != (List_1_UnityEngine_Color32_ *)0x0) {
          pLVar14 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
                   List_1_UnityEngine_Color32__GetEnumerator
                             ((List_1_T_Enumerator_UnityEngine_Color32_ *)&stack0xffffffcc,this_02,
                              MethodInfo__System__Collections__Generic__List<ThemeAttributes::ThemeAttribute>__GetEnumerator__
                             );
          CStack_1.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar14->ver
          ;
          CStack_1.fields.syncRoot = (Object *)(pLVar14->current).rgba;
          uStack6 = 2;
          while( true ) {
            CStack_1.monitor =
                 (MonitorData *)
                 MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ThemeAttributes::ThemeAttribute>__MoveNext__
            ;
            CStack_1.klass =
                 (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)&CStack_1;
            cVar12 = func_?();
            if (cVar12 == '\0') {
              piStack11[iVar2 + 1] = 0xbe;
              uStack6 = 0xffffffff;
              func_?();
              if (*(int *)(in_stack_5 + 0x14) != 0) {
                func_?();
              }
              *unaff_FS_OFFSET = puStack8;
              return;
            }
            pOVar13 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                     Serialization::JsonProperty]::
                     Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                               (&CStack_1,
                                MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ThemeAttributes::ThemeAttribute>__get_Current__
                               );
            if (pOVar13 == (Object *)0x0) break;
            (**(code **)&pOVar13->klass[1]._0.byval_arg.attrs)();
          }
        }
      }
code_?:
      func_?();
      func_?();
      func_?();
      pcVar15 = (code *)swi(3);
      (*pcVar15)();
      return;
    }
  }
code_?:
  puStack7 = (undefined *)0x0;
  func_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void ToggleDayNightCycleUseServerTime(Boolean) */

void Assembly-CSharp.dll::CloudyThemeBase::CloudyThemeBase_ToggleDayNightCycleUseServerTime
               (CloudyThemeBase *this,bool b,MethodInfo *method)

{
  this_00 = (this->fields).dayNightCycle;
  if (this_00 != (DayNightCycle *)0x0) {
    CStack_1.fields.syncRoot = (Object *)&UNK_?;
    DayNightCycle::DayNightCycle_set_UseServerTime(this_00,b,(MethodInfo *)0x0);
    this_01 = (SettingsWrapper *)
              System.Core.dll::System::Linq::Enumerable+<CreateCastIterator>c__Iterator0`1[System::
              Int32]::
              Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32__System_Collections_Generic_IEnumerator_TResult__get_Current
                        ((Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32_ *)this,
                         (MethodInfo *)0x0);
    if (b == 0) {
      if (this_01 == (SettingsWrapper *)0x0) goto code_?;
      ThemeSettings::SettingsWrapper::SettingsWrapper_DisableAttributeGroups
                (this_01,4,(MethodInfo *)0x0);
      iVar2 = System.Core.dll::System::Linq::Enumerable+<CreateCastIterator>c__Iterator0`1[System::
              Int32]::
              Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32__System_Collections_Generic_IEnumerator_TResult__get_Current
                        ((Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32_ *)this,
                         (MethodInfo *)0x0);
    }
    else {
      if (this_01 == (SettingsWrapper *)0x0) goto code_?;
      ThemeSettings::SettingsWrapper::SettingsWrapper_DisableAttributeGroups
                (this_01,8,(MethodInfo *)0x0);
      iVar2 = System.Core.dll::System::Linq::Enumerable+<CreateCastIterator>c__Iterator0`1[System::
              Int32]::
              Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32__System_Collections_Generic_IEnumerator_TResult__get_Current
                        ((Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32_ *)this,
                         (MethodInfo *)0x0);
    }
    if (iVar2 != 0) {
      uStack3 = 0;
      in_stack_4 = in_stack_4 | *(uint *)(in_stack_5 + 0x10);
      uStack6 = 0xffffffff;
      puStack7 = &DAT_?;
      puStack8 = (undefined *)*unaff_FS_OFFSET;
      *unaff_FS_OFFSET = &stack0x00000018;
      puStack9 = &stack0xffffffc0;
      puVar10 = &stack0xffffffc0;
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
        puVar10 = puStack9;
      }
      puStack9 = puVar10;
      CStack_1.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)0x0;
      CStack_1.monitor = (MonitorData *)0x0;
      CStack_1.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0;
      CStack_1.fields.syncRoot = (Object *)0x0;
      func_?();
      piStack11 = (int *)&stack0xffffffc0;
      puStack9 = &stack0xffffffc0;
      this_02 = (List_1_UnityEngine_Color32_ *)
                func_?(
                               TypeInfo__System__Collections__Generic__List<ThemeAttributes::ThemeAttribute>
                               );
      mscorlib.dll::System::Collections::Generic::List`1[ThemeAttributes::ThemeAttribute]::
      List_1_ThemeAttributes_ThemeAttribute___ctor
                ((List_1_ThemeAttributes_ThemeAttribute_ *)this_02,2,
                 MethodInfo__System__Collections__Generic__List<ThemeAttributes::ThemeAttribute>__List_int_
                );
      if (*(List_1_UnityEngine_Color32_ **)(in_stack_5 + 0xc) !=
          (List_1_UnityEngine_Color32_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
        List_1_UnityEngine_Color32__GetEnumerator
                  ((List_1_T_Enumerator_UnityEngine_Color32_ *)&stack0xffffffcc,
                   *(List_1_UnityEngine_Color32_ **)(in_stack_5 + 0xc),
                   MethodInfo__System__Collections__Generic__List<ThemeAttributes::ThemeAttribute>__GetEnumerator__
                  );
        uStack6 = 0;
        while (cVar12 = func_?(), cVar12 != '\0') {
          pOVar13 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                   Serialization::JsonProperty]::
                   Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                             ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                              &stack0xffffffec,
                              MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ThemeAttributes::ThemeAttribute>__get_Current__
                             );
          if (pOVar13 == (Object *)0x0) goto code_?;
          if (((MonitorData *)((uint)pOVar13[1].monitor & *(uint *)(in_stack_5 + 0x10)) !=
               pOVar13[1].monitor) &&
             ((MonitorData *)((uint)pOVar13[1].monitor & in_stack_4) == pOVar13[1].monitor)) {
            if (this_02 == (List_1_UnityEngine_Color32_ *)0x0) goto code_?;
            mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::
            List_1_UIPushOption__Add
                      ((List_1_UIPushOption_ *)this_02,(UIPushOption__Enum)pOVar13,
                       MethodInfo__System__Collections__Generic__List<ThemeAttributes::ThemeAttribute>__Add_ThemeAttributes__ThemeAttribute_
                      );
          }
        }
        iVar2 = 0;
        *piStack11 = 0x7b;
        uStack6 = 0xffffffff;
        func_?();
        if (*piStack11 == 0x7b) {
          iVar2 = -1;
        }
        *(uint *)(in_stack_5 + 0x10) = in_stack_4;
        if (this_02 != (List_1_UnityEngine_Color32_ *)0x0) {
          pLVar14 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
                   List_1_UnityEngine_Color32__GetEnumerator
                             ((List_1_T_Enumerator_UnityEngine_Color32_ *)&stack0xffffffcc,this_02,
                              MethodInfo__System__Collections__Generic__List<ThemeAttributes::ThemeAttribute>__GetEnumerator__
                             );
          CStack_1.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar14->ver
          ;
          CStack_1.fields.syncRoot = (Object *)(pLVar14->current).rgba;
          uStack6 = 2;
          while( true ) {
            CStack_1.monitor =
                 (MonitorData *)
                 MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ThemeAttributes::ThemeAttribute>__MoveNext__
            ;
            CStack_1.klass =
                 (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)&CStack_1;
            cVar12 = func_?();
            if (cVar12 == '\0') {
              piStack11[iVar2 + 1] = 0xbe;
              uStack6 = 0xffffffff;
              func_?();
              if (*(int *)(in_stack_5 + 0x14) != 0) {
                func_?();
              }
              *unaff_FS_OFFSET = puStack8;
              return;
            }
            pOVar13 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                     Serialization::JsonProperty]::
                     Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                               (&CStack_1,
                                MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ThemeAttributes::ThemeAttribute>__get_Current__
                               );
            if (pOVar13 == (Object *)0x0) break;
            (**(code **)&pOVar13->klass[1]._0.byval_arg.attrs)();
          }
        }
      }
code_?:
      func_?();
      func_?();
      func_?();
      pcVar15 = (code *)swi(3);
      (*pcVar15)();
      return;
    }
  }
code_?:
  puStack7 = (undefined *)0x0;
  func_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void ToggleFog(Boolean) */

void Assembly-CSharp.dll::CloudyThemeBase::CloudyThemeBase_ToggleFog
               (CloudyThemeBase *this,bool b,MethodInfo *method)

{
  this_00 = (this->fields).skybox;
  if (this_00 != (ThemeSkybox *)0x0) {
    CStack_1.fields.syncRoot = (Object *)&UNK_?;
    ThemeSkybox::ThemeSkybox_set_FogEnabled(this_00,b,(MethodInfo *)0x0);
    this_01 = (SettingsWrapper *)
              System.Core.dll::System::Linq::Enumerable+<CreateCastIterator>c__Iterator0`1[System::
              Int32]::
              Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32__System_Collections_Generic_IEnumerator_TResult__get_Current
                        ((Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32_ *)this,
                         (MethodInfo *)0x0);
    if (b == 0) {
      if (this_01 == (SettingsWrapper *)0x0) goto code_?;
      ThemeSettings::SettingsWrapper::SettingsWrapper_DisableAttributeGroups
                (this_01,0x10,(MethodInfo *)0x0);
      iVar2 = System.Core.dll::System::Linq::Enumerable+<CreateCastIterator>c__Iterator0`1[System::
              Int32]::
              Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32__System_Collections_Generic_IEnumerator_TResult__get_Current
                        ((Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32_ *)this,
                         (MethodInfo *)0x0);
    }
    else {
      if (this_01 == (SettingsWrapper *)0x0) goto code_?;
      ThemeSettings::SettingsWrapper::SettingsWrapper_DisableAttributeGroups
                (this_01,0x20,(MethodInfo *)0x0);
      iVar2 = System.Core.dll::System::Linq::Enumerable+<CreateCastIterator>c__Iterator0`1[System::
              Int32]::
              Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32__System_Collections_Generic_IEnumerator_TResult__get_Current
                        ((Enumerable_CreateCastIterator_c_Iterator0_1_System_Int32_ *)this,
                         (MethodInfo *)0x0);
    }
    if (iVar2 != 0) {
      uStack3 = 0;
      in_stack_4 = in_stack_4 | *(uint *)(in_stack_5 + 0x10);
      uStack6 = 0xffffffff;
      puStack7 = &DAT_?;
      puStack8 = (undefined *)*unaff_FS_OFFSET;
      *unaff_FS_OFFSET = &stack0x00000018;
      puStack9 = &stack0xffffffc0;
      puVar10 = &stack0xffffffc0;
      if (cRam_? == '\0') {
        func_?(_UNK_?);
        cRam_? = '\x01';
        puVar10 = puStack9;
      }
      puStack9 = puVar10;
      CStack_1.klass = (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)0x0;
      CStack_1.monitor = (MonitorData *)0x0;
      CStack_1.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)0x0;
      CStack_1.fields.syncRoot = (Object *)0x0;
      func_?();
      piStack11 = (int *)&stack0xffffffc0;
      puStack9 = &stack0xffffffc0;
      this_02 = (List_1_UnityEngine_Color32_ *)
                func_?(
                               TypeInfo__System__Collections__Generic__List<ThemeAttributes::ThemeAttribute>
                               );
      mscorlib.dll::System::Collections::Generic::List`1[ThemeAttributes::ThemeAttribute]::
      List_1_ThemeAttributes_ThemeAttribute___ctor
                ((List_1_ThemeAttributes_ThemeAttribute_ *)this_02,2,
                 MethodInfo__System__Collections__Generic__List<ThemeAttributes::ThemeAttribute>__List_int_
                );
      if (*(List_1_UnityEngine_Color32_ **)(in_stack_5 + 0xc) !=
          (List_1_UnityEngine_Color32_ *)0x0) {
        mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
        List_1_UnityEngine_Color32__GetEnumerator
                  ((List_1_T_Enumerator_UnityEngine_Color32_ *)&stack0xffffffcc,
                   *(List_1_UnityEngine_Color32_ **)(in_stack_5 + 0xc),
                   MethodInfo__System__Collections__Generic__List<ThemeAttributes::ThemeAttribute>__GetEnumerator__
                  );
        uStack6 = 0;
        while (cVar12 = func_?(), cVar12 != '\0') {
          pOVar13 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                   Serialization::JsonProperty]::
                   Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                             ((Collection_1_Newtonsoft_Json_Serialization_JsonProperty_ *)
                              &stack0xffffffec,
                              MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ThemeAttributes::ThemeAttribute>__get_Current__
                             );
          if (pOVar13 == (Object *)0x0) goto code_?;
          if (((MonitorData *)((uint)pOVar13[1].monitor & *(uint *)(in_stack_5 + 0x10)) !=
               pOVar13[1].monitor) &&
             ((MonitorData *)((uint)pOVar13[1].monitor & in_stack_4) == pOVar13[1].monitor)) {
            if (this_02 == (List_1_UnityEngine_Color32_ *)0x0) goto code_?;
            mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::
            List_1_UIPushOption__Add
                      ((List_1_UIPushOption_ *)this_02,(UIPushOption__Enum)pOVar13,
                       MethodInfo__System__Collections__Generic__List<ThemeAttributes::ThemeAttribute>__Add_ThemeAttributes__ThemeAttribute_
                      );
          }
        }
        iVar2 = 0;
        *piStack11 = 0x7b;
        uStack6 = 0xffffffff;
        func_?();
        if (*piStack11 == 0x7b) {
          iVar2 = -1;
        }
        *(uint *)(in_stack_5 + 0x10) = in_stack_4;
        if (this_02 != (List_1_UnityEngine_Color32_ *)0x0) {
          pLVar14 = mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Color32]::
                   List_1_UnityEngine_Color32__GetEnumerator
                             ((List_1_T_Enumerator_UnityEngine_Color32_ *)&stack0xffffffcc,this_02,
                              MethodInfo__System__Collections__Generic__List<ThemeAttributes::ThemeAttribute>__GetEnumerator__
                             );
          CStack_1.fields.list = (IList_1_Newtonsoft_Json_Serialization_JsonProperty_ *)pLVar14->ver
          ;
          CStack_1.fields.syncRoot = (Object *)(pLVar14->current).rgba;
          uStack6 = 2;
          while( true ) {
            CStack_1.monitor =
                 (MonitorData *)
                 MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ThemeAttributes::ThemeAttribute>__MoveNext__
            ;
            CStack_1.klass =
                 (Collection_1_Newtonsoft_Json_Serialization_JsonProperty___Class *)&CStack_1;
            cVar12 = func_?();
            if (cVar12 == '\0') {
              piStack11[iVar2 + 1] = 0xbe;
              uStack6 = 0xffffffff;
              func_?();
              if (*(int *)(in_stack_5 + 0x14) != 0) {
                func_?();
              }
              *unaff_FS_OFFSET = puStack8;
              return;
            }
            pOVar13 = mscorlib.dll::System::Collections::ObjectModel::Collection`1[Newtonsoft::Json::
                     Serialization::JsonProperty]::
                     Collection_1_Newtonsoft_Json_Serialization_JsonProperty__System_Collections_ICollection_get_SyncRoot
                               (&CStack_1,
                                MethodInfo__System__Collections__Generic__List_1_T___Enumerator<ThemeAttributes::ThemeAttribute>__get_Current__
                               );
            if (pOVar13 == (Object *)0x0) break;
            (**(code **)&pOVar13->klass[1]._0.byval_arg.attrs)();
          }
        }
      }
code_?:
      func_?();
      func_?();
      func_?();
      pcVar15 = (code *)swi(3);
      (*pcVar15)();
      return;
    }
  }
code_?:
  puStack7 = (undefined *)0x0;
  func_?();
  pcVar15 = (code *)swi(3);
  (*pcVar15)();
  return;
}


/* Void <InitializeAttributes>m__0(Int32) */

void Assembly-CSharp.dll::CloudyThemeBase::CloudyThemeBase__InitializeAttributes_m__0
               (CloudyThemeBase *this,int32_t i,MethodInfo *method)

{
  this_00 = (this->fields).dayNightCycle;
  if (this_00 == (DayNightCycle *)0x0) {
    func_?(0);
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_01 = (this_00->fields).colorPresets;
  if (this_01 != (DayNightCycleColorPresets *)0x0) {
    pDVar2 = DayNightCycleColorPresets::DayNightCycleColorPresets_get_Item
                       (this_01,i,(MethodInfo *)0x0);
    (this_00->fields).activeColorPreset = pDVar2;
    if ((this_00->fields).initialized != 0) {
      if ((this_00->fields).timer == (ITimer *)0x0) goto code_?;
      fVar3 = (float10)func_?(0,TypeInfo__ThemeTimers__ITimer);
      DayNightCycle::DayNightCycle_Update_1(this_00,(float)fVar3,(MethodInfo *)0x0);
    }
    return;
  }
code_?:
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <InitializeAttributes>m__1(Single) */

void Assembly-CSharp.dll::CloudyThemeBase::CloudyThemeBase__InitializeAttributes_m__1
               (CloudyThemeBase *this,float f,MethodInfo *method)

{
  this_00 = (this->fields).dayNightCycle;
  if (this_00 != (DayNightCycle *)0x0) {
    DayNightCycle::DayNightCycle_set_InitialTimeOfDay(this_00,f,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <InitializeAttributes>m__10(Single) */

void Assembly-CSharp.dll::CloudyThemeBase::CloudyThemeBase__InitializeAttributes_m__10
               (CloudyThemeBase *this,float f,MethodInfo *method)

{
  this_00 = (this->fields).skybox;
  if (this_00 != (ThemeSkybox *)0x0) {
    ThemeSkybox::ThemeSkybox_set_SunFlareBrightness(this_00,f,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <InitializeAttributes>m__11(Color) */

void Assembly-CSharp.dll::CloudyThemeBase::CloudyThemeBase__InitializeAttributes_m__11
               (CloudyThemeBase *this,Color c,MethodInfo *method)

{
  pTVar1 = (this->fields).skybox;
  if (pTVar1 != (ThemeSkybox *)0x0) {
    ThemeSkybox::ThemeSkybox_set_MoonTint(pTVar1,c,(MethodInfo *)0x0);
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


/* Void <InitializeAttributes>m__12(Single) */

void Assembly-CSharp.dll::CloudyThemeBase::CloudyThemeBase__InitializeAttributes_m__12
               (CloudyThemeBase *this,float f,MethodInfo *method)

{
  this_00 = (this->fields).skybox;
  if (this_00 != (ThemeSkybox *)0x0) {
    ThemeSkybox::ThemeSkybox_set_MoonSize(this_00,f,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <InitializeAttributes>m__13(Single) */

void Assembly-CSharp.dll::CloudyThemeBase::CloudyThemeBase__InitializeAttributes_m__13
               (CloudyThemeBase *this,float f,MethodInfo *method)

{
  pTVar1 = (this->fields).skybox;
  if (pTVar1 != (ThemeSkybox *)0x0) {
    ThemeSkybox::ThemeSkybox_set_MoonHeight(pTVar1,f,(MethodInfo *)0x0);
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


/* Void <InitializeAttributes>m__14(Single) */

void Assembly-CSharp.dll::CloudyThemeBase::CloudyThemeBase__InitializeAttributes_m__14
               (CloudyThemeBase *this,float f,MethodInfo *method)

{
  this_00 = (this->fields).skybox;
  if (this_00 != (ThemeSkybox *)0x0) {
    ThemeSkybox::ThemeSkybox_set_MoonAxisDegrees(this_00,f,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <InitializeAttributes>m__15(Single) */

void Assembly-CSharp.dll::CloudyThemeBase::CloudyThemeBase__InitializeAttributes_m__15
               (CloudyThemeBase *this,float f,MethodInfo *method)

{
  this_00 = (this->fields).dayNightCycle;
  if (this_00 != (DayNightCycle *)0x0) {
    DayNightCycle::DayNightCycle_set_MoonAltitude(this_00,f,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <InitializeAttributes>m__16(Single) */

void Assembly-CSharp.dll::CloudyThemeBase::CloudyThemeBase__InitializeAttributes_m__16
               (CloudyThemeBase *this,float f,MethodInfo *method)

{
  this_00 = (this->fields).dayNightCycle;
  if (this_00 != (DayNightCycle *)0x0) {
    DayNightCycle::DayNightCycle_set_MoonLongitude(this_00,f,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <InitializeAttributes>m__17(Single) */

void Assembly-CSharp.dll::CloudyThemeBase::CloudyThemeBase__InitializeAttributes_m__17
               (CloudyThemeBase *this,float f,MethodInfo *method)

{
  pTVar1 = (this->fields).skybox;
  if (pTVar1 != (ThemeSkybox *)0x0) {
    ThemeSkybox::ThemeSkybox_set_MoonLightContrast(pTVar1,f,(MethodInfo *)0x0);
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


/* Void <InitializeAttributes>m__18(Single) */

void Assembly-CSharp.dll::CloudyThemeBase::CloudyThemeBase__InitializeAttributes_m__18
               (CloudyThemeBase *this,float f,MethodInfo *method)

{
  pTVar1 = (this->fields).skybox;
  if (pTVar1 != (ThemeSkybox *)0x0) {
    ThemeSkybox::ThemeSkybox_set_MoonLightIntensity(pTVar1,f,(MethodInfo *)0x0);
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


/* Void <InitializeAttributes>m__19(Single) */

void Assembly-CSharp.dll::CloudyThemeBase::CloudyThemeBase__InitializeAttributes_m__19
               (CloudyThemeBase *this,float f,MethodInfo *method)

{
  this_00 = (this->fields).skybox;
  if (this_00 != (ThemeSkybox *)0x0) {
    ThemeSkybox::ThemeSkybox_set_MoonFlareBrightness(this_00,f,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <InitializeAttributes>m__1A(Single) */

void Assembly-CSharp.dll::CloudyThemeBase::CloudyThemeBase__InitializeAttributes_m__1A
               (CloudyThemeBase *this,float f,MethodInfo *method)

{
  this_00 = (this->fields).skybox;
  if (this_00 != (ThemeSkybox *)0x0) {
    ThemeSkybox::ThemeSkybox_set_CloudsHeight(this_00,f,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <InitializeAttributes>m__1B(Single) */

void Assembly-CSharp.dll::CloudyThemeBase::CloudyThemeBase__InitializeAttributes_m__1B
               (CloudyThemeBase *this,float f,MethodInfo *method)

{
  this_00 = (this->fields).skybox;
  if (this_00 != (ThemeSkybox *)0x0) {
    ThemeSkybox::ThemeSkybox_set_CloudsOffset(this_00,f,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <InitializeAttributes>m__1C(Single) */

void Assembly-CSharp.dll::CloudyThemeBase::CloudyThemeBase__InitializeAttributes_m__1C
               (CloudyThemeBase *this,float f,MethodInfo *method)

{
  this_00 = (this->fields).skybox;
  if (this_00 != (ThemeSkybox *)0x0) {
    ThemeSkybox::ThemeSkybox_set_CloudsRotationSpeed(this_00,f,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <InitializeAttributes>m__1D(Single) */

void Assembly-CSharp.dll::CloudyThemeBase::CloudyThemeBase__InitializeAttributes_m__1D
               (CloudyThemeBase *this,float f,MethodInfo *method)

{
  this_00 = (this->fields).skybox;
  if (this_00 != (ThemeSkybox *)0x0) {
    ThemeSkybox::ThemeSkybox_set_FogDensity(this_00,f,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <InitializeAttributes>m__1E(Single) */

void Assembly-CSharp.dll::CloudyThemeBase::CloudyThemeBase__InitializeAttributes_m__1E
               (CloudyThemeBase *this,float f,MethodInfo *method)

{
  this_00 = (this->fields).skybox;
  if (this_00 != (ThemeSkybox *)0x0) {
    ThemeSkybox::ThemeSkybox_set_Exposure(this_00,f,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <InitializeAttributes>m__2(Single) */

void Assembly-CSharp.dll::CloudyThemeBase::CloudyThemeBase__InitializeAttributes_m__2
               (CloudyThemeBase *this,float f,MethodInfo *method)

{
  this_00 = (this->fields).dayNightCycle;
  if (this_00 != (DayNightCycle *)0x0) {
    DayNightCycle::DayNightCycle_set_CycleLength(this_00,f,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <InitializeAttributes>m__3(Color) */

void Assembly-CSharp.dll::CloudyThemeBase::CloudyThemeBase__InitializeAttributes_m__3
               (CloudyThemeBase *this,Color c,MethodInfo *method)

{
  this_00 = (this->fields).skybox;
  if (this_00 != (ThemeSkybox *)0x0) {
    ThemeSkybox::ThemeSkybox_set_TopColor(this_00,c,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <InitializeAttributes>m__4(Color) */

void Assembly-CSharp.dll::CloudyThemeBase::CloudyThemeBase__InitializeAttributes_m__4
               (CloudyThemeBase *this,Color c,MethodInfo *method)

{
  this_00 = (this->fields).skybox;
  if (this_00 != (ThemeSkybox *)0x0) {
    ThemeSkybox::ThemeSkybox_set_BottomColor(this_00,c,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <InitializeAttributes>m__5(Color) */

void Assembly-CSharp.dll::CloudyThemeBase::CloudyThemeBase__InitializeAttributes_m__5
               (CloudyThemeBase *this,Color c,MethodInfo *method)

{
  this_00 = (this->fields).skybox;
  if (this_00 != (ThemeSkybox *)0x0) {
    ThemeSkybox::ThemeSkybox_set_StarsTint(this_00,c,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <InitializeAttributes>m__6(Single) */

void Assembly-CSharp.dll::CloudyThemeBase::CloudyThemeBase__InitializeAttributes_m__6
               (CloudyThemeBase *this,float f,MethodInfo *method)

{
  this_00 = (this->fields).skybox;
  if (this_00 != (ThemeSkybox *)0x0) {
    ThemeSkybox::ThemeSkybox_set_StarsExtinction(this_00,f,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <InitializeAttributes>m__7(Single) */

void Assembly-CSharp.dll::CloudyThemeBase::CloudyThemeBase__InitializeAttributes_m__7
               (CloudyThemeBase *this,float f,MethodInfo *method)

{
  this_00 = (this->fields).skybox;
  if (this_00 != (ThemeSkybox *)0x0) {
    ThemeSkybox::ThemeSkybox_set_StarsTwinklingSpeed(this_00,f,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <InitializeAttributes>m__8(Color) */

void Assembly-CSharp.dll::CloudyThemeBase::CloudyThemeBase__InitializeAttributes_m__8
               (CloudyThemeBase *this,Color c,MethodInfo *method)

{
  pTVar1 = (this->fields).skybox;
  if (pTVar1 != (ThemeSkybox *)0x0) {
    ThemeSkybox::ThemeSkybox_set_SunTint(pTVar1,c,(MethodInfo *)0x0);
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


/* Void <InitializeAttributes>m__9(Single) */

void Assembly-CSharp.dll::CloudyThemeBase::CloudyThemeBase__InitializeAttributes_m__9
               (CloudyThemeBase *this,float f,MethodInfo *method)

{
  this_00 = (this->fields).skybox;
  if (this_00 != (ThemeSkybox *)0x0) {
    ThemeSkybox::ThemeSkybox_set_SunSize(this_00,f,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <InitializeAttributes>m__A(Single) */

void Assembly-CSharp.dll::CloudyThemeBase::CloudyThemeBase__InitializeAttributes_m__A
               (CloudyThemeBase *this,float f,MethodInfo *method)

{
  pTVar1 = (this->fields).skybox;
  if (pTVar1 != (ThemeSkybox *)0x0) {
    ThemeSkybox::ThemeSkybox_set_SunHeight(pTVar1,f,(MethodInfo *)0x0);
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


/* Void <InitializeAttributes>m__B(Single) */

void Assembly-CSharp.dll::CloudyThemeBase::CloudyThemeBase__InitializeAttributes_m__B
               (CloudyThemeBase *this,float f,MethodInfo *method)

{
  this_00 = (this->fields).skybox;
  if (this_00 != (ThemeSkybox *)0x0) {
    ThemeSkybox::ThemeSkybox_set_SunAxisDegrees(this_00,f,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <InitializeAttributes>m__C(Single) */

void Assembly-CSharp.dll::CloudyThemeBase::CloudyThemeBase__InitializeAttributes_m__C
               (CloudyThemeBase *this,float f,MethodInfo *method)

{
  this_00 = (this->fields).dayNightCycle;
  if (this_00 != (DayNightCycle *)0x0) {
    DayNightCycle::DayNightCycle_set_SunAltitude(this_00,f,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <InitializeAttributes>m__D(Single) */

void Assembly-CSharp.dll::CloudyThemeBase::CloudyThemeBase__InitializeAttributes_m__D
               (CloudyThemeBase *this,float f,MethodInfo *method)

{
  this_00 = (this->fields).dayNightCycle;
  if (this_00 != (DayNightCycle *)0x0) {
    DayNightCycle::DayNightCycle_set_SunLongitude(this_00,f,(MethodInfo *)0x0);
    return;
  }
  func_?();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


/* Void <InitializeAttributes>m__E(Single) */

void Assembly-CSharp.dll::CloudyThemeBase::CloudyThemeBase__InitializeAttributes_m__E
               (CloudyThemeBase *this,float f,MethodInfo *method)

{
  pTVar1 = (this->fields).skybox;
  if (pTVar1 != (ThemeSkybox *)0x0) {
    ThemeSkybox::ThemeSkybox_set_SunLightContrast(pTVar1,f,(MethodInfo *)0x0);
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


/* Void <InitializeAttributes>m__F(Single) */

void Assembly-CSharp.dll::CloudyThemeBase::CloudyThemeBase__InitializeAttributes_m__F
               (CloudyThemeBase *this,float f,MethodInfo *method)

{
  pTVar1 = (this->fields).skybox;
  if (pTVar1 != (ThemeSkybox *)0x0) {
    ThemeSkybox::ThemeSkybox_set_SunLightIntensity(pTVar1,f,(MethodInfo *)0x0);
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


/* CloudyThemeBase() */

void Assembly-CSharp.dll::CloudyThemeBase::CloudyThemeBase__ctor
               (CloudyThemeBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (List_1_UnityEngine_Vector4_ *)
            func_?(TypeInfo__System__Collections__Generic__List<ThemeComponent>);
  mscorlib.dll::System::Collections::Generic::List`1[UnityEngine::Vector4]::
  List_1_UnityEngine_Vector4___ctor
            (this_00,MethodInfo__System__Collections__Generic__List<ThemeComponent>__List__);
  (this->fields)._.components = (List_1_ThemeComponent_ *)this_00;
  uStack1 = 0;
  if (cRam_? == '\0') {
    func_?();
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?();
  }
  return;
}


/* List`1[UnityEngine.RectTransform] get_Controllers() */

List_1_UnityEngine_RectTransform_ *
Assembly-CSharp.dll::CloudyThemeBase::CloudyThemeBase_get_Controllers
          (CloudyThemeBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  this_00 = (List_1_ThemeAttributes_ThemeAttribute_ *)
            func_?(TypeInfo__System__Collections__Generic__List<UnityEngine::RectTransform>
                           );
  mscorlib.dll::System::Collections::Generic::List`1[ThemeAttributes::ThemeAttribute]::
  List_1_ThemeAttributes_ThemeAttribute___ctor
            (this_00,0,
             MethodInfo__System__Collections__Generic__List<UnityEngine::RectTransform>__List_int_);
  pBVar1 = (this->fields).useDayNightCycle;
  if (pBVar1 != (BoolAttribute *)0x0) {
    bVar2 = ThemeAttributes::ThemeAttribute`1[System::Boolean]::
            ThemeAttribute_1_System_Boolean__get_Value
                      ((ThemeAttribute_1_System_Boolean_ *)pBVar1,
                       MethodInfo__ThemeAttributes__ThemeAttribute<bool>__get_Value__);
    if (bVar2 == 0) {
      return (List_1_UnityEngine_RectTransform_ *)this_00;
    }
    pBVar1 = (this->fields).useServerTime;
    if (pBVar1 != (BoolAttribute *)0x0) {
      bVar2 = ThemeAttributes::ThemeAttribute`1[System::Boolean]::
              ThemeAttribute_1_System_Boolean__get_Value
                        ((ThemeAttribute_1_System_Boolean_ *)pBVar1,
                         MethodInfo__ThemeAttributes__ThemeAttribute<bool>__get_Value__);
      if (bVar2 != 0) {
        return (List_1_UnityEngine_RectTransform_ *)this_00;
      }
      pXVar3 = (XpBoostParticlePreviewer *)(this->fields).cycleControllerPrefab;
      if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
         ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
        func_?();
      }
      pXVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_Instantiate_251
                         (pXVar3,
                          DayNightCycleController_MethodInfo__UnityEngine__Object__Instantiate<DayNightCycleController>_DayNightCycleController_
                         );
      if (pXVar3 != (XpBoostParticlePreviewer *)0x0) {
        DayNightCycleController::DayNightCycleController_Initialize
                  ((DayNightCycleController *)pXVar3,(this->fields).dayNightCycle,(MethodInfo *)0x0)
        ;
        pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                           ((Component_1 *)pXVar3,(MethodInfo *)0x0);
        if (this_00 != (List_1_ThemeAttributes_ThemeAttribute_ *)0x0) {
          item = (Transform *)0x0;
          if (pTVar4 == (Transform *)0x0) {
code_?:
            mscorlib.dll::System::Collections::Generic::List`1[UIPushOption]::
            List_1_UIPushOption__Add
                      ((List_1_UIPushOption_ *)this_00,(UIPushOption__Enum)item,
                       MethodInfo__System__Collections__Generic__List<UnityEngine::RectTransform>__Add_UnityEngine__RectTransform_
                      );
            return (List_1_UnityEngine_RectTransform_ *)this_00;
          }
          if (pTVar4->klass == (Transform__Class *)TypeInfo__UnityEngine__RectTransform) {
            item = pTVar4;
          }
          if (item != (Transform *)0x0) goto code_?;
          goto code_?;
        }
      }
    }
  }
  func_?();
code_?:
  func_?();
  pcVar5 = (code *)swi(3);
  pLVar6 = (List_1_UnityEngine_RectTransform_ *)(*pcVar5)();
  return pLVar6;
}


/* ThemeSkybox get_Skybox() */

ThemeSkybox *
Assembly-CSharp.dll::CloudyThemeBase::CloudyThemeBase_get_Skybox
          (CloudyThemeBase *this,MethodInfo *method)

{
  return (this->fields).skybox;
}


/* Void set_Skybox(ThemeSkybox) */

void Assembly-CSharp.dll::CloudyThemeBase::CloudyThemeBase_set_Skybox
               (CloudyThemeBase *this,ThemeSkybox *value,MethodInfo *method)

{
  (this->fields).skybox = value;
  return;
}

