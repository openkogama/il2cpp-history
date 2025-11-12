
/* IAsyncResult BeginInvoke(VoxelHit, Ray, AsyncCallback, Object) */

IAsyncResult *
Assembly-CSharp.dll::Bullet+OnHitDelegate::Bullet_OnHitDelegate_BeginInvoke
          (Bullet_OnHitDelegate *this,VoxelHit *hit,Ray *lineOfFire,AsyncCallback *callback,
          Object *object,MethodInfo *method)

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

