
/* Void Awake() */

void Assembly-CSharp.dll::AvatarAccessory::AvatarAccessory_Awake
               (AvatarAccessory *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__Collider__MethodInfo__UnityEngine__Component__GetComponentsInChildren<UnityEngine::Collider>______
                   );
    cRam_? = '\x01';
  }
  if ((this->fields)._colliders == (Collider__Array *)0x0) {
    pCVar1 = (Collider__Array *)
             UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponentsInChildren
                       ((Component *)this,
                        UnityEngine__Collider__MethodInfo__UnityEngine__Component__GetComponentsInChildren<UnityEngine::Collider>______
                       );
    (this->fields)._colliders = pCVar1;
    func_?(&(this->fields)._colliders,pCVar1);
  }
  pCVar1 = (this->fields)._colliders;
  uVar2 = 0;
  if (pCVar1 != (Collider__Array *)0x0) {
    ppCVar3 = pCVar1->vector;
    for (; (int)uVar2 < (int)pCVar1->max_length; uVar2 = uVar2 + 1) {
      if (pCVar1->max_length <= uVar2) goto code_?;
      if (*ppCVar3 == (Collider *)0x0) goto code_?;
      UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_set_enabled
                (*ppCVar3,0,(MethodInfo *)0x0);
      ppCVar3 = ppCVar3 + 1;
    }
    if (cRam_? == '\0') {
      func_?(&
                      UnityEngine__Renderer__MethodInfo__UnityEngine__Component__GetComponentsInChildren<UnityEngine::Renderer>______
                     );
      cRam_? = '\x01';
    }
    if ((this->fields)._renderers == (Renderer__Array *)0x0) {
      pRVar4 = (Renderer__Array *)
               UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponentsInChildren
                         ((Component *)this,
                          UnityEngine__Renderer__MethodInfo__UnityEngine__Component__GetComponentsInChildren<UnityEngine::Renderer>______
                         );
      (this->fields)._renderers = pRVar4;
      func_?(&(this->fields)._renderers,pRVar4);
    }
    pRVar4 = (this->fields)._renderers;
    uVar2 = 0;
    if (pRVar4 != (Renderer__Array *)0x0) {
      ppRVar5 = pRVar4->vector;
      while( true ) {
        if ((int)pRVar4->max_length <= (int)uVar2) {
          return;
        }
        if (pRVar4->max_length <= uVar2) break;
        if (*ppRVar5 == (Renderer *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled
                  (*ppRVar5,(this->fields)._visible,(MethodInfo *)0x0);
        uVar2 = uVar2 + 1;
        ppRVar5 = ppRVar5 + 1;
      }
code_?:
      func_?();
    }
  }
code_?:
  func_?();
  pcVar6 = (code *)swi(3);
  (*pcVar6)();
  return;
}


/* Bounds GetLocalBounds() */

Bounds * Assembly-CSharp.dll::AvatarAccessory::AvatarAccessory_GetLocalBounds
                   (Bounds *__return_storage_ptr__,AvatarAccessory *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  (__return_storage_ptr__->m_Center).x = 0.0;
  (__return_storage_ptr__->m_Center).y = 0.0;
  (__return_storage_ptr__->m_Center).z = 0.0;
  (__return_storage_ptr__->m_Extents).x = 0.0;
  pAVar1 = this->klass;
  (__return_storage_ptr__->m_Extents).y = 0.0;
  (__return_storage_ptr__->m_Extents).z = 0.0;
  pfVar2 = (float *)(*(code *)(pAVar1->vtable).GetWorldBounds.method)
                               (&stack0xffffffcc,this,(pAVar1->vtable).GetLocalBounds.methodPtr);
  fVar3 = pfVar2[1];
  fVar4 = pfVar2[2];
  fVar5 = pfVar2[3];
  (__return_storage_ptr__->m_Center).x = *pfVar2;
  (__return_storage_ptr__->m_Center).y = fVar3;
  (__return_storage_ptr__->m_Center).z = fVar4;
  (__return_storage_ptr__->m_Extents).x = fVar5;
  fVar3 = pfVar2[5];
  (__return_storage_ptr__->m_Extents).y = pfVar2[4];
  (__return_storage_ptr__->m_Extents).z = fVar3;
  pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                      ((Component *)this,(MethodInfo *)0x0);
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar7 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                     ((Object_1 *)pTVar6,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar7 != 0) {
    uVar8 = (__return_storage_ptr__->m_Center).x;
    uVar9 = (__return_storage_ptr__->m_Center).y;
    fVar3 = (__return_storage_ptr__->m_Center).z;
    pTVar6 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                        ((Component *)this,(MethodInfo *)0x0);
    if (pTVar6 == (Transform *)0x0) {
      func_?();
      pcVar10 = (code *)swi(3);
      pBVar11 = (Bounds *)(*pcVar10)();
      return pBVar11;
    }
    pVVar12 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                        ((Vector3 *)&stack0xffffffd8,pTVar6,(MethodInfo *)0x0);
    uVar13 = pVVar12->x;
    uVar14 = pVVar12->y;
    fVar4 = pVVar12->z;
    (__return_storage_ptr__->m_Center).x = (float)uVar8 - (float)uVar13;
    (__return_storage_ptr__->m_Center).y = (float)uVar9 - (float)uVar14;
    (__return_storage_ptr__->m_Center).z = fVar3 - fVar4;
  }
  return __return_storage_ptr__;
}


/* Bounds GetWorldBounds() */

Bounds * Assembly-CSharp.dll::AvatarAccessory::AvatarAccessory_GetWorldBounds
                   (Bounds *__return_storage_ptr__,AvatarAccessory *this,MethodInfo *method)

{
  bVar1 = cRam_? == '\0';
  (__return_storage_ptr__->m_Center).x = 0.0;
  (__return_storage_ptr__->m_Center).y = 0.0;
  (__return_storage_ptr__->m_Center).z = 0.0;
  (__return_storage_ptr__->m_Extents).x = 0.0;
  (__return_storage_ptr__->m_Extents).y = 0.0;
  (__return_storage_ptr__->m_Extents).z = 0.0;
  if (bVar1) {
    func_?(&
                    UnityEngine__Renderer__MethodInfo__UnityEngine__Component__GetComponentsInChildren<UnityEngine::Renderer>______
                   );
    cRam_? = '\x01';
  }
  if ((this->fields)._renderers == (Renderer__Array *)0x0) {
    pRVar2 = (Renderer__Array *)
             UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponentsInChildren
                       ((Component *)this,
                        UnityEngine__Renderer__MethodInfo__UnityEngine__Component__GetComponentsInChildren<UnityEngine::Renderer>______
                       );
    (this->fields)._renderers = pRVar2;
    func_?(&(this->fields)._renderers,pRVar2);
  }
  pRVar2 = (this->fields)._renderers;
  uVar3 = 0;
  if (pRVar2 == (Renderer__Array *)0x0) {
code_?:
    func_?();
  }
  else {
    ppRVar4 = pRVar2->vector;
    while( true ) {
      if ((int)pRVar2->max_length <= (int)uVar3) {
        return __return_storage_ptr__;
      }
      if (pRVar2->max_length <= uVar3) break;
      if (*ppRVar4 == (Renderer *)0x0) goto code_?;
      pBVar5 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_bounds
                         (&BStack_6,*ppRVar4,(MethodInfo *)0x0);
      fVar7 = (pBVar5->m_Center).y;
      fVar8 = (pBVar5->m_Center).z;
      fVar9 = (pBVar5->m_Extents).x;
      fVar10 = (pBVar5->m_Extents).y;
      fVar11 = (pBVar5->m_Extents).z;
      (__return_storage_ptr__->m_Center).x = (pBVar5->m_Center).x;
      (__return_storage_ptr__->m_Center).y = fVar7;
      (__return_storage_ptr__->m_Center).z = fVar8;
      (__return_storage_ptr__->m_Extents).x = fVar9;
      (__return_storage_ptr__->m_Extents).y = fVar10;
      (__return_storage_ptr__->m_Extents).z = fVar11;
      uVar3 = uVar3 + 1;
      ppRVar4 = ppRVar4 + 1;
    }
  }
  func_?();
  pcVar12 = (code *)swi(3);
  pBVar5 = (Bounds *)(*pcVar12)();
  return pBVar5;
}


/* Void InitAccessory(String, String) */

void Assembly-CSharp.dll::AvatarAccessory::AvatarAccessory_InitAccessory
               (AvatarAccessory *this,String *assetReqPath,String *bundleName,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_Accessory_);
    cRam_? = '\x01';
  }
  (this->fields)._AssetPath_k__BackingField = assetReqPath;
  func_?(&(this->fields)._AssetPath_k__BackingField,assetReqPath);
  value = mscorlib.dll::System::String::String_Concat_3
                    (StringLiteral_Accessory_,(this->fields)._AssetPath_k__BackingField,
                     (MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_set_name
            ((Object_1 *)this,value,(MethodInfo *)0x0);
  return;
}


/* Collider[] get_Colliders() */

Collider__Array *
Assembly-CSharp.dll::AvatarAccessory::AvatarAccessory_get_Colliders
          (AvatarAccessory *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__Collider__MethodInfo__UnityEngine__Component__GetComponentsInChildren<UnityEngine::Collider>______
                   );
    cRam_? = '\x01';
  }
  if ((this->fields)._colliders == (Collider__Array *)0x0) {
    pCVar1 = (Collider__Array *)
             UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponentsInChildren
                       ((Component *)this,
                        UnityEngine__Collider__MethodInfo__UnityEngine__Component__GetComponentsInChildren<UnityEngine::Collider>______
                       );
    (this->fields)._colliders = pCVar1;
    func_?(&(this->fields)._colliders,pCVar1);
  }
  return (this->fields)._colliders;
}


