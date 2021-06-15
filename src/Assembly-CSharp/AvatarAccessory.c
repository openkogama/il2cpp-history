
/* Void Awake() */

void Assembly-CSharp.dll::AvatarAccessory::AvatarAccessory_Awake
               (AvatarAccessory *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pUVar1 = (UseInteratorVisualization__Array *)(this->fields)._colliders;
  if (pUVar1 == (UseInteratorVisualization__Array *)0x0) {
    pUVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
             GameObject_GetComponentsInChildren_29
                       ((GameObject *)this,
                        UnityEngine__Collider__MethodInfo__UnityEngine__Component__GetComponentsInChildren<UnityEngine::Collider>______
                       );
    (this->fields)._colliders = (Collider__Array *)pUVar1;
  }
  uVar2 = 0;
  if (pUVar1 != (UseInteratorVisualization__Array *)0x0) {
    ppUVar3 = pUVar1->vector;
    for (; (int)uVar2 < (int)pUVar1->max_length; uVar2 = uVar2 + 1) {
      if (pUVar1->max_length <= uVar2) goto code_?;
      if (*ppUVar3 == (UseInteratorVisualization *)0x0) goto code_?;
      UnityEngine.PhysicsModule.dll::UnityEngine::Collider::Collider_set_enabled
                ((Collider *)*ppUVar3,0,(MethodInfo *)0x0);
      ppUVar3 = ppUVar3 + 1;
    }
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    pUVar1 = (UseInteratorVisualization__Array *)(this->fields)._renderers;
    if (pUVar1 == (UseInteratorVisualization__Array *)0x0) {
      pUVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
               GameObject_GetComponentsInChildren_29
                         ((GameObject *)this,
                          UnityEngine__Renderer__MethodInfo__UnityEngine__Component__GetComponentsInChildren<UnityEngine::Renderer>______
                         );
      (this->fields)._renderers = (Renderer__Array *)pUVar1;
    }
    uVar2 = 0;
    if (pUVar1 != (UseInteratorVisualization__Array *)0x0) {
      ppUVar3 = pUVar1->vector;
      while( true ) {
        if ((int)pUVar1->max_length <= (int)uVar2) {
          return;
        }
        if (pUVar1->max_length <= uVar2) break;
        if (*ppUVar3 == (UseInteratorVisualization *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled
                  ((Renderer *)*ppUVar3,(this->fields)._visible,(MethodInfo *)0x0);
        uVar2 = uVar2 + 1;
        ppUVar3 = ppUVar3 + 1;
      }
code_?:
      uVar4 = func_?(0,0);
      func_?(uVar4);
    }
  }
code_?:
  func_?(0);
  pcVar5 = (code *)swi(3);
  (*pcVar5)();
  return;
}


/* Bounds GetLocalBounds() */

Bounds * Assembly-CSharp.dll::AvatarAccessory::AvatarAccessory_GetLocalBounds
                   (Bounds *__return_storage_ptr__,AvatarAccessory *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  puVar1 = (undefined4 *)
           (*(code *)(this->klass->vtable).GetWorldBounds.method)
                     (&stack0xffffffd0,this,(this->klass->vtable).GetLocalBounds.methodPtr);
  pVVar2 = (Vector3 *)*puVar1;
  fVar3 = (float)puVar1[1];
  fVar4 = (float)puVar1[2];
  fVar5 = (float)puVar1[3];
  uVar6 = (undefined4)*(undefined8 *)(puVar1 + 4);
  uVar7 = (undefined4)((ulonglong)*(undefined8 *)(puVar1 + 4) >> 0x20);
  pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                     ((Component_1 *)this,(MethodInfo *)0x0);
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar9 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pTVar8,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar9 != 0) {
    puVar10 = (undefined8 *)func_?();
    uStack_11 = *puVar10;
    fVar5 = *(float *)(puVar10 + 1);
    pTVar8 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                       ((Component_1 *)this,(MethodInfo *)0x0);
    if (pTVar8 == (Transform *)0x0) {
      func_?();
      pcVar12 = (code *)swi(3);
      pBVar13 = (Bounds *)(*pcVar12)();
      return pBVar13;
    }
    pVVar2 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       (&VStack_14,pTVar8,(MethodInfo *)0x0);
    uStack_15._0_4_ = pVVar2->x;
    uStack_15._4_4_ = pVVar2->y;
    fVar16 = pVVar2->z;
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?();
    }
    uVar6 = (undefined4)uStack_15;
    uVar7 = (undefined4)(uStack_15 >> 0x20);
    fVar3 = (float)uStack_11;
    fVar4 = (float)((ulonglong)uStack_11 >> 0x20);
    pVVar2 = &VStack_14;
    a.z = fVar5;
    a.x = (float)(undefined4)uStack_11;
    a.y = (float)uStack_11._4_4_;
    b.z = fVar16;
    b.x = (float)(undefined4)uStack_15;
    b.y = (float)uStack_15._4_4_;
    pVVar17 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_op_Subtraction
                       (pVVar2,a,b,(MethodInfo *)0x0);
    uStack_11._0_4_ = pVVar17->x;
    uStack_11._4_4_ = pVVar17->y;
    fStack_18 = pVVar17->z;
    uStack_15 = uStack_15 & 0xffffffff00000000;
    VStack_14.z = (float)&stack0xffffffb8;
    VStack_14.y = (float)&UNK_?;
    func_?();
  }
  (__return_storage_ptr__->m_Center).x = (float)pVVar2;
  (__return_storage_ptr__->m_Center).y = fVar3;
  (__return_storage_ptr__->m_Center).z = fVar4;
  (__return_storage_ptr__->m_Extents).x = fVar5;
  (__return_storage_ptr__->m_Extents).y = (float)uVar6;
  (__return_storage_ptr__->m_Extents).z = (float)uVar7;
  return __return_storage_ptr__;
}


