
/* Void CopyMaterial() */

void Assembly-CSharp.dll::LineRangeIndicator::LineRangeIndicator_CopyMaterial
               (LineRangeIndicator *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Material);
    cRam_? = '\x01';
  }
  source = (this->fields).lineDotMaterial;
  this_00 = (Material *)func_?(TypeInfo__UnityEngine__Material);
  if (this_00 != (Material *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Material::Material__ctor_1
              (this_00,source,(MethodInfo *)0x0);
    (this->fields).materialCopy = this_00;
    func_?(&(this->fields).materialCopy,this_00);
    pMVar1 = (this->fields).rangeIndicator;
    if (pMVar1 != (MeshRenderer *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_sharedMaterial
                ((Renderer *)pMVar1,(this->fields).materialCopy,(MethodInfo *)0x0);
      pMVar1 = (this->fields).rangeIndicator_backside;
      if (pMVar1 != (MeshRenderer *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_sharedMaterial
                  ((Renderer *)pMVar1,(this->fields).materialCopy,(MethodInfo *)0x0);
        return;
      }
    }
  }
  func_?();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


/* Void SetRange(Single) */

void Assembly-CSharp.dll::LineRangeIndicator::LineRangeIndicator_SetRange
               (LineRangeIndicator *this,float range,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral__MainTex);
    cRam_? = '\x01';
  }
  if ((range <= 0.0) || ((this->fields).lineWidth <= 0.0)) {
    pMVar1 = (this->fields).rangeIndicator;
    if (pMVar1 != (MeshRenderer *)0x0) {
      pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)pMVar1,(MethodInfo *)0x0);
      if (pGVar2 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar2,0,(MethodInfo *)0x0);
        return;
      }
    }
  }
  else {
    pMVar1 = (this->fields).rangeIndicator;
    if (pMVar1 != (MeshRenderer *)0x0) {
      pGVar2 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_gameObject
                         ((Component *)pMVar1,(MethodInfo *)0x0);
      if (pGVar2 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar2,1,(MethodInfo *)0x0);
        pMVar1 = (this->fields).rangeIndicator;
        if (pMVar1 != (MeshRenderer *)0x0) {
          this_01 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                              ((Component *)pMVar1,(MethodInfo *)0x0);
          if (this_01 != (Transform *)0x0) {
            UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_lossyScale
                      ((Vector3 *)&stack0xffffffd4,this_01,(MethodInfo *)0x0);
            pMVar1 = (this->fields).rangeIndicator;
            if (pMVar1 != (MeshRenderer *)0x0) {
              pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                                 ((Component *)pMVar1,(MethodInfo *)0x0);
              if (pTVar3 != (Transform *)0x0) {
                pVVar4 = (Vector3 *)&stack0xffffffd4;
                puVar5 = &UNK_?;
                pVVar6 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                         Transform_get_localScale(pVVar4,pTVar3,(MethodInfo *)0x0);
                pMVar1 = (this->fields).rangeIndicator;
                fVar7 = ((float)pTVar3 / pVVar6->x) * (float)pVVar4;
                if (pMVar1 != (MeshRenderer *)0x0) {
                  pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                           Component_get_transform((Component *)pMVar1,(MethodInfo *)0x0);
                  if (pTVar3 != (Transform *)0x0) {
                    pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                             Transform_get_lossyScale
                                       ((Vector3 *)&stack0xffffffd4,pTVar3,(MethodInfo *)0x0);
                    fVar8 = pVVar4->z;
                    pMVar1 = (this->fields).rangeIndicator;
                    if (pMVar1 != (MeshRenderer *)0x0) {
                      pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                               Component_get_transform((Component *)pMVar1,(MethodInfo *)0x0);
                      if (pTVar3 != (Transform *)0x0) {
                        pVVar4 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                 Transform_get_localScale
                                           ((Vector3 *)&stack0xffffffd4,pTVar3,(MethodInfo *)0x0);
                        pMVar1 = (this->fields).rangeIndicator;
                        fVar8 = (fVar8 / pVVar4->z) * (float)puVar5;
                        if (pMVar1 != (MeshRenderer *)0x0) {
                          pTVar3 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                   Component_get_transform((Component *)pMVar1,(MethodInfo *)0x0);
                          if (pTVar3 != (Transform *)0x0) {
                            value.y = (float)this_01;
                            value.x = fVar7;
                            value.z = fVar8;
                            UnityEngine.CoreModule.dll::UnityEngine::Transform::
                            Transform_set_localScale(pTVar3,value,(MethodInfo *)0x0);
                            this_00 = (this->fields).materialCopy;
                            if (this_00 != (Material *)0x0) {
                              value_00.y = 1.0;
                              value_00.x = (float)&stack0xffffffd4 * (this->fields).lineDotDensity;
                              UnityEngine.CoreModule.dll::UnityEngine::Material::
                              Material_SetTextureScale
                                        (this_00,StringLiteral__MainTex,value_00,(MethodInfo *)0x0);
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
  func_?();
  pcVar9 = (code *)swi(3);
  (*pcVar9)();
  return;
}


/* LineRangeIndicator() */

void Assembly-CSharp.dll::LineRangeIndicator::LineRangeIndicator__ctor
               (LineRangeIndicator *this,MethodInfo *method)

{
  (this->fields).lineDotDensity = 4.1;
  (this->fields).lineWidth = 0.6;
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}

