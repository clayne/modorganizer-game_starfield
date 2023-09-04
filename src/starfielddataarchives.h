#ifndef STARFIELDDATAARCHIVES_H
#define STARFIELDDATAARCHIVES_H

#include "gamebryodataarchives.h"

namespace MOBase { class IProfile; }

#include <QStringList>
#include <QDir>

class StarfieldDataArchives : public GamebryoDataArchives
{

public:

  StarfieldDataArchives(const QDir &myGamesDir);

public:

  virtual QStringList vanillaArchives() const override;
  virtual QStringList archives(const MOBase::IProfile *profile) const override;

private:

  virtual void writeArchiveList(MOBase::IProfile *profile, const QStringList &before) override;

};

#endif // STARFIELDDATAARCHIVES_H