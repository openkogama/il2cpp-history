
/* ParticleSystem Instantiate(PoolEnums) */

ParticleSystem *
Assembly-CSharp.dll::OneShotPooledParticleSystem::OneShotPooledParticleSystem_Instantiate
          (PoolEnums__Enum type,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    OneShotPooledParticleSystem_MethodInfo__EnumPoolManager__Instantiate<OneShotPooledParticleSystem>_PoolEnums_
                   );
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(&TypeInfo__PrefabPool);
    cRam_? = '\x01';
  }
  pPVar1 = TypeInfo__PrefabPool->static_fields->instance;
  if ((pPVar1 != (PrefabPool *)0x0) &&
     (this = (pPVar1->fields).enumPoolManager, this != (EnumPoolManager *)0x0)) {
    pOVar2 = EnumPoolManager::EnumPoolManager_Instantiate
                       (this,type,
                        OneShotPooledParticleSystem_MethodInfo__EnumPoolManager__Instantiate<OneShotPooledParticleSystem>_PoolEnums_
                       );
    if (pOVar2 != (Object *)0x0) {
      pOVar2[2].monitor = (MonitorData *)type;
      return (ParticleSystem *)pOVar2[2].klass;
    }
  }
  func_?();
  pcVar3 = (code *)swi(3);
  pPVar4 = (ParticleSystem *)(*pcVar3)();
  return pPVar4;
}


/* ParticleSystem Instantiate(PoolEnums, Vector3, Quaternion, Nullable`1[Single],
   Nullable`1[UnityEngine.Color]) */

