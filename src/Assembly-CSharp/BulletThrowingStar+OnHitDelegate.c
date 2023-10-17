
/* IAsyncResult BeginInvoke(VoxelHit, Ray, AsyncCallback, Object) */

IAsyncResult *
Assembly-CSharp.dll::BulletThrowingStar+OnHitDelegate::BulletThrowingStar_OnHitDelegate_BeginInvoke
          (BulletThrowingStar_OnHitDelegate *this,VoxelHit hit,Ray lineOfFire,
          AsyncCallback *callback,Object *object,MethodInfo *method)

{
  if (cRam_? == '\0') {
    func_?(&TypeInfo__UnityEngine__Ray);
    func_?(&TypeInfo__VoxelHit);
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  uStack_2 = func_?(TypeInfo__VoxelHit,&stack0x00000008);
  uStack_3 = func_?(TypeInfo__UnityEngine__Ray,
                             (undefined1 *)((int)&hit.interactionFlags + 4));
  pIVar4 = (IAsyncResult *)func_?(this,&uStack_2,lineOfFire.m_Direction.z,callback);
  return pIVar4;
}


/* Void Invoke(VoxelHit, Ray) */

void Assembly-CSharp.dll::BulletThrowingStar+OnHitDelegate::BulletThrowingStar_OnHitDelegate_Invoke
               (BulletThrowingStar_OnHitDelegate *this,VoxelHit hit,Ray lineOfFire,
               MethodInfo *method)

{
  (*(this->fields)._._.invoke_impl)((this->fields)._._.method_code);
  return;
}


/* BulletThrowingStar+OnHitDelegate(Object, IntPtr) */

void Assembly-CSharp.dll::BulletThrowingStar+OnHitDelegate::BulletThrowingStar_OnHitDelegate__ctor
               (BulletThrowingStar_OnHitDelegate *this,Object *object,void *method_1,
               MethodInfo *method)

{
  pvVar1 = (void *)func_?(method_1);
  (this->fields)._._.method_ptr = pvVar1;
  (this->fields)._._.method = method_1;
  (this->fields)._._.m_target = object;
  func_?(&(this->fields)._._.m_target,object);
  cVar2 = *(char *)((int)method_1 + 0x2e);
  (this->fields)._._.method_code = this;
  cVar3 = func_?(method_1);
  if (cVar3 == '\0') {
    if (object != (Object *)0x0) {
      (this->fields)._._.invoke_impl = (this->fields)._._.method_ptr;
      (this->fields)._._.method_code = (this->fields)._._.m_target;
      (this->fields)._._.extra_arg = &UNK_?;
      return;
    }
    uVar4 = func_?(0,&UNK_?,0);
    func_?(uVar4);
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((*(byte *)((int)method_1 + 0x2f) & 0x10) != 0) {
    puVar6 = &UNK_?;
    if (cVar2 != '\x02') {
      puVar6 = &UNK_?;
    }
    (this->fields)._._.invoke_impl = puVar6;
    (this->fields)._._.extra_arg = &UNK_?;
    return;
  }
  if (cVar2 == '\x02') {
    (this->fields)._._.invoke_impl = &UNK_?;
    (this->fields)._._.extra_arg = &UNK_?;
    return;
  }
  (this->fields)._._.method_code = (this->fields)._._.m_target;
  (this->fields)._._.invoke_impl = (this->fields)._._.method_ptr;
  (this->fields)._._.extra_arg = &UNK_?;
  return;
}

