
/* Void OnDisable() */

void Assembly-CSharp-firstpass.dll::ImageEffectBase::ImageEffectBase_OnDisable
               (ImageEffectBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).m_Material;
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
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pMVar1 != (Material *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pMVar1->fields)._.m_CachedPtr != (void *)0x0) {
      pMVar1 = (this->fields).m_Material;
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
      UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_DestroyImmediate
                ((Object_1 *)pMVar1,0,(MethodInfo *)0x0);
    }
  }
  return;
}


/* Void Start() */

void Assembly-CSharp-firstpass.dll::ImageEffectBase::ImageEffectBase_Start
               (ImageEffectBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pSVar1 = (this->fields).shader;
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
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pSVar1 != (Shader *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pSVar1->fields)._.m_CachedPtr != (void *)0x0) {
      pSVar1 = (this->fields).shader;
      if (pSVar1 == (Shader *)0x0) {
        FUN_?();
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (cRam_? == '\0') {
        FUN_?(&
                      void__MethodInfo__UnityEngine__Object__MarshalledUnityObject__MarshalNotNull<UnityEngine::Shader>_UnityEngine__Shader_
                     );
        LOCK();
        UNLOCK();
        cRam_? = '\x01';
      }
      pvVar3 = (pSVar1->fields)._.m_CachedPtr;
      if (pvVar3 == (void *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Bindings::ThrowHelper::
        ThrowHelper_2_ThrowNullReferenceException((Object *)pSVar1,(MethodInfo *)0x0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pcVar2 = pcRam_?;
      if ((pcRam_? == (code *)0x0) &&
         (pcVar2 = (code *)FUN_?(&UNK_?), pcVar2 == (code *)0x0)) {
        uVar4 = func_?(&UNK_?);
        FUN_?(uVar4,0);
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pcRam_? = pcVar2;
      cVar5 = (*pcRam_?)(pvVar3);
      if (cVar5 != '\0') {
        return;
      }
    }
  }
  UnityEngine.CoreModule.dll::UnityEngine::Behaviour::Behaviour_set_enabled
            ((Behaviour *)this,0,(MethodInfo *)0x0);
  return;
}


/* Material get_material() */

Material *
Assembly-CSharp-firstpass.dll::ImageEffectBase::ImageEffectBase_get_material
          (ImageEffectBase *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Material);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pMVar1 = (this->fields).m_Material;
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
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  if (pMVar1 != (Material *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pMVar1->fields)._.m_CachedPtr != (void *)0x0) goto code_?;
  }
  shader = (this->fields).shader;
  pMVar1 = (Material *)FUN_?(TypeInfo__UnityEngine__Material);
  UnityEngine.CoreModule.dll::UnityEngine::Material::Material__ctor(pMVar1,shader,(MethodInfo *)0x0)
  ;
  if (pMVar1 == (Material *)0x0) {
    FUN_?();
    pcVar2 = (code *)swi(3);
    pMVar1 = (Material *)(*pcVar2)();
    return pMVar1;
  }
  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_set_hideFlags
            ((Object_1 *)pMVar1,HideFlags__Enum_HideAndDontSave,(MethodInfo *)0x0);
  bVar3 = iRam_? != 0;
  (this->fields).m_Material = pMVar1;
  if (bVar3) {
    uVar4 = (uint)((ulonglong)&(this->fields).m_Material >> 0xc);
    puVar5 = (ulonglong *)((ulonglong)((uVar4 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar6 = *puVar5;
      LOCK();
      uVar7 = *puVar5;
      if (uVar6 == uVar7) {
        *puVar5 = uVar6 | 1L << (uVar4 & 0x3f);
      }
      UNLOCK();
    } while (uVar6 != uVar7);
  }
code_?:
  return (this->fields).m_Material;
}

