
/* Void Awake() */

void Assembly-CSharp.dll::AvatarAccessoryBackAccessories::AvatarAccessoryBackAccessories_Awake
               (AvatarAccessoryBackAccessories *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pUVar1 = (UseInteratorVisualization__Array *)(this->fields)._._colliders;
  if (pUVar1 == (UseInteratorVisualization__Array *)0x0) {
    pUVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
             GameObject_GetComponentsInChildren_29
                       ((GameObject *)this,
                        UnityEngine__Collider__MethodInfo__UnityEngine__Component__GetComponentsInChildren<UnityEngine::Collider>______
                       );
    (this->fields)._._colliders = (Collider__Array *)pUVar1;
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
    pUVar1 = (UseInteratorVisualization__Array *)(this->fields)._._renderers;
    if (pUVar1 == (UseInteratorVisualization__Array *)0x0) {
      pUVar1 = UnityEngine.CoreModule.dll::UnityEngine::GameObject::
               GameObject_GetComponentsInChildren_29
                         ((GameObject *)this,
                          UnityEngine__Renderer__MethodInfo__UnityEngine__Component__GetComponentsInChildren<UnityEngine::Renderer>______
                         );
      (this->fields)._._renderers = (Renderer__Array *)pUVar1;
    }
    uVar2 = 0;
    if (pUVar1 != (UseInteratorVisualization__Array *)0x0) {
      ppUVar3 = pUVar1->vector;
      while( true ) {
        if ((int)pUVar1->max_length <= (int)uVar2) {
          if (cRam_? == '\0') {
            func_?(_UNK_?);
            cRam_? = '\x01';
          }
          pTVar4 = (this->fields)._._transform;
          if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
            func_?(TypeInfo__UnityEngine__Object);
          }
          bVar5 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                            ((Object_1 *)pTVar4,(Object_1 *)0x0,(MethodInfo *)0x0);
          if (bVar5 != 0) {
            pTVar4 = UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_get_transform
                               ((Component_1 *)this,(MethodInfo *)0x0);
            (this->fields)._._transform = pTVar4;
          }
          pTVar4 = (this->fields)._._transform;
          if ((((uint)(TypeInfo__Extensions->vtable).Equals.methodPtr & 0x2000000) != 0) &&
             ((TypeInfo__Extensions->_1).cctor_started == 0)) {
            func_?();
          }
          pTVar4 = Extensions::Extensions_FindChildRecursively
                             (pTVar4,StringLiteral_WingsAttachPoint,(MethodInfo *)0x0);
          (this->fields).attachPosTfm = pTVar4;
          return;
        }
        if (pUVar1->max_length <= uVar2) break;
        if (*ppUVar3 == (UseInteratorVisualization *)0x0) goto code_?;
        UnityEngine.CoreModule.dll::UnityEngine::Renderer::Renderer_set_enabled
                  ((Renderer *)*ppUVar3,(this->fields)._._visible,(MethodInfo *)0x0);
        uVar2 = uVar2 + 1;
        ppUVar3 = ppUVar3 + 1;
      }
      goto code_?;
    }
  }
code_?:
  func_?(0);
code_?:
  uVar6 = func_?(0,0);
  func_?(uVar6);
  pcVar7 = (code *)swi(3);
  (*pcVar7)();
  return;
}


/* AccessorySettings get_AccessorySettings() */

AccessorySettings *
Assembly-CSharp.dll::AvatarAccessoryBackAccessories::
AvatarAccessoryBackAccessories_get_AccessorySettings
          (AvatarAccessoryBackAccessories *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pAVar1 = (this->fields).wingSettings;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Equality
                    ((Object_1 *)pAVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 != 0) {
    pAVar1 = (AccessoryBackAccessoriesSettings *)
             UnityEngine.CoreModule.dll::UnityEngine::Component::Component_1_GetComponent_58
                       ((Component_1 *)this,
                        AccessoryBackAccessoriesSettings_MethodInfo__UnityEngine__Component__GetComponent<AccessoryBackAccessoriesSettings>__
                       );
    (this->fields).wingSettings = pAVar1;
  }
  return (AccessorySettings *)(this->fields).wingSettings;
}


/* Vector3 get_AttachmentPointWorldPos() */

Vector3 * Assembly-CSharp.dll::AvatarAccessoryBackAccessories::
          AvatarAccessoryBackAccessories_get_AttachmentPointWorldPos
                    (Vector3 *__return_storage_ptr__,AvatarAccessoryBackAccessories *this,
                    MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  pTVar1 = (this->fields).attachPosTfm;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar2 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)pTVar1,(Object_1 *)0x0,(MethodInfo *)0x0);
  if (bVar2 == 0) {
    if ((((uint)(TypeInfo__UnityEngine__Vector3->vtable).Equals.methodPtr & 0x2000000) != 0) &&
       ((TypeInfo__UnityEngine__Vector3->_1).cctor_started == 0)) {
      func_?();
    }
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Vector3::Vector3_get_zero
                       ((Vector3 *)&stack0xfffffff0,(MethodInfo *)0x0);
  }
  else {
    pTVar1 = (this->fields).attachPosTfm;
    if (pTVar1 == (Transform *)0x0) {
      func_?();
      pcVar4 = (code *)swi(3);
      pVVar3 = (Vector3 *)(*pcVar4)();
      return pVVar3;
    }
    pVVar3 = UnityEngine.CoreModule.dll::UnityEngine::Transform::Transform_get_position
                       ((Vector3 *)&stack0xfffffff0,pTVar1,(MethodInfo *)0x0);
  }
  fVar5 = pVVar3->y;
  fVar6 = pVVar3->z;
  __return_storage_ptr__->x = pVVar3->x;
  __return_storage_ptr__->y = fVar5;
  __return_storage_ptr__->z = fVar6;
  return __return_storage_ptr__;
}


/* Boolean get_HasAttachmentPoint() */

bool Assembly-CSharp.dll::AvatarAccessoryBackAccessories::
     AvatarAccessoryBackAccessories_get_HasAttachmentPoint
               (AvatarAccessoryBackAccessories *this,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(_UNK_?);
    cRam_? = '\x01';
  }
  x = (this->fields).attachPosTfm;
  if ((((uint)(TypeInfo__UnityEngine__Object->vtable).Equals.methodPtr & 0x2000000) != 0) &&
     ((TypeInfo__UnityEngine__Object->_1).cctor_started == 0)) {
    func_?(TypeInfo__UnityEngine__Object);
  }
  bVar1 = UnityEngine.CoreModule.dll::UnityEngine::Object::Object_1_op_Inequality
                    ((Object_1 *)x,(Object_1 *)0x0,(MethodInfo *)0x0);
  return bVar1;
}

