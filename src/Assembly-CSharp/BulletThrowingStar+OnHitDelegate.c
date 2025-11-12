
/* IAsyncResult BeginInvoke(VoxelHit, Ray, AsyncCallback, Object) */

IAsyncResult *
Assembly-CSharp.dll::BulletThrowingStar+OnHitDelegate::BulletThrowingStar_OnHitDelegate_BeginInvoke
          (BulletThrowingStar_OnHitDelegate *this,VoxelHit *hit,Ray *lineOfFire,
          AsyncCallback *callback,Object *object,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__UnityEngine__Ray);
    LOCK();
    UNLOCK();
    FUN_?(&TypeInfo__VoxelHit);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  uStack_2 = FUN_?(TypeInfo__VoxelHit,hit);
  uStack_3 = FUN_?(TypeInfo__UnityEngine__Ray,lineOfFire);
  pIVar4 = (IAsyncResult *)FUN_?(this,&uStack_2,callback,object);
  return pIVar4;
}


/* Void Invoke(VoxelHit, Ray) */

void Assembly-CSharp.dll::BulletThrowingStar+OnHitDelegate::BulletThrowingStar_OnHitDelegate_Invoke
               (BulletThrowingStar_OnHitDelegate *this,VoxelHit *hit,Ray *lineOfFire,
               MethodInfo *method)

{
  uStack_1._0_4_ = (lineOfFire->m_Origin).x;
  uStack_1._4_4_ = (lineOfFire->m_Origin).y;
  uStack_2 = *(undefined8 *)&(lineOfFire->m_Origin).z;
  uStack_3._0_4_ = (lineOfFire->m_Direction).y;
  uStack_3._4_4_ = (lineOfFire->m_Direction).z;
  uStack_4._0_4_ = (hit->point).x;
  uStack_4._4_4_ = (hit->point).y;
  uStack_5 = *(undefined8 *)&(hit->point).z;
  uStack_6._0_4_ = (hit->normal).y;
  uStack_6._4_4_ = (hit->normal).z;
  uStack_7 = *(undefined8 *)&hit->cubePos;
  uStack_8._0_4_ = hit->face;
  uStack_8._4_1_ = hit->isCubeHit;
  uStack_8._5_3_ = *(undefined3 *)&hit->field_0x25;
  uStack_9 = *(undefined8 *)&hit->woId;
  pCStack_10 = hit->cube;
  uStack_11 = *(undefined8 *)&hit->distance;
  uStack_12 = *(undefined4 *)&hit->collider;
  uStack_13 = *(undefined4 *)((longlong)&hit->collider + 4);
  uStack_14 = *(undefined4 *)&hit->transform;
  uStack_15 = *(undefined4 *)((longlong)&hit->transform + 4);
  iStack_16 = hit->interactionFlags;
  (*(this->fields)._._.invoke_impl)
            ((this->fields)._._.method_code,&uStack_4,&uStack_1,(this->fields)._._.method);
  return;
}


/* BulletThrowingStar+OnHitDelegate(Object, IntPtr) */

void Assembly-CSharp.dll::BulletThrowingStar+OnHitDelegate::BulletThrowingStar_OnHitDelegate__ctor
               (BulletThrowingStar_OnHitDelegate *this,Object *object,void *method_1,
               MethodInfo *method)

{
  bVar1 = iRam_? != 0;
  (this->fields)._._.method_ptr = *(void **)((longlong)method_1 + 8);
  (this->fields)._._.method = method_1;
  (this->fields)._._.m_target = object;
  if (bVar1) {
    uVar2 = (uint)((ulonglong)&(this->fields)._._.m_target >> 0xc);
    puVar3 = (ulonglong *)((ulonglong)((uVar2 & 0x1fffff) >> 6) * 8 + 0xADDR);
    do {
      uVar4 = *puVar3;
      LOCK();
      uVar5 = *puVar3;
      if (uVar4 == uVar5) {
        *puVar3 = uVar4 | 1L << (uVar2 & 0x3f);
      }
      UNLOCK();
    } while (uVar4 != uVar5);
  }
  cVar6 = *(char *)((longlong)method_1 + 0x52);
  (this->fields)._._.method_code = this;
  if ((*(byte *)((longlong)method_1 + 0x4c) & 0x10) == 0) {
    if (object == (Object *)0x0) {
      uVar7 = func_?();
      FUN_?(uVar7,0);
      pcVar8 = (code *)swi(3);
      (*pcVar8)();
      return;
    }
  }
  else if (cVar6 == '\x02') {
    (this->fields)._._.invoke_impl = FUN_?;
    (this->fields)._._.extra_arg = FUN_?;
    return;
  }
  (this->fields)._._.method_code = (this->fields)._._.m_target;
  (this->fields)._._.invoke_impl = (this->fields)._._.method_ptr;
  (this->fields)._._.extra_arg = FUN_?;
  return;
}