ParticleSystem *
Assembly-CSharp.dll::OneShotPooledParticleSystem::OneShotPooledParticleSystem_Instantiate_1
          (PoolEnums__Enum type,Vector3 position,Quaternion rotation,Nullable_1_Single_ scale,
          Nullable_1_UnityEngine_Color_ color,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    OneShotPooledParticleSystem_MethodInfo__EnumPoolManager__Instantiate<OneShotPooledParticleSystem>_PoolEnums_
                   );
    func_?(&TypeInfo__UnityEngine__Gradient);
    func_?(&MethodInfo__System__Nullable<float>__get_HasValue__);
    func_?(&MethodInfo__System__Nullable<UnityEngine::Color>__get_HasValue__);
    func_?(&MethodInfo__System__Nullable<UnityEngine::Color>__get_Value__);
    func_?(&MethodInfo__System__Nullable<float>__get_Value__);
    cRam_? = '\x01';
  }
  PStack_1.m_ParticleSystem = (ParticleSystem *)0x0;
  func_?(&UStack_2,0,0x2c);
  if (cRam_? == '\0') {
    func_?(&TypeInfo__PrefabPool);
    cRam_? = '\x01';
  }
  pPVar3 = TypeInfo__PrefabPool->static_fields->instance;
  if ((pPVar3 != (PrefabPool *)0x0) &&
     (this = (pPVar3->fields).enumPoolManager, this != (EnumPoolManager *)0x0)) {
    this_00 = (Component *)
              EnumPoolManager::EnumPoolManager_Instantiate
                        (this,type,
                         OneShotPooledParticleSystem_MethodInfo__EnumPoolManager__Instantiate<OneShotPooledParticleSystem>_PoolEnums_
                        );
    pCStack_4 = this_00;
    if (this_00 != (Component *)0x0) {
      this_00[1].fields._.m_CachedPtr = (void *)type;
      pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                         (this_00,(MethodInfo *)0x0);
      if (pTVar5 != (Transform *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localPosition
                  (pTVar5,position,(MethodInfo *)0x0);
        UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localRotation
                  (pTVar5,rotation,(MethodInfo *)0x0);
        if (scale.hasValue != 0) {
          in_stack_6 = (Component *)this_00[1].monitor;
          if (in_stack_6 == (Component *)0x0) goto code_?;
          in_stack_7 = (Gradient *)0x0;
          pTVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                             (in_stack_6,(MethodInfo *)0x0);
          if (cRam_? == '\0') {
            ppVStack_8 = &TypeInfo__UnityEngine__Vector3;
            func_?();
            cRam_? = '\x01';
          }
          pVVar9 = TypeInfo__UnityEngine__Vector3->static_fields;
          RStack_10.m_YMin = (pVVar9->oneVector).x;
          RStack_10.m_Width = (pVVar9->oneVector).y;
          RStack_10.m_Height = (pVVar9->oneVector).z;
          fStack_11 = mscorlib.dll::System::Nullable`1[Single]::Nullable_1_Single__get_Value
                                (&scale,MethodInfo__System__Nullable<float>__get_Value__);
          RStack_10.m_YMin = RStack_10.m_YMin * fStack_11;
          RStack_10.m_Width = RStack_10.m_Width * fStack_11;
          RStack_10.m_Height = RStack_10.m_Height * fStack_11;
          if (pTVar5 == (Transform *)0x0) goto code_?;
          value.y = RStack_10.m_Width;
          value.x = RStack_10.m_YMin;
          value.z = RStack_10.m_Height;
          UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_set_localScale
                    (pTVar5,value,(MethodInfo *)0x0);
        }
        if (color.hasValue == 0) {
code_?:
          return (ParticleSystem *)this_00[1].monitor;
        }
        if ((ParticleSystem *)this_00[1].monitor != (ParticleSystem *)0x0) {
          PStack_1.m_ParticleSystem =
               (ParticleSystem *)
               UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
               ParticleSystem_get_collision((ParticleSystem *)this_00[1].monitor,(MethodInfo *)0x0);
          pPVar12 = UnityEngine.ParticleSystemModule.dll::UnityEngine::
                   ParticleSystem+ColorOverLifetimeModule::
                   ParticleSystem_ColorOverLifetimeModule_get_color
                             ((ParticleSystem_MinMaxGradient *)&stack0xffffff88,&PStack_1,
                              (MethodInfo *)0x0);
          UStack_2.klass = (UxmlObjectAttributeDescription_1_System_Object___Class *)pPVar12->m_Mode
          ;
          UStack_2.monitor = (MonitorData *)pPVar12->m_GradientMin;
          UStack_2.fields._defaultValue_k__BackingField = (Object *)pPVar12->m_GradientMax;
          fStack_13 = (pPVar12->m_ColorMin).r;
          fStack_14 = (pPVar12->m_ColorMin).g;
          fStack_15 = (pPVar12->m_ColorMin).b;
          fStack_16 = (pPVar12->m_ColorMin).a;
          fStack_17 = (pPVar12->m_ColorMax).r;
          uStack_18._0_4_ = (pPVar12->m_ColorMax).g;
          uStack_18._4_4_ = (pPVar12->m_ColorMax).b;
          fStack_19 = (pPVar12->m_ColorMax).a;
          pGVar20 = (Gradient *)
                   UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
                   UxmlObjectAttributeDescription`1[System::Object]::
                   UxmlObjectAttributeDescription_1_System_Object__get_defaultValue
                             (&UStack_2,(MethodInfo *)0x0);
          if (pGVar20 != (Gradient *)0x0) {
            value_01 = UnityEngine.CoreModule.dll::UnityEngine::Gradient::Gradient_get_colorKeys
                                 (pGVar20,(MethodInfo *)0x0);
            uVar21 = 0;
            if (value_01 != (GradientColorKey__Array *)0x0) {
              pGVar22 = value_01->vector;
              for (; (int)uVar21 < (int)value_01->max_length; uVar21 = uVar21 + 1) {
                pRVar23 = mscorlib.dll::System::Nullable`1[UnityEngine::Rect]::
                          Nullable_1_UnityEngine_Rect__get_Value
                                    (&RStack_10,(Nullable_1_UnityEngine_Rect_ *)&color,
                                     MethodInfo__System__Nullable<UnityEngine::Color>__get_Value__);
                fVar24 = pRVar23->m_YMin;
                fVar25 = pRVar23->m_Width;
                fVar26 = pRVar23->m_Height;
                if (value_01->max_length <= uVar21) goto code_?;
                (pGVar22->color).r = pRVar23->m_XMin;
                (pGVar22->color).g = fVar24;
                (pGVar22->color).b = fVar25;
                (pGVar22->color).a = fVar26;
                pGVar22 = pGVar22 + 1;
              }
              pGVar20 = (Gradient *)func_?(TypeInfo__UnityEngine__Gradient);
              UnityEngine.CoreModule.dll::UnityEngine::Gradient::Gradient__ctor
                        (pGVar20,(MethodInfo *)0x0);
              pPVar12 = UnityEngine.ParticleSystemModule.dll::UnityEngine::
                       ParticleSystem+ColorOverLifetimeModule::
                       ParticleSystem_ColorOverLifetimeModule_get_color
                                 ((ParticleSystem_MinMaxGradient *)&stack0xffffff5c,&PStack_1,
                                  (MethodInfo *)0x0);
              UStack_2.klass =
                   (UxmlObjectAttributeDescription_1_System_Object___Class *)pPVar12->m_Mode;
              UStack_2.monitor = (MonitorData *)pPVar12->m_GradientMin;
              UStack_2.fields._defaultValue_k__BackingField = (Object *)pPVar12->m_GradientMax;
              fStack_13 = (pPVar12->m_ColorMin).r;
              fStack_14 = (pPVar12->m_ColorMin).g;
              fStack_15 = (pPVar12->m_ColorMin).b;
              fStack_16 = (pPVar12->m_ColorMin).a;
              fStack_17 = (pPVar12->m_ColorMax).r;
              uStack_18._0_4_ = (pPVar12->m_ColorMax).g;
              uStack_18._4_4_ = (pPVar12->m_ColorMax).b;
              fStack_19 = (pPVar12->m_ColorMax).a;
              this_01 = (Gradient *)
                        UnityEngine.UIElementsModule.dll::UnityEngine::UIElements::
                        UxmlObjectAttributeDescription`1[System::Object]::
                        UxmlObjectAttributeDescription_1_System_Object__get_defaultValue
                                  (&UStack_2,(MethodInfo *)0x0);
              if (this_01 != (Gradient *)0x0) {
                value_02 = UnityEngine.CoreModule.dll::UnityEngine::Gradient::Gradient_get_alphaKeys
                                     (this_01,(MethodInfo *)0x0);
                if (pGVar20 != (Gradient *)0x0) {
                  UnityEngine.CoreModule.dll::UnityEngine::Gradient::Gradient_set_alphaKeys
                            (pGVar20,value_02,(MethodInfo *)0x0);
                  UnityEngine.CoreModule.dll::UnityEngine::Gradient::Gradient_set_colorKeys
                            (pGVar20,value_01,(MethodInfo *)0x0);
                  func_?(&stack0xffffff88,0,0x2c);
                  UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+MinMaxGradient::
                  ParticleSystem_MinMaxGradient__ctor_1
                            ((ParticleSystem_MinMaxGradient *)&stack0xffffff88,pGVar20,
                             (MethodInfo *)0x0);
                  value_00.m_GradientMin = in_stack_7;
                  value_00.m_Mode = (int32_t)in_stack_6;
                  value_00.m_GradientMax = pGStack_27;
                  value_00.m_ColorMin.r = (float)ppVStack_8;
                  value_00.m_ColorMin.g = fStack_28;
                  value_00.m_ColorMin.b = fStack_29;
                  value_00.m_ColorMin.a = fStack_30;
                  value_00.m_ColorMax.r = fStack_31;
                  value_00.m_ColorMax.g = (float)(Gradient *)uStack_32;
                  value_00.m_ColorMax.b = SUB84(uStack_32,4);
                  value_00.m_ColorMax.a = fStack_33;
                  UnityEngine.ParticleSystemModule.dll::UnityEngine::
                  ParticleSystem+ColorOverLifetimeModule::
                  ParticleSystem_ColorOverLifetimeModule_set_color
                            (&PStack_1,value_00,(MethodInfo *)0x0);
                  this_00 = pCStack_4;
                  goto code_?;
                }
              }
            }
          }
        }
      }
    }
  }
code_?:
  func_?();
code_?:
  func_?();
  pcVar34 = (code *)swi(3);
  pPVar35 = (ParticleSystem *)(*pcVar34)();
  return pPVar35;
}


/* Void OnValidate() */

void Assembly-CSharp.dll::OneShotPooledParticleSystem::OneShotPooledParticleSystem_OnValidate
               (OneShotPooledParticleSystem *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__ParticleSystem_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::ParticleSystem>__
                   );
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pPVar1 = (this->fields).particles;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pPVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pPVar1 = (ParticleSystem *)
             UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                       ((Component *)this,
                        UnityEngine__ParticleSystem_MethodInfo__UnityEngine__Component__GetComponent<UnityEngine::ParticleSystem>__
                       );
    (this->fields).particles = pPVar1;
    func_?(&(this->fields).particles,pPVar1);
  }
  return;
}