/* Renderer[] get_Renderers() */

Renderer__Array *
Assembly-CSharp.dll::AvatarAccessory::AvatarAccessory_get_Renderers
          (AvatarAccessory *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&
                    UnityEngine__Renderer__MethodInfo__UnityEngine__Component__GetComponentsInChildren<UnityEngine::Renderer>______
                   );
    cRam_? = '\x01';
  }
  if ((this->fields)._renderers == (Renderer__Array *)0x0) {
    pRVar1 = (Renderer__Array *)
             UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponentsInChildren
                       ((Component *)this,
                        UnityEngine__Renderer__MethodInfo__UnityEngine__Component__GetComponentsInChildren<UnityEngine::Renderer>______
                       );
    (this->fields)._renderers = pRVar1;
    func_?(&(this->fields)._renderers,pRVar1);
  }
  return (this->fields)._renderers;
}


/* Transform get_Transform() */

Transform *
Assembly-CSharp.dll::AvatarAccessory::AvatarAccessory_get_Transform
          (AvatarAccessory *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Object);
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields)._transform;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pTVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this,(MethodInfo *)0x0);
    (this->fields)._transform = pTVar1;
    func_?(&(this->fields)._transform,pTVar1);
  }
  return (this->fields)._transform;
}


/* Void set_Visible(Boolean) */