/* Bounds GetWorldBounds() */

Bounds * Assembly-CSharp.dll::AvatarAccessory::AvatarAccessory_GetWorldBounds
                   (Bounds *__return_storage_ptr__,AvatarAccessory *this,MethodInfo *method)

{
  fStack_1 = 0.0;
  fStack_2 = 0.0;
  fStack_3 = 0.0;
  fStack_4 = 0.0;
  uStack_5 = 0;
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pUVar6 = (UseInteratorVisualization__Array *)(this->fields)._renderers;
  if (pUVar6 == (UseInteratorVisualization__Array *)0x0) {
    pUVar6 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
             GameObject_GetComponentsInChildren_29
                       ((GameObject *)this,
                        UnityEngine__Renderer__MethodInfo__UnityEngine__Component__GetComponentsInChildren<UnityEngine::Renderer>______
                       );
    (this->fields)._renderers = (Renderer__Array *)pUVar6;
  }
  uVar7 = 0;
  if (pUVar6 == (UseInteratorVisualization__Array *)0x0) {
code_?:
    func_?(0);
  }
  else {
    ppUVar8 = pUVar6->vector;
    while( true ) {
      if ((int)pUVar6->max_length <= (int)uVar7) {
        (__return_storage_ptr__->m_Center).x = fStack_1;
        (__return_storage_ptr__->m_Center).y = fStack_2;
        (__return_storage_ptr__->m_Center).z = fStack_3;
        (__return_storage_ptr__->m_Extents).x = fStack_4;
        (__return_storage_ptr__->m_Extents).y = (float)(undefined4)uStack_5;
        (__return_storage_ptr__->m_Extents).z = (float)uStack_5._4_4_;
        return __return_storage_ptr__;
      }
      if (pUVar6->max_length <= uVar7) break;
      if (*ppUVar8 == (UseInteratorVisualization *)0x0) goto code_?;
      pBVar9 = UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_get_bounds
                         (&BStack_10,(Renderer *)*ppUVar8,(MethodInfo *)0x0);
      fStack_1 = (pBVar9->m_Center).x;
      fStack_2 = (pBVar9->m_Center).y;
      fStack_3 = (pBVar9->m_Center).z;
      fStack_4 = (pBVar9->m_Extents).x;
      uStack_5._0_4_ = (pBVar9->m_Extents).y;
      uStack_5._4_4_ = (pBVar9->m_Extents).z;
      uVar7 = uVar7 + 1;
      ppUVar8 = ppUVar8 + 1;
    }
  }
  uVar11 = func_?(0,0);
  func_?(uVar11);
  pcVar12 = (code *)swi(3);
  pBVar9 = (Bounds *)(*pcVar12)();
  return pBVar9;
}


/* Void InitAccessory(String, String) */