/* Void Update() */

void Assembly-CSharp.dll::OneShotPooledParticleSystem::OneShotPooledParticleSystem_Update
               (OneShotPooledParticleSystem *this,MethodInfo *method)

{
  obj = this;
  pPVar1 = (this->fields).particles;
  if (pPVar1 != (ParticleSystem *)0x0) {
    fVar2 = UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
            ParticleSystem_get_time(pPVar1,(MethodInfo *)0x0);
    pPVar1 = (obj->fields).particles;
    if (pPVar1 != (ParticleSystem *)0x0) {
      this = (OneShotPooledParticleSystem *)
             UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem::
             ParticleSystem_get_collision(pPVar1,(MethodInfo *)0x0);
      fVar3 = UnityEngine.ParticleSystemModule.dll::UnityEngine::ParticleSystem+MainModule::
              ParticleSystem_MainModule_get_duration_Injected
                        ((ParticleSystem_MainModule *)&this,(MethodInfo *)0x0);
      if (fVar3 <= fVar2) {
        if (cRam_? == '\0') {
          this = (OneShotPooledParticleSystem *)&TypeInfo__PrefabPool;
          func_?();
          cRam_? = '\x01';
        }
        pPVar4 = TypeInfo__PrefabPool->static_fields->instance;
        if ((pPVar4 == (PrefabPool *)0x0) ||
           (this_00 = (pPVar4->fields).enumPoolManager, this_00 == (EnumPoolManager *)0x0))
        goto code_?;
        this = (OneShotPooledParticleSystem *)0x0;
        EnumPoolManager::EnumPoolManager_Return
                  (this_00,(MonoBehaviour *)obj,(obj->fields).type,(MethodInfo *)0x0);
      }
      return;
    }
  }
code_?:
  this = (OneShotPooledParticleSystem *)&UNK_?;
  func_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}

