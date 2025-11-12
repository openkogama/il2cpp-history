
/* Void Start() */

void Assembly-CSharp-firstpass.dll::SpecularLighting::SpecularLighting_Start
               (SpecularLighting *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&WaterBase_MethodInfo__UnityEngine__Component__GetComponent<WaterBase>__);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pWVar1 = (WaterBase *)
           UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                     ((Component *)this,
                      WaterBase_MethodInfo__UnityEngine__Component__GetComponent<WaterBase>__);
  bVar2 = iRam_? != 0;
  (this->fields).waterBase = pWVar1;
  if (bVar2) {
    uVar3 = (uint)((ulonglong)&(this->fields).waterBase >> 0xc);
    puVar4 = (ulonglong *)((ulonglong)((uVar3 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar5 = *puVar4;
      LOCK();
      uVar6 = *puVar4;
      if (uVar5 == uVar6) {
        *puVar4 = uVar5 | 1L << (uVar3 & 0x3f);
      }
      UNLOCK();
    } while (uVar5 != uVar6);
  }
  return;
}


/* Void Update() */

void Assembly-CSharp-firstpass.dll::SpecularLighting::SpecularLighting_Update
               (SpecularLighting *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&WaterBase_MethodInfo__UnityEngine__Component__GetComponent<WaterBase>__);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__UnityEngine__Object);
    LOCK();
    UNLOCK();
    FUN_?(&StringLiteral__WorldLightDir);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  pWVar1 = (this->fields).waterBase;
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
  if (pWVar1 == (WaterBase *)0x0) {
code_?:
    pWVar1 = (WaterBase *)
             UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponent_1
                       ((Component *)this,
                        WaterBase_MethodInfo__UnityEngine__Component__GetComponent<WaterBase>__);
    bVar2 = iRam_? != 0;
    (this->fields).waterBase = pWVar1;
    if (bVar2) {
      uVar3 = (uint)((ulonglong)&(this->fields).waterBase >> 0xc);
      uVar4 = (ulonglong)((uVar3 & 0x1fffff) >> 6);
      do {
        uVar5 = *(ulonglong *)(uVar4 * 8 + 0xADDR);
        puVar6 = (ulonglong *)(uVar4 * 8 + 0xADDR);
        LOCK();
        bVar2 = uVar5 == *puVar6;
        if (bVar2) {
          *puVar6 = uVar5 | 1L << (uVar3 & 0x3f);
        }
        UNLOCK();
      } while (!bVar2);
    }
  }
  else {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pWVar1->fields)._._._._.m_CachedPtr == (void *)0x0) goto code_?;
  }
  pTVar7 = (this->fields).specularLight;
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
  if (pTVar7 != (Transform *)0x0) {
    if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
      FUN_?();
    }
    if ((pTVar7->fields)._._.m_CachedPtr != (void *)0x0) {
      pWVar1 = (this->fields).waterBase;
      if (pWVar1 == (WaterBase *)0x0) {
code_?:
        FUN_?();
        pcVar8 = (code *)swi(3);
        (*pcVar8)();
        return;
      }
      pMVar9 = (pWVar1->fields).sharedMaterial;
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
      if (pMVar9 != (Material *)0x0) {
        if (*(int *)&(TypeInfo__UnityEngine__Object->_1).field_0x1c == 0) {
          FUN_?();
        }
        if ((pMVar9->fields)._.m_CachedPtr != (void *)0x0) {
          pWVar1 = (this->fields).waterBase;
          if (pWVar1 != (WaterBase *)0x0) {
            pTVar7 = (this->fields).specularLight;
            pMVar9 = (pWVar1->fields).sharedMaterial;
            if ((pTVar7 != (Transform *)0x0) &&
               (pTVar7 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                   ((Component *)pTVar7,(MethodInfo *)0x0),
               pTVar7 != (Transform *)0x0)) {
              pVVar10 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_forward
                                 (aVStack_11,pTVar7,(MethodInfo *)0x0);
              VStack_12.x = pVVar10->x;
              VStack_12.y = pVVar10->y;
              VStack_12.w = 0.0;
              VStack_12.z = pVVar10->z;
              if (pMVar9 != (Material *)0x0) {
                UnityEngine.CoreModule.dll::UnityEngine::Material::Material_SetVector
                          (pMVar9,StringLiteral__WorldLightDir,&VStack_12,(MethodInfo *)0x0);
                return;
              }
            }
          }
          goto code_?;
        }
      }
    }
  }
  return;
}

