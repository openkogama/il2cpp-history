
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
  ppCVar1 = &(this->fields)._colliders;
  if ((this->fields)._colliders == (Collider__Array *)0x0) {
    pCVar2 = (Collider__Array *)
             UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponentsInChildren
                       ((Component *)this,
                        UnityEngine__Collider__MethodInfo__UnityEngine__Component__GetComponentsInChildren<UnityEngine::Collider>______
                       );
    *ppCVar1 = pCVar2;
    func_?(ppCVar1,pCVar2);
  }
  pCVar2 = *ppCVar1;
  uVar3 = 0;
  if (pCVar2 != (Collider__Array *)0x0) {
    ppCVar4 = pCVar2->vector;
    for (; (int)uVar3 < (int)pCVar2->max_length; uVar3 = uVar3 + 1) {
      if (pCVar2->max_length <= uVar3) goto code_?;
      if (*ppCVar4 == (Collider *)0x0) goto code_?;
      UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_set_enabled
                (*ppCVar4,0,(MethodInfo *)0x0);
      ppCVar4 = ppCVar4 + 1;
    }
    if (cRam_? == '\0') {
      func_?(&
                      UnityEngine__Renderer__MethodInfo__UnityEngine__Component__GetComponentsInChildren<UnityEngine::Renderer>______
                     );
      cRam_? = '\x01';
    }
    ppRVar5 = &(this->fields)._renderers;
    if ((this->fields)._renderers == (Renderer__Array *)0x0) {
      pRVar6 = (Renderer__Array *)
               UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponentsInChildren
                         ((Component *)this,
                          UnityEngine__Renderer__MethodInfo__UnityEngine__Component__GetComponentsInChildren<UnityEngine::Renderer>______
                         );
      *ppRVar5 = pRVar6;
      func_?(ppRVar5,pRVar6);
    }
    pRVar6 = *ppRVar5;
    uVar3 = 0;
    if (pRVar6 != (Renderer__Array *)0x0) {
      ppRVar7 = pRVar6->vector;
      while( true ) {
        if ((int)pRVar6->max_length <= (int)uVar3) {
          return;
        }
        if (pRVar6->max_length <= uVar3) break;
        if (*ppRVar7 == (Renderer *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled
                  (*ppRVar7,(this->fields)._visible,(MethodInfo *)0x0);
        uVar3 = uVar3 + 1;
        ppRVar7 = ppRVar7 + 1;
      }
code_?:
      func_?();
    }
  }
code_?:
  func_?();
  pcVar8 = (code *)swi(3);
  (*pcVar8)();
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
  ppRVar2 = &(this->fields)._renderers;
  if ((this->fields)._renderers == (Renderer__Array *)0x0) {
    pRVar3 = (Renderer__Array *)
             UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponentsInChildren
                       ((Component *)this,
                        UnityEngine__Renderer__MethodInfo__UnityEngine__Component__GetComponentsInChildren<UnityEngine::Renderer>______
                       );
    *ppRVar2 = pRVar3;
    func_?(ppRVar2,pRVar3);
  }
  pRVar3 = *ppRVar2;
  uVar4 = 0;
  if (pRVar3 == (Renderer__Array *)0x0) {
code_?:
    func_?();
  }
  else {
    ppRVar5 = pRVar3->vector;
    while( true ) {
      if ((int)pRVar3->max_length <= (int)uVar4) {
        return __return_storage_ptr__;
      }
      if (pRVar3->max_length <= uVar4) break;
      if (*ppRVar5 == (Renderer *)0x0) goto code_?;
      pBVar6 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_bounds
                         (&BStack_7,*ppRVar5,(MethodInfo *)0x0);
      fVar8 = (pBVar6->m_Center).y;
      fVar9 = (pBVar6->m_Center).z;
      fVar10 = (pBVar6->m_Extents).x;
      fVar11 = (pBVar6->m_Extents).y;
      fVar12 = (pBVar6->m_Extents).z;
      (__return_storage_ptr__->m_Center).x = (pBVar6->m_Center).x;
      (__return_storage_ptr__->m_Center).y = fVar8;
      (__return_storage_ptr__->m_Center).z = fVar9;
      (__return_storage_ptr__->m_Extents).x = fVar10;
      (__return_storage_ptr__->m_Extents).y = fVar11;
      (__return_storage_ptr__->m_Extents).z = fVar12;
      uVar4 = uVar4 + 1;
      ppRVar5 = ppRVar5 + 1;
    }
  }
  func_?();
  pcVar13 = (code *)swi(3);
  pBVar6 = (Bounds *)(*pcVar13)();
  return pBVar6;
}


/* Void InitAccessory(String, String) */

void Assembly-CSharp.dll::AvatarAccessory::AvatarAccessory_InitAccessory
               (AvatarAccessory *this,String *assetReqPath,String *bundleName,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&StringLiteral_Accessory_);
    cRam_? = '\x01';
  }
  ppSVar1 = &(this->fields)._AssetPath_k__BackingField;
  *ppSVar1 = assetReqPath;
  func_?(ppSVar1,assetReqPath);
  value = mscorlib.dll::System::String::String_Concat_3
                    (StringLiteral_Accessory_,*ppSVar1,(MethodInfo *)0x0);
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
  ppCVar1 = &(this->fields)._colliders;
  if ((this->fields)._colliders == (Collider__Array *)0x0) {
    pCVar2 = (Collider__Array *)
             UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponentsInChildren
                       ((Component *)this,
                        UnityEngine__Collider__MethodInfo__UnityEngine__Component__GetComponentsInChildren<UnityEngine::Collider>______
                       );
    *ppCVar1 = pCVar2;
    func_?(ppCVar1,pCVar2);
  }
  return *ppCVar1;
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
  ppRVar1 = &(this->fields)._renderers;
  if ((this->fields)._renderers == (Renderer__Array *)0x0) {
    pRVar2 = (Renderer__Array *)
             UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponentsInChildren
                       ((Component *)this,
                        UnityEngine__Renderer__MethodInfo__UnityEngine__Component__GetComponentsInChildren<UnityEngine::Renderer>______
                       );
    *ppRVar1 = pRVar2;
    func_?(ppRVar1,pRVar2);
  }
  return *ppRVar1;
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
  ppTVar2 = &(this->fields)._transform;
  if ((TypeInfo__UnityEngine__Object->_1).cctor_finished_or_no_cctor == 0) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar3 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pTVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar3 != 0) {
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_get_transform
                       ((Component *)this,(MethodInfo *)0x0);
    *ppTVar2 = pTVar1;
    func_?(ppTVar2,pTVar1);
  }
  return *ppTVar2;
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
    ppRVar1 = &(this->fields)._renderers;
    if ((this->fields)._renderers == (Renderer__Array *)0x0) {
      pRVar2 = (Renderer__Array *)
               UnityEngine.CoreModule.dll::UnityEngine::Component::Component_GetComponentsInChildren
                         ((Component *)this,
                          UnityEngine__Renderer__MethodInfo__UnityEngine__Component__GetComponentsInChildren<UnityEngine::Renderer>______
                         );
      *ppRVar1 = pRVar2;
      func_?(ppRVar1,pRVar2);
    }
    pRVar2 = *ppRVar1;
    uVar3 = 0;
    if (pRVar2 == (Renderer__Array *)0x0) {
code_?:
      func_?();
code_?:
      func_?();
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    ppRVar5 = pRVar2->vector;
    for (; (int)uVar3 < (int)pRVar2->max_length; uVar3 = uVar3 + 1) {
      if (pRVar2->max_length <= uVar3) goto code_?;
      if (*ppRVar5 == (Renderer *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled
                (*ppRVar5,value,(MethodInfo *)0x0);
      ppRVar5 = ppRVar5 + 1;
    }
    (this->fields)._visible = value;
  }
  return;
}

