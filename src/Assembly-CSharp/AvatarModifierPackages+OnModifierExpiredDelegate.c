
/* IAsyncResult BeginInvoke(AvatarModifierPackage, AsyncCallback, Object) */

IAsyncResult *
Assembly-CSharp.dll::AvatarModifierPackages+OnModifierExpiredDelegate::
AvatarModifierPackages_OnModifierExpiredDelegate_BeginInvoke
          (AvatarModifierPackages_OnModifierExpiredDelegate *this,AvatarModifierPackage *modifier,
          AsyncCallback *callback,Object *object,MethodInfo *method)

{
  if (cRam_? == '\0') {
    FUN_?(&TypeInfo__AvatarModifierPackage);
    LOCK();
    UNLOCK();
    cRam_? = '\x01';
  }
  uStack_1 = 0;
  uStack_2 = FUN_?(TypeInfo__AvatarModifierPackage,modifier);
  pIVar3 = (IAsyncResult *)FUN_?(this,&uStack_2,callback,object);
  return pIVar3;
}

