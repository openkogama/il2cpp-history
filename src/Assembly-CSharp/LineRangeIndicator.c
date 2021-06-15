
/* Void CopyMaterial() */

void Assembly-CSharp.dll::LineRangeIndicator::LineRangeIndicator_CopyMaterial
               (LineRangeIndicator *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  source = (this->fields).lineDotMaterial;
  this_00 = (Material *)func_?(TypeInfo__UnityEngine__Material);
  UnityEngine.CoreModule.dll::UnityEngine::Material::Material__ctor_1
            (this_00,source,(MethodInfo *)0x0);
  pMVar1 = (this->fields).rangeIndicator;
  (this->fields).materialCopy = this_00;
  if (pMVar1 != (MeshRenderer *)0x0) {
    UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_sharedMaterial
              ((Renderer *)pMVar1,this_00,(MethodInfo *)0x0);
    pMVar1 = (this->fields).rangeIndicator_backside;
    if (pMVar1 != (MeshRenderer *)0x0) {
      UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_sharedMaterial
                ((Renderer *)pMVar1,(this->fields).materialCopy,(MethodInfo *)0x0);
      return;
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
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  fStack_1 = 0.0;
  fStack_2 = 0.0;
  uStack_3 = 0;
  if ((range <= 0.0) || ((this->fields).lineWidth <= 0.0)) {
    pMVar4 = (this->fields).rangeIndicator;
    if (pMVar4 != (MeshRenderer *)0x0) {
      pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                         ((Component_1 *)pMVar4,(MethodInfo *)0x0);
      if (pGVar5 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar5,0,(MethodInfo *)0x0);
        return;
      }
    }
  }
  else {
    pMVar4 = (this->fields).rangeIndicator;
    if (pMVar4 != (MeshRenderer *)0x0) {
      pGVar5 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_gameObject
                         ((Component_1 *)pMVar4,(MethodInfo *)0x0);
      if (pGVar5 != (GameObject *)0x0) {
        UnityEngine.CoreModule.dll::UnityEngine::GameObject::GameObject_SetActive
                  (pGVar5,1,(MethodInfo *)0x0);
        VStack_6.y = (this->fields).lineWidth * _UNK_?;
        VStack_6.z = 0.0;
        VStack_6.x = 1.0;
        func_?(&fStack_2,range * _UNK_?);
        pMVar4 = (this->fields).rangeIndicator;
        fStack_7 = fStack_2;
        if (pMVar4 != (MeshRenderer *)0x0) {
          pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                             ((Component_1 *)pMVar4,(MethodInfo *)0x0);
          if (pTVar8 != (Transform *)0x0) {
            pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_lossyScale
                               (&VStack_10,pTVar8,(MethodInfo *)0x0);
            uStack_11._0_4_ = pVVar9->x;
            uStack_11._4_4_ = pVVar9->y;
            fStack_12 = pVVar9->z;
            pMVar4 = (this->fields).rangeIndicator;
            if (pMVar4 != (MeshRenderer *)0x0) {
              pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                                 ((Component_1 *)pMVar4,(MethodInfo *)0x0);
              if (pTVar8 != (Transform *)0x0) {
                pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                         Transform_get_localScale(&VStack_6,pTVar8,(MethodInfo *)0x0);
                VStack_10.x = pVVar9->x;
                VStack_10.y = pVVar9->y;
                VStack_10.z = pVVar9->z;
                pMVar4 = (this->fields).rangeIndicator;
                fStack_2 = ((float)uStack_11 / VStack_10.x) * fStack_7;
                fStack_7 = fStack_1;
                if (pMVar4 != (MeshRenderer *)0x0) {
                  pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                           Component_1_get_transform((Component_1 *)pMVar4,(MethodInfo *)0x0);
                  if (pTVar8 != (Transform *)0x0) {
                    pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                             Transform_get_lossyScale(&VStack_6,pTVar8,(MethodInfo *)0x0);
                    VStack_10.x = pVVar9->x;
                    VStack_10.y = pVVar9->y;
                    VStack_10.z = pVVar9->z;
                    pMVar4 = (this->fields).rangeIndicator;
                    if (pMVar4 != (MeshRenderer *)0x0) {
                      pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                               Component_1_get_transform((Component_1 *)pMVar4,(MethodInfo *)0x0);
                      if (pTVar8 != (Transform *)0x0) {
                        pVVar9 = UnityEngine.CoreModule.dll::UnityEngine::Transform::
                                 Transform_get_localScale(&VStack_6,pTVar8,(MethodInfo *)0x0);
                        uStack_11._0_4_ = pVVar9->x;
                        uStack_11._4_4_ = pVVar9->y;
                        fStack_12 = pVVar9->z;
                        pMVar4 = (this->fields).rangeIndicator;
                        fStack_1 = (VStack_10.z / fStack_12) * fStack_7;
                        if (pMVar4 != (MeshRenderer *)0x0) {
                          pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::
                                   Component_1_get_transform
                                             ((Component_1 *)pMVar4,(MethodInfo *)0x0);
                          if (pTVar8 != (Transform *)0x0) {
                            value.y = (float)uStack_3;
                            value.x = fStack_2;
                            value.z = fStack_1;
                            UnityEngine.CoreModule.dll::UnityEngine::Transform::
                            Transform_set_localScale(pTVar8,value,(MethodInfo *)0x0);
                            this_00 = (this->fields).materialCopy;
                            VStack_13.x = 0.0;
                            VStack_13.y = 0.0;
                            VStack_6.x = (this->fields).lineDotDensity * range;
                            VStack_6.z = 0.0;
                            VStack_6.y = 1.0;
                            func_?(&VStack_13);
                            if (this_00 != (Material *)0x0) {
                              UnityEngine.CoreModule.dll::UnityEngine::Material::
                              Material_SetTextureScale
                                        (this_00,StringLiteral__MainTex,VStack_13,(MethodInfo *)0x0)
                              ;
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
  func_?(0);
  pcVar14 = (code *)swi(3);
  (*pcVar14)();
  return;
}


/* LineRangeIndicator() */

void Assembly-CSharp.dll::LineRangeIndicator::LineRangeIndicator__ctor
               (LineRangeIndicator *this,MethodInfo *method)

{
  (this->fields).lineDotDensity = 4.1;
  (this->fields).lineWidth = 0.6;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  return;
}