void Assembly-CSharp.dll::AvatarAccessory::AvatarAccessory_InitAccessory
               (AvatarAccessory *this,String *assetReqPath,String *bundleName,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  (this->fields)._AssetPath_k__BackingField = assetReqPath;
  if ((((uint)(TypeInfo__System__String->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__System__String->_1).cctor_started == 0)) {
    func_?(TypeInfo__System__String);
  }
  value = mscorlib.dll::System::String::String_Concat_2
                    (StringLiteral_Accessory_,assetReqPath,(MethodInfo *)0x0);
  UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_set_name
            ((Object_1 *)this,value,(MethodInfo *)0x0);
  return;
}


/* Vector3 get_AttachmentPointWorldPos() */

Vector3 * Assembly-CSharp.dll::AvatarAccessory::AvatarAccessory_get_AttachmentPointWorldPos
                    (Vector3 *__return_storage_ptr__,AvatarAccessory *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Vector3);
  }
  pVVar1 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                     (&VStack_2,(MethodInfo *)0x0);
  fVar3 = pVVar1->y;
  fVar4 = pVVar1->z;
  __return_storage_ptr__->x = pVVar1->x;
  __return_storage_ptr__->y = fVar3;
  __return_storage_ptr__->z = fVar4;
  return __return_storage_ptr__;
}


/* Collider[] get_Colliders() */

Collider__Array *
Assembly-CSharp.dll::AvatarAccessory::AvatarAccessory_get_Colliders
          (AvatarAccessory *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pUVar1 = (UseInteratorVisualization__Array *)(this->fields)._colliders;
  if (pUVar1 == (UseInteratorVisualization__Array *)0x0) {
    pUVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
             GameObject_GetComponentsInChildren_29
                       ((GameObject *)this,
                        UnityEngine__Collider__MethodInfo__UnityEngine__Component__GetComponentsInChildren<UnityEngine::Collider>______
                       );
    (this->fields)._colliders = (Collider__Array *)pUVar1;
  }
  return (Collider__Array *)pUVar1;
}


/* Renderer[] get_Renderers() */

Renderer__Array *
Assembly-CSharp.dll::AvatarAccessory::AvatarAccessory_get_Renderers
          (AvatarAccessory *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pUVar1 = (UseInteratorVisualization__Array *)(this->fields)._renderers;
  if (pUVar1 == (UseInteratorVisualization__Array *)0x0) {
    pUVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
             GameObject_GetComponentsInChildren_29
                       ((GameObject *)this,
                        UnityEngine__Renderer__MethodInfo__UnityEngine__Component__GetComponentsInChildren<UnityEngine::Renderer>______
                       );
    (this->fields)._renderers = (Renderer__Array *)pUVar1;
  }
  return (Renderer__Array *)pUVar1;
}


/* Transform get_Transform() */

Transform *
Assembly-CSharp.dll::AvatarAccessory::AvatarAccessory_get_Transform
          (AvatarAccessory *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields)._transform;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pTVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pTVar1 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                       ((Component_1 *)this,(MethodInfo *)0x0);
    (this->fields)._transform = pTVar1;
  }
  return (this->fields)._transform;
}


/* Void set_Offset(Single) */

void Assembly-CSharp.dll::AvatarAccessory::AvatarAccessory_set_Offset
               (AvatarAccessory *this,float value,MethodInfo *method)

{
  (this->fields)._Offset_k__BackingField = value;
  return;
}


/* Void set_Visible(Boolean) */

void Assembly-CSharp.dll::AvatarAccessory::AvatarAccessory_set_Visible
               (AvatarAccessory *this,bool value,MethodInfo *method)

{
  if ((this->fields)._visible != value) {
    if (cRam_? == '\0') {
      func_?(_UNK_?);
      cRam_? = '\x01';
    }
    pUVar1 = (UseInteratorVisualization__Array *)(this->fields)._renderers;
    if (pUVar1 == (UseInteratorVisualization__Array *)0x0) {
      pUVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
               GameObject_GetComponentsInChildren_29
                         ((GameObject *)this,
                          UnityEngine__Renderer__MethodInfo__UnityEngine__Component__GetComponentsInChildren<UnityEngine::Renderer>______
                         );
      (this->fields)._renderers = (Renderer__Array *)pUVar1;
    }
    uVar2 = 0;
    if (pUVar1 == (UseInteratorVisualization__Array *)0x0) {
code_?:
      func_?(0);
code_?:
      uVar3 = func_?(0,0);
      func_?(uVar3);
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    ppUVar5 = pUVar1->vector;
    for (; (int)uVar2 < (int)pUVar1->max_length; uVar2 = uVar2 + 1) {
      if (pUVar1->max_length <= uVar2) goto code_?;
      if (*ppUVar5 == (UseInteratorVisualization *)0x0) goto code_?;
      UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled
                ((Renderer *)*ppUVar5,value,(MethodInfo *)0x0);
      ppUVar5 = ppUVar5 + 1;
    }
    (this->fields)._visible = value;
  }
  return;
}