void Assembly-CSharp.dll::AvatarAccessory::AvatarAccessory_set_Visible
               (AvatarAccessory *this,bool value,MethodInfo *method)

{
  if ((this->fields)._visible != value) {
    if (cRam_? == '\0') {
      func_?(&
                      UnityEngine__Renderer__MethodInfo__UnityEngine__Component__GetComponentsInChildren<UnityEngine::Renderer>______
                     );
      cRam_? = '\x01';
    }
    if ((this->fields)._renderers == (Renderer__Array *)0x0) {
      pRVar1 = (Renderer__Array *)
               UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponentsInChildren
                         ((Component *)this,
                          UnityEngine__Renderer__MethodInfo__UnityEngine__Component__GetComponentsInChildren<UnityEngine::Renderer>______
                         );
      (this->fields)._renderers = pRVar1;
      func_?(&(this->fields)._renderers,pRVar1);
    }
    pRVar1 = (this->fields)._renderers;
    uVar2 = 0;
    if (pRVar1 == (Renderer__Array *)0x0) {
code_?:
      func_?();
code_?:
      func_?();
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    ppRVar4 = pRVar1->vector;
    for (; (int)uVar2 < (int)pRVar1->max_length; uVar2 = uVar2 + 1) {
      if (pRVar1->max_length <= uVar2) goto code_?;
      if (*ppRVar4 == (Renderer *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled
                (*ppRVar4,value,(MethodInfo *)0x0);
      ppRVar4 = ppRVar4 + 1;
    }
    (this->fields)._visible = value;
  }
  return;
}

