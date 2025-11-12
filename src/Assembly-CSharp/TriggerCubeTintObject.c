
/* Void Awake() */

void Assembly-CSharp.dll::TriggerCubeTintObject::TriggerCubeTintObject_Awake
               (TriggerCubeTintObject *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Material);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).meshRendererToTint;
  m = (Material__Array *)FUN_?(TypeInfo__UnityEngine__Material,1);
  pMVar2 = (this->fields).materialCylinderToTint;
  if (m != (Material__Array *)0x0) {
    if ((pMVar2 != (Material *)0x0) &&
       (lVar3 = FUN_?(pMVar2,(m->klass->_0).element_class), lVar3 == 0)) {
      uVar4 = FUN_?();
      FUN_?(uVar4,0);
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    FUN_?(m,0);
    if (pMVar1 != (MeshRenderer *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_SetMaterialArray_1
                ((Renderer *)pMVar1,m,(MethodInfo *)0x0);
      pMVar2 = (this->fields).materialCylinderToTint;
      if (pMVar2 != (Material *)0x0) {
        if (cRam_? == '\0') {
          FUN_?(&TypeInfo__UnityEngine__Material);
          LOCK();
          UNLOCK();
          cRam_? = '\x01';
        }
        nameID = UnityEngine.CoreModule.dll::UnityEngine::Material::
                 Material_GetFirstPropertyNameIdByAttribute
                           (pMVar2,ShaderPropertyFlags__Enum_MainColor,(MethodInfo *)0x0);
        if (nameID < 0) {
          if (*(int *)&(TypeInfo__UnityEngine__Material->_1).field_0x1c == 0) {
            FUN_?(TypeInfo__UnityEngine__Material);
          }
          nameID = TypeInfo__UnityEngine__Material->static_fields->k_ColorId;
        }
        pCVar6 = UnityEngine.CoreModule.dll::UnityEngine::Material::Material_GetColor_1
                            (&CStack_7,pMVar2,nameID,(MethodInfo *)0x0);
        fVar8 = pCVar6->g;
        fVar9 = pCVar6->b;
        fVar10 = pCVar6->a;
        pMVar1 = (this->fields).meshRendererToTint;
        (this->fields).OriginalColor.r = pCVar6->r;
        (this->fields).OriginalColor.g = fVar8;
        (this->fields).OriginalColor.b = fVar9;
        (this->fields).OriginalColor.a = fVar10;
        if (pMVar1 != (MeshRenderer *)0x0) {
          if (cRam_? == '\0') {
            FUN_?(&
                          void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Renderer>_UnityEngine__Renderer_
                         );
            LOCK();
            UNLOCK();
            cRam_? = '\x01';
          }
          pvVar11 = (pMVar1->fields)._._._.m_CachedPtr;
          if (pvVar11 == (void *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
            ThrowHelper_2_ThrowNullReferenceException((Object *)pMVar1,(MethodInfo *)0x0);
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pcVar5 = pcRam_?;
          if ((pcRam_? == (code *)0x0) &&
             (pcVar5 = (code *)FUN_?(&UNK_?), pcVar5 == (code *)0x0)) {
            uVar4 = func_?(&UNK_?);
            FUN_?(uVar4,0);
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          pcRam_? = pcVar5;
          lVar3 = (*pcRam_?)(pvVar11);
          if (lVar3 != 0) {
            if (*(int *)(lVar3 + 0x18) == 0) {
              FUN_?();
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
            bVar12 = iRam_? != 0;
            (this->fields).materialCylinderToTint = *(Material **)(lVar3 + 0x20);
            if (bVar12) {
              uVar13 = (uint)((ulonglong)&(this->fields).materialCylinderToTint >> 0xc);
              puVar14 = (ulonglong *)((ulonglong)((uVar13 & 0x1fffff) >> 6) * 8 + 0xADDR);
              do {
                uVar15 = *puVar14;
                LOCK();
                uVar16 = *puVar14;
                if (uVar15 == uVar16) {
                  *puVar14 = uVar15 | 1L << (uVar13 & 0x3f);
                }
                UNLOCK();
              } while (uVar15 != uVar16);
            }
            return;
          }
        }
      }
    }
  }
  FUN_?();
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Void OnDestroy() */

void Assembly-CSharp.dll::TriggerCubeTintObject::TriggerCubeTintObject_OnDestroy
               (TriggerCubeTintObject *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).materialCylinderToTint;
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  if (cRam_? == '\0') {
    FUN_?(&
                  void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Object>_UnityEngine__Object_
                  ,0,0);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if ((
      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__Marshal<UnityEngine::Object>_UnityEngine__Object_
      ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    FUN_?();
  }
  pvVar2 = (void *)0x0;
  if (pMVar1 != (Material *)0x0) {
    pvVar2 = (pMVar1->fields)._.m_CachedPtr;
  }
  if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
    FUN_?();
  }
  pcVar3 = pcRam_?;
  if ((pcRam_? == (code *)0x0) &&
     (pcVar3 = (code *)FUN_?(&UNK_?), pcVar3 == (code *)0x0)) {
    uVar4 = func_?(&UNK_?);
    FUN_?(uVar4,0);
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  pcRam_? = pcVar3;
                    /* WARNING: Could not recover jumptable at 0xADDR. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*pcRam_?)(pvVar2,0);
  return;
}


/* Void TeamTint(MVTeam) */

void Assembly-CSharp.dll::TriggerCubeTintObject::TriggerCubeTintObject_TeamTint
               (TriggerCubeTintObject *this,MVTeam__Enum team,MethodInfo *method)

{
  switch(team) {
  case MVTeam__Enum_Blue:
    (*(this->klass->vtable).Tint_1.methodPtr)
              (this,_UNK_?,_UNK_?,_UNK_?,_UNK_?,
               (this->klass->vtable).Tint_1.method);
    return;
  case MVTeam__Enum_Red:
    (*(this->klass->vtable).Tint_1.methodPtr)
              (_UNK_?,_UNK_?,0,0,_UNK_?,(this->klass->vtable).Tint_1.method)
    ;
    return;
  case MVTeam__Enum_Green:
    (*(this->klass->vtable).Tint_1.methodPtr)
              (_UNK_?,0,_UNK_?,0,_UNK_?,(this->klass->vtable).Tint_1.method)
    ;
    return;
  case MVTeam__Enum_Yellow:
    pIVar1 = (this->klass->vtable).Tint_1.methodPtr;
    (*pIVar1)(this,pIVar1,_UNK_?,0,_UNK_?,(this->klass->vtable).Tint_1.method);
    return;
  default:
    fStack_2 = (this->fields).OriginalColor.r;
    fStack_3 = (this->fields).OriginalColor.g;
    fStack_4 = (this->fields).OriginalColor.b;
    fStack_5 = (this->fields).OriginalColor.a;
    (*(this->klass->vtable).Tint.methodPtr)(fStack_2,&fStack_2,(this->klass->vtable).Tint.method);
    return;
  }
}


/* Void Tint(Color) */

void Assembly-CSharp.dll::TriggerCubeTintObject::TriggerCubeTintObject_Tint
               (TriggerCubeTintObject *this,Color *c,MethodInfo *method)

{
  this_00 = (this->fields).materialCylinderToTint;
  if (this_00 != (Material *)0x0) {
    CStack_1.r = c->r;
    CStack_1.g = c->g;
    CStack_1.b = c->b;
    CStack_1.a = c->a;
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material_set_color
              (this_00,&CStack_1,(MethodInfo *)0x0);
    return;
  }
  FUN_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

